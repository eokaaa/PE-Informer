#pragma once

#include <windows.h>
#include <string>
#include <vector>

namespace PEParser
{
	struct RichHeader
	{
		uint32_t ProduceID;
		uint32_t Build;
		uint32_t Count;

		bool operator==(const RichHeader&) const = default;
	};

	inline std::string Path;
	inline std::vector<uint8_t> BuildPE;
	inline std::vector<RichHeader> RichHeaderArr;

	std::string OpenDialogFile();
	bool OpenFile();
	std::vector<PEParser::RichHeader> ReadRichHeader(uint32_t* EndMSD);
}