#include "PEParser.h"
#include <fstream>

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

void PEParser::OpenFile()
{
	static std::string OldFile = "";
	if ((PEParser::Path == "") || OldFile == PEParser::Path)
		return;

	OldFile = PEParser::Path;

	std::ifstream isReadFile(PEParser::Path, std::ios::binary);
	if (isReadFile.is_open())
	{
		isReadFile.seekg(0, isReadFile.end);
		uintptr_t LengthReadFile = isReadFile.tellg();
		isReadFile.seekg(0, isReadFile.beg);

		PEParser::BuildPE.erase(PEParser::BuildPE.begin(), PEParser::BuildPE.end());

		PEParser::StringPE.resize(LengthReadFile);
		PEParser::BuildPE.resize(LengthReadFile);

		if (isReadFile.read(PEParser::StringPE.data(), LengthReadFile))
			PEParser::BuildPE = std::vector<uint8_t>(PEParser::StringPE.begin(), PEParser::StringPE.end());
	}
}