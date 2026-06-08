#pragma once

#include <windows.h>
#include <string>
#include <vector>

namespace PEParser
{
	inline std::string Path;
	inline std::vector<uint8_t> BuildPE;

	std::string OpenDialogFile();
	bool OpenFile();
}