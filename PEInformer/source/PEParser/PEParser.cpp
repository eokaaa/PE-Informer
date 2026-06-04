#include "PEParser.h"
#include "../gui/gui.h"


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

	return "Unknown";
}

void PEParser::MainLogPEParser(HWND Handle)
{
	ImGui::PushFont(GUI::MaterialSymbolsFont);
	
	ImGui::SetCursorPos(ImVec2(80, ImGui::GetCursorPosY() + 10));
	if (ImGui::Button("\ue2c7"))
		PEParser::Path = PEParser::OpenDialogFile().c_str();
	DragAcceptFiles(Handle, true);
	ImGui::PopFont();

	ImGui::SameLine();

	char Buffer[MAX_PATH];
	strcpy_s(Buffer, PEParser::Path.c_str());

	ImGui::PushFont(GUI::NunitoFontHigh);
	ImGui::InputTextMultiline("##Path", Buffer, sizeof(Buffer), ImVec2(600, 32));
	ImGui::PopFont();
}