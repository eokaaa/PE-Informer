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
		std::string Name;

		bool operator==(const RichHeader&) const = default;
	};

	struct Sections
	{
		std::string Name;
		uint32_t VirtualAddress;
		double Entropy;
	};

	inline std::string Path;
	inline std::vector<uint8_t> BuildPE;
	inline std::vector<RichHeader> RichHeaderArr;
	inline std::vector<Sections> SectionsInFile;

	std::string OpenDialogFile();
	bool OpenFile();
	std::vector<PEParser::RichHeader> ReadRichHeader(uint32_t* EndMSD);
	std::string GetLinkerString();
	std::string GetLinkerStringWithoutRich(uint8_t MajorLinkerVersion, uint8_t MinorLinkerVersion);
	std::string ParserSections(IMAGE_NT_HEADERS* NTHeader);
	double Entropy(uint32_t Offset, uint32_t Size);
}