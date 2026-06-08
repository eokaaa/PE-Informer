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