#pragma once

#include <windows.h>
#include <string>

namespace PEParser
{
	inline std::string Path;

	std::string OpenDialogFile();
	void MainLogPEParser(HWND Handle);
}