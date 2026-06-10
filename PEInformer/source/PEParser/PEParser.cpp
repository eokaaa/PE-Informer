#include <fstream>

#include "PEParser.h"
#include "CompId.h"

std::string PEParser::OpenDialogFile()
{
	OPENFILENAMEA SettingDialog;
	CHAR szFile[260] = { 0 };
	ZeroMemory(&SettingDialog, sizeof(OPENFILENAMEA));
	SettingDialog.lStructSize = sizeof(OPENFILENAMEA);
	SettingDialog.hwndOwner = NULL;
	SettingDialog.Flags = OFN_CREATEPROMPT | OFN_ENABLESIZING | OFN_FILEMUSTEXIST;
	SettingDialog.nMaxFile = MAX_PATH;
	SettingDialog.lpstrFile = szFile;

	if (GetOpenFileNameA(&SettingDialog) == true)
		return SettingDialog.lpstrFile;

	return "";
}

bool PEParser::OpenFile()
{
	static std::string OldFile = "";
	if (PEParser::Path == "")
		return false;
	if (OldFile == PEParser::Path)
		return true;

	OldFile = PEParser::Path;

	std::ifstream isReadFile(PEParser::Path, std::ios::binary);
	if (isReadFile.is_open())
	{
		isReadFile.seekg(0, isReadFile.end);
		uintptr_t LengthReadFile = isReadFile.tellg();
		isReadFile.seekg(0, isReadFile.beg);

		PEParser::BuildPE.erase(PEParser::BuildPE.begin(), PEParser::BuildPE.end());
		PEParser::BuildPE.resize(LengthReadFile);

		if (isReadFile.read((char*)(PEParser::BuildPE.data()), LengthReadFile))
			return true;
	}
}


std::vector<PEParser::RichHeader> PEParser::ReadRichHeader(uint32_t* EndMSD)
{
	static std::vector<PEParser::RichHeader> OldRichHeader;
	static std::string OldFile = "";
	if (PEParser::Path == "")
		return OldRichHeader;
	if (OldFile == PEParser::Path)
		return OldRichHeader;

	OldFile = PEParser::Path;
	OldRichHeader.clear();

	uint32_t* StartFile = reinterpret_cast<uint32_t*>(PEParser::BuildPE.data());

	while (*EndMSD != 0x68636952 && EndMSD > StartFile)
		EndMSD -= 1;

	uint32_t* XORKey = EndMSD + 1;

	uint32_t* FindDans = EndMSD;
	uint32_t DansHex = *EndMSD - 1;

	while (DansHex != 0x536e6144 && FindDans > StartFile)
	{
		DansHex = (*FindDans) ^ *XORKey;
		--FindDans;
	}

	FindDans += 5;
	while (*FindDans != 0x68636952 && FindDans < EndMSD - 1)
	{
		uint32_t Value1 = *(FindDans) ^ *XORKey;
		uint32_t Value2 = *(FindDans + 1) ^ *XORKey;

		PEParser::RichHeader RichInfo{ Value1 >> 16, Value1 & 0xFFFF, Value2, ""};

		if (ProduceInfo.find(Value1) != ProduceInfo.end())
			RichInfo.Name = ProduceInfo[Value1];

		OldRichHeader.push_back(RichInfo);

		FindDans += 2;
	}

	if (EndMSD > StartFile)
		return OldRichHeader;
	
	return {};
}

std::string PEParser::GetLinkerString()
{
	int MaxBuild = 0;
	std::string NameComp = "";
	for (auto& Header : PEParser::RichHeaderArr)
	{
		if (MaxBuild < Header.Build)
		{
			MaxBuild = Header.Build;
			NameComp = Header.Name;
		}
	}

	return NameComp;
}

std::string PEParser::ParserSections(IMAGE_NT_HEADERS* NTHeader)
{
	IMAGE_SECTION_HEADER* Section = IMAGE_FIRST_SECTION(NTHeader);

	for (int i = 0; i < NTHeader->FileHeader.NumberOfSections; ++i)
	{
		char RawSectionName[9] = {0};
		memcpy(RawSectionName, Section->Name, 8);
		std::string SectionName(RawSectionName);

		PEParser::SectionsInFile.push_back(PEParser::Sections{ SectionName, Section->VirtualAddress });

		if (SectionName.find("UPX") != std::string::npos) return "UPX";
		else if (SectionName.find("vmp") != std::string::npos) return "VMProtect";
		else if (SectionName.find("themida") != std::string::npos) return "Themida";
		else if (SectionName.find("winlic") != std::string::npos) return "WinLicense";
		else if (SectionName.find("aspack") != std::string::npos || 
				 SectionName.find("adata") != std::string::npos) return "ASPack";
		else if (SectionName.find("MPRESS") != std::string::npos) return "MPRESS";
		else if (SectionName.find("enigma") != std::string::npos) return "Enigma Protector";

		++Section;
	}

	return " ";
}