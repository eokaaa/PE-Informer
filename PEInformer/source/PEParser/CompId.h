// Format is:
// <comp.id> Description
#pragma once

#include <unordered_map>
#include "PEParser.h"

// I use the following extra marks in description:
// [ C ] - obj file produced by C compiler
// [C++] - obj file produced by C++ compiler
// [RES] - obj file produced by CVTRES converter
// [C S] - obj file produced by C "Std" compiler
// [C+S] - obj file produced by C++ "Std" compiler
// [C B] - obj file produced by C "Book" compiler
// [C+B] - obj file produced by C++ "Book" compiler
// [BSC] - obj file produced by Basic compiler
// [OMF] - obj file produced by CVTOMF converter
// [PGD] - obj file produced by CVTPGD converter
// [IMP] - DLL import record in library file
// [EXP] - DLL export record in library file
// [ASM] - obj file produced by assembler
// [ILA] - obj file produced by ILAssembler
// [AOb] - AliasObj
// [CIL] - CVTCIL C
// [CI+] - CVTCIL C++
// [LTC] - LTCG C (link-time code generation, C)
// [LT+] - LTCG C++ (link-time code generation, C++)
// [LTM] - LTCG MSIL
// [PGO] - POGO I profiling, C
// [PG+] - POGO I profiling, C++
// [POC] - POGO O, C
// [PO+] - POGO O, C++
// (*) at the end marks entries that are interpolated/calculated.

// Objects without @comp.id are collected under this record

std::unordered_map<uint32_t, std::string> ProduceInfo
{
	{ 0x00010000, "[---] Unmarked objects" },
	{ 0x00000000, "[---] Unmarked objects (old)" },
	{ 0x00970000, "[---] Resource" },
	{ 0x00fe0000, "[---] CVTPGD" },
	{ 0x00fe0001, "[---] CVTPGD" },

		// MSVS2026 v18.6.2
	{ 0x01048d96, "[ C ] VS2026 v18.6.2 build 36246" },
	{ 0x01038d96, "[ASM] VS2026 v18.6.2 build 36246" },
	{ 0x01058d96, "[C++] VS2026 v18.6.2 build 36246" },
	{ 0x00ff8d96, "[RES] VS2026 v18.6.2 build 36246" },
	{ 0x01028d96, "[LNK] VS2026 v18.6.2 build 36246" },
	{ 0x01008d96, "[EXP] VS2026 v18.6.2 build 36246" },
	{ 0x01018d96, "[IMP] VS2026 v18.6.2 build 36246" },
	{ 0x01088d96, "[LTC] VS2026 v18.6.2 build 36246" },
	{ 0x01098d96, "[LT+] VS2026 v18.6.2 build 36246" },
	{ 0x010b8d96, "[PGO] VS2026 v18.6.2 build 36246" },
	{ 0x010c8d96, "[PG+] VS2026 v18.6.2 build 36246" },
	{ 0x01068d96, "[CIL] VS2026 v18.6.2 build 36246 (*)" },
	{ 0x01078d96, "[CI+] VS2026 v18.6.2 build 36246 (*)" },
	{ 0x010a8d96, "[LTM] VS2026 v18.6.2 build 36246 (*)" },
	{ 0x010d8d96, "[POC] VS2026 v18.6.2 build 36246 (*)" },
	{ 0x010e8d96, "[PO+] VS2026 v18.6.2 build 36246 (*)" },

		// MSVS2026 v18.6.1
		// MSVS2026 v18.7.0-insiders+11819.209
	{ 0x01048d94, "[ C ] VS2026 v18.6.1 build 36244" },
	{ 0x01038d94, "[ASM] VS2026 v18.6.1 build 36244" },
	{ 0x01058d94, "[C++] VS2026 v18.6.1 build 36244" },
	{ 0x00ff8d94, "[RES] VS2026 v18.6.1 build 36244" },
	{ 0x01028d94, "[LNK] VS2026 v18.6.1 build 36244" },
	{ 0x01008d94, "[EXP] VS2026 v18.6.1 build 36244" },
	{ 0x01018d94, "[IMP] VS2026 v18.6.1 build 36244" },
	{ 0x01088d94, "[LTC] VS2026 v18.6.1 build 36244" },
	{ 0x01098d94, "[LT+] VS2026 v18.6.1 build 36244" },
	{ 0x010b8d94, "[PGO] VS2026 v18.6.1 build 36244" },
	{ 0x010c8d94, "[PG+] VS2026 v18.6.1 build 36244" },
	{ 0x01068d94, "[CIL] VS2026 v18.6.1 build 36244 (*)" },
	{ 0x01078d94, "[CI+] VS2026 v18.6.1 build 36244 (*)" },
	{ 0x010a8d94, "[LTM] VS2026 v18.6.1 build 36244 (*)" },
	{ 0x010d8d94, "[POC] VS2026 v18.6.1 build 36244 (*)" },
	{ 0x010e8d94, "[PO+] VS2026 v18.6.1 build 36244 (*)" },

		// MSVS2026 v18.6.0
		// MSVS2026 v18.7.0-insiders+11811.120
	{ 0x01048d93, "[ C ] VS2026 v18.6.0 build 36243" },
	{ 0x01038d93, "[ASM] VS2026 v18.6.0 build 36243" },
	{ 0x01058d93, "[C++] VS2026 v18.6.0 build 36243" },
	{ 0x00ff8d93, "[RES] VS2026 v18.6.0 build 36243" },
	{ 0x01028d93, "[LNK] VS2026 v18.6.0 build 36243" },
	{ 0x01008d93, "[EXP] VS2026 v18.6.0 build 36243" },
	{ 0x01018d93, "[IMP] VS2026 v18.6.0 build 36243" },
	{ 0x01088d93, "[LTC] VS2026 v18.6.0 build 36243" },
	{ 0x01098d93, "[LT+] VS2026 v18.6.0 build 36243" },
	{ 0x010b8d93, "[PGO] VS2026 v18.6.0 build 36243" },
	{ 0x010c8d93, "[PG+] VS2026 v18.6.0 build 36243" },
	{ 0x01068d93, "[CIL] VS2026 v18.6.0 build 36243 (*)" },
	{ 0x01078d93, "[CI+] VS2026 v18.6.0 build 36243 (*)" },
	{ 0x010a8d93, "[LTM] VS2026 v18.6.0 build 36243 (*)" },
	{ 0x010d8d93, "[POC] VS2026 v18.6.0 build 36243 (*)" },
	{ 0x010e8d93, "[PO+] VS2026 v18.6.0 build 36243 (*)" },

		// MSVS2026 v18.5.2
	{ 0x01048b92, "[ C ] VS2026 v18.5.2 build 35730" },
	{ 0x01038b92, "[ASM] VS2026 v18.5.2 build 35730" },
	{ 0x01058b92, "[C++] VS2026 v18.5.2 build 35730" },
	{ 0x00ff8b92, "[RES] VS2026 v18.5.2 build 35730" },
	{ 0x01028b92, "[LNK] VS2026 v18.5.2 build 35730" },
	{ 0x01008b92, "[EXP] VS2026 v18.5.2 build 35730" },
	{ 0x01018b92, "[IMP] VS2026 v18.5.2 build 35730" },
	{ 0x01088b92, "[LTC] VS2026 v18.5.2 build 35730" },
	{ 0x01098b92, "[LT+] VS2026 v18.5.2 build 35730" },
	{ 0x010b8b92, "[PGO] VS2026 v18.5.2 build 35730" },
	{ 0x010c8b92, "[PG+] VS2026 v18.5.2 build 35730" },
	{ 0x01068b92, "[CIL] VS2026 v18.5.2 build 35730 (*)" },
	{ 0x01078b92, "[CI+] VS2026 v18.5.2 build 35730 (*)" },
	{ 0x010a8b92, "[LTM] VS2026 v18.5.2 build 35730 (*)" },
	{ 0x010d8b92, "[POC] VS2026 v18.5.2 build 35730 (*)" },
	{ 0x010e8b92, "[PO+] VS2026 v18.5.2 build 35730 (*)" },

		// MSVS2026 v18.5.0
		// MSVS2026 v18.5.1
	{ 0x01048b91, "[ C ] VS2026 v18.5.0 build 35729" },
	{ 0x01038b91, "[ASM] VS2026 v18.5.0 build 35729" },
	{ 0x01058b91, "[C++] VS2026 v18.5.0 build 35729" },
	{ 0x00ff8b91, "[RES] VS2026 v18.5.0 build 35729" },
	{ 0x01028b91, "[LNK] VS2026 v18.5.0 build 35729" },
	{ 0x01008b91, "[EXP] VS2026 v18.5.0 build 35729" },
	{ 0x01018b91, "[IMP] VS2026 v18.5.0 build 35729" },
	{ 0x01088b91, "[LTC] VS2026 v18.5.0 build 35729" },
	{ 0x01098b91, "[LT+] VS2026 v18.5.0 build 35729" },
	{ 0x010b8b91, "[PGO] VS2026 v18.5.0 build 35729" },
	{ 0x010c8b91, "[PG+] VS2026 v18.5.0 build 35729" },
	{ 0x01068b91, "[CIL] VS2026 v18.5.0 build 35729 (*)" },
	{ 0x01078b91, "[CI+] VS2026 v18.5.0 build 35729 (*)" },
	{ 0x010a8b91, "[LTM] VS2026 v18.5.0 build 35729 (*)" },
	{ 0x010d8b91, "[POC] VS2026 v18.5.0 build 35729 (*)" },
	{ 0x010e8b91, "[PO+] VS2026 v18.5.0 build 35729 (*)" },

	// MSVS2026 v18.4.2
	// MSVS2026 v18.5.0-insiders+11619.145
	// MSVS2026 v18.4.3
	// MSVS2026 v18.5.0-insiders+11626.173
	{ 0x01048b90, "[ C ] VS2026 v18.4.2 build 35728" },
	{ 0x01038b90, "[ASM] VS2026 v18.4.2 build 35728" },
	{ 0x01058b90, "[C++] VS2026 v18.4.2 build 35728" },
	{ 0x00ff8b90, "[RES] VS2026 v18.4.2 build 35728" },
	{ 0x01028b90, "[LNK] VS2026 v18.4.2 build 35728" },
	{ 0x01008b90, "[EXP] VS2026 v18.4.2 build 35728" },
	{ 0x01018b90, "[IMP] VS2026 v18.4.2 build 35728" },
	{ 0x01088b90, "[LTC] VS2026 v18.4.2 build 35728" },
	{ 0x01098b90, "[LT+] VS2026 v18.4.2 build 35728" },
	{ 0x010b8b90, "[PGO] VS2026 v18.4.2 build 35728" },
	{ 0x010c8b90, "[PG+] VS2026 v18.4.2 build 35728" },
	{ 0x01068b90, "[CIL] VS2026 v18.4.2 build 35728 (*)" },
	{ 0x01078b90, "[CI+] VS2026 v18.4.2 build 35728 (*)" },
	{ 0x010a8b90, "[LTM] VS2026 v18.4.2 build 35728 (*)" },
	{ 0x010d8b90, "[POC] VS2026 v18.4.2 build 35728 (*)" },
	{ 0x010e8b90, "[PO+] VS2026 v18.4.2 build 35728 (*)" },

	// MSVS2026 v18.4.1
	// MSVS2026 v18.5.0-insiders+11612.153
	{ 0x01048b8f, "[ C ] VS2026 v18.4.1 build 35727" },
	{ 0x01038b8f, "[ASM] VS2026 v18.4.1 build 35727" },
	{ 0x01058b8f, "[C++] VS2026 v18.4.1 build 35727" },
	{ 0x00ff8b8f, "[RES] VS2026 v18.4.1 build 35727" },
	{ 0x01028b8f, "[LNK] VS2026 v18.4.1 build 35727" },
	{ 0x01008b8f, "[EXP] VS2026 v18.4.1 build 35727" },
	{ 0x01018b8f, "[IMP] VS2026 v18.4.1 build 35727" },
	{ 0x01088b8f, "[LTC] VS2026 v18.4.1 build 35727" },
	{ 0x01098b8f, "[LT+] VS2026 v18.4.1 build 35727" },
	{ 0x010b8b8f, "[PGO] VS2026 v18.4.1 build 35727" },
	{ 0x010c8b8f, "[PG+] VS2026 v18.4.1 build 35727" },
	{ 0x01068b8f, "[CIL] VS2026 v18.4.1 build 35727 (*)" },
	{ 0x01078b8f, "[CI+] VS2026 v18.4.1 build 35727 (*)" },
	{ 0x010a8b8f, "[LTM] VS2026 v18.4.1 build 35727 (*)" },
	{ 0x010d8b8f, "[POC] VS2026 v18.4.1 build 35727 (*)" },
	{ 0x010e8b8f, "[PO+] VS2026 v18.4.1 build 35727 (*)" },

	// MSVS2026 v18.4.0
	// MSVS2026 v18.5.0-insiders+11605.296
	{ 0x01048b8e, "[ C ] VS2026 v18.4.0 build 35726" },
	{ 0x01038b8e, "[ASM] VS2026 v18.4.0 build 35726" },
	{ 0x01058b8e, "[C++] VS2026 v18.4.0 build 35726" },
	{ 0x00ff8b8e, "[RES] VS2026 v18.4.0 build 35726" },
	{ 0x01028b8e, "[LNK] VS2026 v18.4.0 build 35726" },
	{ 0x01008b8e, "[EXP] VS2026 v18.4.0 build 35726" },
	{ 0x01018b8e, "[IMP] VS2026 v18.4.0 build 35726" },
	{ 0x01088b8e, "[LTC] VS2026 v18.4.0 build 35726" },
	{ 0x01098b8e, "[LT+] VS2026 v18.4.0 build 35726" },
	{ 0x010b8b8e, "[PGO] VS2026 v18.4.0 build 35726" },
	{ 0x010c8b8e, "[PG+] VS2026 v18.4.0 build 35726" },
	{ 0x01068b8e, "[CIL] VS2026 v18.4.0 build 35726 (*)" },
	{ 0x01078b8e, "[CI+] VS2026 v18.4.0 build 35726 (*)" },
	{ 0x010a8b8e, "[LTM] VS2026 v18.4.0 build 35726 (*)" },
	{ 0x010d8b8e, "[POC] VS2026 v18.4.0 build 35726 (*)" },
	{ 0x010e8b8e, "[PO+] VS2026 v18.4.0 build 35726 (*)" },

	// MSVS2026 v18.3.2
	// MSVS2026 v18.4.0-insiders+11519.219
	{ 0x01048b8d, "[ C ] VS2026 v18.3.2 build 35725" },
	{ 0x01038b8d, "[ASM] VS2026 v18.3.2 build 35725" },
	{ 0x01058b8d, "[C++] VS2026 v18.3.2 build 35725" },
	{ 0x00ff8b8d, "[RES] VS2026 v18.3.2 build 35725" },
	{ 0x01028b8d, "[LNK] VS2026 v18.3.2 build 35725" },
	{ 0x01008b8d, "[EXP] VS2026 v18.3.2 build 35725" },
	{ 0x01018b8d, "[IMP] VS2026 v18.3.2 build 35725" },
	{ 0x01088b8d, "[LTC] VS2026 v18.3.2 build 35725" },
	{ 0x01098b8d, "[LT+] VS2026 v18.3.2 build 35725" },
	{ 0x010b8b8d, "[PGO] VS2026 v18.3.2 build 35725" },
	{ 0x010c8b8d, "[PG+] VS2026 v18.3.2 build 35725" },
	{ 0x01068b8d, "[CIL] VS2026 v18.3.2 build 35725 (*)" },
	{ 0x01078b8d, "[CI+] VS2026 v18.3.2 build 35725 (*)" },
	{ 0x010a8b8d, "[LTM] VS2026 v18.3.2 build 35725 (*)" },
	{ 0x010d8b8d, "[POC] VS2026 v18.3.2 build 35725 (*)" },
	{ 0x010e8b8d, "[PO+] VS2026 v18.3.2 build 35725 (*)" },

	// MSVS2026 v18.2.1
	// MSVS2026 v18.3.0-insiders+11415.281
	// MSVS2026 v18.3.0-insiders+11426.168
	{ 0x01048b8b, "[ C ] VS2026 v18.2.1 build 35723" },
	{ 0x01038b8b, "[ASM] VS2026 v18.2.1 build 35723" },
	{ 0x01058b8b, "[C++] VS2026 v18.2.1 build 35723" },
	{ 0x00ff8b8b, "[RES] VS2026 v18.2.1 build 35723" },
	{ 0x01028b8b, "[LNK] VS2026 v18.2.1 build 35723" },
	{ 0x01008b8b, "[EXP] VS2026 v18.2.1 build 35723" },
	{ 0x01018b8b, "[IMP] VS2026 v18.2.1 build 35723" },
	{ 0x01088b8b, "[LTC] VS2026 v18.2.1 build 35723" },
	{ 0x01098b8b, "[LT+] VS2026 v18.2.1 build 35723" },
	{ 0x010b8b8b, "[PGO] VS2026 v18.2.1 build 35723" },
	{ 0x010c8b8b, "[PG+] VS2026 v18.2.1 build 35723" },
	{ 0x01068b8b, "[CIL] VS2026 v18.2.1 build 35723 (*)" },
	{ 0x01078b8b, "[CI+] VS2026 v18.2.1 build 35723 (*)" },
	{ 0x010a8b8b, "[LTM] VS2026 v18.2.1 build 35723 (*)" },
	{ 0x010d8b8b, "[POC] VS2026 v18.2.1 build 35723 (*)" },
	{ 0x010e8b8b, "[PO+] VS2026 v18.2.1 build 35723 (*)" },


	// MSVS2026 v18.6.0-insiders+11723.189
	{ 0x01048d91, "[ C ] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01038d91, "[ASM] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01058d91, "[C++] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x00ff8d91, "[RES] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01028d91, "[LNK] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01008d91, "[EXP] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01018d91, "[IMP] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01088d91, "[LTC] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01098d91, "[LT+] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x010b8d91, "[PGO] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x010c8d91, "[PG+] VS2026 v18.6.0 Insiders [11723.189] build 36241" },
	{ 0x01068d91, "[CIL] VS2026 v18.6.0 Insiders [11723.189] build 36241 (*)" },
	{ 0x01078d91, "[CI+] VS2026 v18.6.0 Insiders [11723.189] build 36241 (*)" },
	{ 0x010a8d91, "[LTM] VS2026 v18.6.0 Insiders [11723.189] build 36241 (*)" },
	{ 0x010d8d91, "[POC] VS2026 v18.6.0 Insiders [11723.189] build 36241 (*)" },
	{ 0x010e8d91, "[PO+] VS2026 v18.6.0 Insiders [11723.189] build 36241 (*)" },

	// MSVS2026 v18.6.0-insiders+11716.218
	{ 0x01048d8d, "[ C ] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01038d8d, "[ASM] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01058d8d, "[C++] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x00ff8d8d, "[RES] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01028d8d, "[LNK] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01008d8d, "[EXP] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01018d8d, "[IMP] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01088d8d, "[LTC] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01098d8d, "[LT+] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x010b8d8d, "[PGO] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x010c8d8d, "[PG+] VS2026 v18.6.0 Insiders [11716.218] build 36237" },
	{ 0x01068d8d, "[CIL] VS2026 v18.6.0 Insiders [11716.218] build 36237 (*)" },
	{ 0x01078d8d, "[CI+] VS2026 v18.6.0 Insiders [11716.218] build 36237 (*)" },
	{ 0x010a8d8d, "[LTM] VS2026 v18.6.0 Insiders [11716.218] build 36237 (*)" },
	{ 0x010d8d8d, "[POC] VS2026 v18.6.0 Insiders [11716.218] build 36237 (*)" },
	{ 0x010e8d8d, "[PO+] VS2026 v18.6.0 Insiders [11716.218] build 36237 (*)" },

	// MSVS2026 v18.6.0-insiders+11709.129
	{ 0x01048d87, "[ C ] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01038d87, "[ASM] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01058d87, "[C++] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x00ff8d87, "[RES] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01028d87, "[LNK] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01008d87, "[EXP] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01018d87, "[IMP] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01088d87, "[LTC] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01098d87, "[LT+] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x010b8d87, "[PGO] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x010c8d87, "[PG+] VS2026 v18.6.0 Insiders [11709.129] build 36231" },
	{ 0x01068d87, "[CIL] VS2026 v18.6.0 Insiders [11709.129] build 36231 (*)" },
	{ 0x01078d87, "[CI+] VS2026 v18.6.0 Insiders [11709.129] build 36231 (*)" },
	{ 0x010a8d87, "[LTM] VS2026 v18.6.0 Insiders [11709.129] build 36231 (*)" },
	{ 0x010d8d87, "[POC] VS2026 v18.6.0 Insiders [11709.129] build 36231 (*)" },
	{ 0x010e8d87, "[PO+] VS2026 v18.6.0 Insiders [11709.129] build 36231 (*)" },

	// MSVS2026 v18.3.0-insiders+11429.125
	// MSVS2026 v18.3.0
	// MSVS2026 v18.4.0-insiders+11506.43
	// MSVS2026 v18.3.1
	// MSVS2026 v18.4.0-insiders+11513.90
	{ 0x01048b8c, "[ C ] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01038b8c, "[ASM] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01058b8c, "[C++] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x00ff8b8c, "[RES] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01028b8c, "[LNK] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01008b8c, "[EXP] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01018b8c, "[IMP] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01088b8c, "[LTC] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01098b8c, "[LT+] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x010b8b8c, "[PGO] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x010c8b8c, "[PG+] VS2026 v18.3.0 Insiders [11429.125] build 35724" },
	{ 0x01068b8c, "[CIL] VS2026 v18.3.0 Insiders [11429.125] build 35724 (*)" },
	{ 0x01078b8c, "[CI+] VS2026 v18.3.0 Insiders [11429.125] build 35724 (*)" },
	{ 0x010a8b8c, "[LTM] VS2026 v18.3.0 Insiders [11429.125] build 35724 (*)" },
	{ 0x010d8b8c, "[POC] VS2026 v18.3.0 Insiders [11429.125] build 35724 (*)" },
	{ 0x010e8b8c, "[PO+] VS2026 v18.3.0 Insiders [11429.125] build 35724 (*)" },

	// MSVS2026 v18.3.0-insiders+11408.92
	// MSVS2026 v18.2.0
	{ 0x01048b8a, "[ C ] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01038b8a, "[ASM] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01058b8a, "[C++] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x00ff8b8a, "[RES] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01028b8a, "[LNK] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01008b8a, "[EXP] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01018b8a, "[IMP] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01088b8a, "[LTC] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01098b8a, "[LT+] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x010b8b8a, "[PGO] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x010c8b8a, "[PG+] VS2026 v18.3.0 Insiders [11408.92] build 35722" },
	{ 0x01068b8a, "[CIL] VS2026 v18.3.0 Insiders [11408.92] build 35722 (*)" },
	{ 0x01078b8a, "[CI+] VS2026 v18.3.0 Insiders [11408.92] build 35722 (*)" },
	{ 0x010a8b8a, "[LTM] VS2026 v18.3.0 Insiders [11408.92] build 35722 (*)" },
	{ 0x010d8b8a, "[POC] VS2026 v18.3.0 Insiders [11408.92] build 35722 (*)" },
	{ 0x010e8b8a, "[PO+] VS2026 v18.3.0 Insiders [11408.92] build 35722 (*)" },

	// MSVS2026 v18.3.0-insiders+11312.210
	// MSVS2026 v18.1.1
	{ 0x01048b89, "[ C ] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01038b89, "[ASM] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01058b89, "[C++] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x00ff8b89, "[RES] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01028b89, "[LNK] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01008b89, "[EXP] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01018b89, "[IMP] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01088b89, "[LTC] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01098b89, "[LT+] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x010b8b89, "[PGO] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x010c8b89, "[PG+] VS2026 v18.3.0 Insiders [11312.210] build 35721" },
	{ 0x01068b89, "[CIL] VS2026 v18.3.0 Insiders [11312.210] build 35721 (*)" },
	{ 0x01078b89, "[CI+] VS2026 v18.3.0 Insiders [11312.210] build 35721 (*)" },
	{ 0x010a8b89, "[LTM] VS2026 v18.3.0 Insiders [11312.210] build 35721 (*)" },
	{ 0x010d8b89, "[POC] VS2026 v18.3.0 Insiders [11312.210] build 35721 (*)" },
	{ 0x010e8b89, "[PO+] VS2026 v18.3.0 Insiders [11312.210] build 35721 (*)" },

	// MSVS2026 v18.3.0-insiders+11304.161
	// MSVS2026 v18.1.0
	// MSVS2026 v18.3.0-insiders+11310.294
	{ 0x01048b88, "[ C ] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01038b88, "[ASM] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01058b88, "[C++] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x00ff8b88, "[RES] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01028b88, "[LNK] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01008b88, "[EXP] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01018b88, "[IMP] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01088b88, "[LTC] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01098b88, "[LT+] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x010b8b88, "[PGO] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x010c8b88, "[PG+] VS2026 v18.3.0 Insiders [11304.161] build 35720" },
	{ 0x01068b88, "[CIL] VS2026 v18.3.0 Insiders [11304.161] build 35720 (*)" },
	{ 0x01078b88, "[CI+] VS2026 v18.3.0 Insiders [11304.161] build 35720 (*)" },
	{ 0x010a8b88, "[LTM] VS2026 v18.3.0 Insiders [11304.161] build 35720 (*)" },
	{ 0x010d8b88, "[POC] VS2026 v18.3.0 Insiders [11304.161] build 35720 (*)" },
	{ 0x010e8b88, "[PO+] VS2026 v18.3.0 Insiders [11304.161] build 35720 (*)" },

	// MSVS2026 v18.3.0-insiders+11222.16
	{ 0x01048b87, "[ C ] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01038b87, "[ASM] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01058b87, "[C++] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x00ff8b87, "[RES] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01028b87, "[LNK] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01008b87, "[EXP] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01018b87, "[IMP] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01088b87, "[LTC] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01098b87, "[LT+] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x010b8b87, "[PGO] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x010c8b87, "[PG+] VS2026 v18.3.0 Insiders [11222.16] build 35719" },
	{ 0x01068b87, "[CIL] VS2026 v18.3.0 Insiders [11222.16] build 35719 (*)" },
	{ 0x01078b87, "[CI+] VS2026 v18.3.0 Insiders [11222.16] build 35719 (*)" },
	{ 0x010a8b87, "[LTM] VS2026 v18.3.0 Insiders [11222.16] build 35719 (*)" },
	{ 0x010d8b87, "[POC] VS2026 v18.3.0 Insiders [11222.16] build 35719 (*)" },
	{ 0x010e8b87, "[PO+] VS2026 v18.3.0 Insiders [11222.16] build 35719 (*)" },

	// MSVS2026 v18.3.0-insiders+11218.70
	{ 0x01048b86, "[ C ] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01038b86, "[ASM] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01058b86, "[C++] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x00ff8b86, "[RES] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01028b86, "[LNK] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01008b86, "[EXP] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01018b86, "[IMP] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01088b86, "[LTC] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01098b86, "[LT+] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x010b8b86, "[PGO] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x010c8b86, "[PG+] VS2026 v18.3.0 Insiders [11218.70] build 35718" },
	{ 0x01068b86, "[CIL] VS2026 v18.3.0 Insiders [11218.70] build 35718 (*)" },
	{ 0x01078b86, "[CI+] VS2026 v18.3.0 Insiders [11218.70] build 35718 (*)" },
	{ 0x010a8b86, "[LTM] VS2026 v18.3.0 Insiders [11218.70] build 35718 (*)" },
	{ 0x010d8b86, "[POC] VS2026 v18.3.0 Insiders [11218.70] build 35718 (*)" },
	{ 0x010e8b86, "[PO+] VS2026 v18.3.0 Insiders [11218.70] build 35718 (*)" },

	// MSVS2026 v18.0.0-insiders
	// MSVS2026 v18.0.0-insiders+11123.170
	// MSVS2026 v18.3.0-insiders+11206.111
	{ 0x01048b85, "[ C ] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01038b85, "[ASM] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01058b85, "[C++] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x00ff8b85, "[RES] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01028b85, "[LNK] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01008b85, "[EXP] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01018b85, "[IMP] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01088b85, "[LTC] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01098b85, "[LT+] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x010b8b85, "[PGO] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x010c8b85, "[PG+] VS2026 v18.0.0 Insiders build 35717" },
	{ 0x01068b85, "[CIL] VS2026 v18.0.0 Insiders build 35717 (*)" },
	{ 0x01078b85, "[CI+] VS2026 v18.0.0 Insiders build 35717 (*)" },
	{ 0x010a8b85, "[LTM] VS2026 v18.0.0 Insiders build 35717 (*)" },
	{ 0x010d8b85, "[POC] VS2026 v18.0.0 Insiders build 35717 (*)" },
	{ 0x010e8b85, "[PO+] VS2026 v18.0.0 Insiders build 35717 (*)" },

	// MSVS2026 v18.0.0-insiders
	{ 0x01048b7e, "[ C ] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01038b7e, "[ASM] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01058b7e, "[C++] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x00ff8b7e, "[RES] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01028b7e, "[LNK] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01008b7e, "[EXP] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01018b7e, "[IMP] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01088b7e, "[LTC] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01098b7e, "[LT+] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x010b8b7e, "[PGO] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x010c8b7e, "[PG+] VS2026 v18.0.0 Insiders build 35710" },
	{ 0x01068b7e, "[CIL] VS2026 v18.0.0 Insiders build 35710 (*)" },
	{ 0x01078b7e, "[CI+] VS2026 v18.0.0 Insiders build 35710 (*)" },
	{ 0x010a8b7e, "[LTM] VS2026 v18.0.0 Insiders build 35710 (*)" },
	{ 0x010d8b7e, "[POC] VS2026 v18.0.0 Insiders build 35710 (*)" },
	{ 0x010e8b7e, "[PO+] VS2026 v18.0.0 Insiders build 35710 (*)" },

	// MSVS2026 v18.0.0-insiders
	{ 0x01048b76, "[ C ] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01038b76, "[ASM] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01058b76, "[C++] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x00ff8b76, "[RES] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01028b76, "[LNK] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01008b76, "[EXP] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01018b76, "[IMP] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01088b76, "[LTC] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01098b76, "[LT+] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x010b8b76, "[PGO] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x010c8b76, "[PG+] VS2026 v18.0.0 Insiders build 35702" },
	{ 0x01068b76, "[CIL] VS2026 v18.0.0 Insiders build 35702 (*)" },
	{ 0x01078b76, "[CI+] VS2026 v18.0.0 Insiders build 35702 (*)" },
	{ 0x010a8b76, "[LTM] VS2026 v18.0.0 Insiders build 35702 (*)" },
	{ 0x010d8b76, "[POC] VS2026 v18.0.0 Insiders build 35702 (*)" },
	{ 0x010e8b76, "[PO+] VS2026 v18.0.0 Insiders build 35702 (*)" },

	// MSVS2026 v18.0.0-insiders
	{ 0x01048b1f, "[ C ] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01038b1f, "[ASM] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01058b1f, "[C++] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x00ff8b1f, "[RES] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01028b1f, "[LNK] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01008b1f, "[EXP] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01018b1f, "[IMP] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01088b1f, "[LTC] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01098b1f, "[LT+] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x010b8b1f, "[PGO] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x010c8b1f, "[PG+] VS2026 v18.0.0 Insiders build 35615" },
	{ 0x01068b1f, "[CIL] VS2026 v18.0.0 Insiders build 35615 (*)" },
	{ 0x01078b1f, "[CI+] VS2026 v18.0.0 Insiders build 35615 (*)" },
	{ 0x010a8b1f, "[LTM] VS2026 v18.0.0 Insiders build 35615 (*)" },
	{ 0x010d8b1f, "[POC] VS2026 v18.0.0 Insiders build 35615 (*)" },
	{ 0x010e8b1f, "[PO+] VS2026 v18.0.0 Insiders build 35615 (*)" },

	// MSVS2026 v18.0.0-insiders
	{ 0x01048aaf, "[ C ] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01038aaf, "[ASM] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01058aaf, "[C++] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x00ff8aaf, "[RES] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01028aaf, "[LNK] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01008aaf, "[EXP] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01018aaf, "[IMP] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01088aaf, "[LTC] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01098aaf, "[LT+] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x010b8aaf, "[PGO] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x010c8aaf, "[PG+] VS2026 v18.0.0 Insiders build 35503" },
	{ 0x01068aaf, "[CIL] VS2026 v18.0.0 Insiders build 35503 (*)" },
	{ 0x01078aaf, "[CI+] VS2026 v18.0.0 Insiders build 35503 (*)" },
	{ 0x010a8aaf, "[LTM] VS2026 v18.0.0 Insiders build 35503 (*)" },
	{ 0x010d8aaf, "[POC] VS2026 v18.0.0 Insiders build 35503 (*)" },
	{ 0x010e8aaf, "[PO+] VS2026 v18.0.0 Insiders build 35503 (*)" },

	// MSVS2022 v17.14.32
	// MSVS2022 v17.14.33
	{ 0x0104899b, "[ C ] VS2022 v17.14.32 build 35227" },
	{ 0x0103899b, "[ASM] VS2022 v17.14.32 build 35227" },
	{ 0x0105899b, "[C++] VS2022 v17.14.32 build 35227" },
	{ 0x00ff899b, "[RES] VS2022 v17.14.32 build 35227" },
	{ 0x0102899b, "[LNK] VS2022 v17.14.32 build 35227" },
	{ 0x0100899b, "[EXP] VS2022 v17.14.32 build 35227" },
	{ 0x0101899b, "[IMP] VS2022 v17.14.32 build 35227" },
	{ 0x0108899b, "[LTC] VS2022 v17.14.32 build 35227" },
	{ 0x0109899b, "[LT+] VS2022 v17.14.32 build 35227" },
	{ 0x010b899b, "[PGO] VS2022 v17.14.32 build 35227" },
	{ 0x010c899b, "[PG+] VS2022 v17.14.32 build 35227" },
	{ 0x0106899b, "[CIL] VS2022 v17.14.32 build 35227 (*)" },
	{ 0x0107899b, "[CI+] VS2022 v17.14.32 build 35227 (*)" },
	{ 0x010a899b, "[LTM] VS2022 v17.14.32 build 35227 (*)" },
	{ 0x010d899b, "[POC] VS2022 v17.14.32 build 35227 (*)" },
	{ 0x010e899b, "[PO+] VS2022 v17.14.32 build 35227 (*)" },

	// MSVS2022 v17.14.31
	{ 0x0104899a, "[ C ] VS2022 v17.14.31 build 35226" },
	{ 0x0103899a, "[ASM] VS2022 v17.14.31 build 35226" },
	{ 0x0105899a, "[C++] VS2022 v17.14.31 build 35226" },
	{ 0x00ff899a, "[RES] VS2022 v17.14.31 build 35226" },
	{ 0x0102899a, "[LNK] VS2022 v17.14.31 build 35226" },
	{ 0x0100899a, "[EXP] VS2022 v17.14.31 build 35226" },
	{ 0x0101899a, "[IMP] VS2022 v17.14.31 build 35226" },
	{ 0x0108899a, "[LTC] VS2022 v17.14.31 build 35226" },
	{ 0x0109899a, "[LT+] VS2022 v17.14.31 build 35226" },
	{ 0x010b899a, "[PGO] VS2022 v17.14.31 build 35226" },
	{ 0x010c899a, "[PG+] VS2022 v17.14.31 build 35226" },
	{ 0x0106899a, "[CIL] VS2022 v17.14.31 build 35226 (*)" },
	{ 0x0107899a, "[CI+] VS2022 v17.14.31 build 35226 (*)" },
	{ 0x010a899a, "[LTM] VS2022 v17.14.31 build 35226 (*)" },
	{ 0x010d899a, "[POC] VS2022 v17.14.31 build 35226 (*)" },
	{ 0x010e899a, "[PO+] VS2022 v17.14.31 build 35226 (*)" },

	// MSVS2022 v17.14.29
	// MSVS2022 v17.14.30
	{ 0x01048999, "[ C ] VS2022 v17.14.29 build 35225" },
	{ 0x01038999, "[ASM] VS2022 v17.14.29 build 35225" },
	{ 0x01058999, "[C++] VS2022 v17.14.29 build 35225" },
	{ 0x00ff8999, "[RES] VS2022 v17.14.29 build 35225" },
	{ 0x01028999, "[LNK] VS2022 v17.14.29 build 35225" },
	{ 0x01008999, "[EXP] VS2022 v17.14.29 build 35225" },
	{ 0x01018999, "[IMP] VS2022 v17.14.29 build 35225" },
	{ 0x01088999, "[LTC] VS2022 v17.14.29 build 35225" },
	{ 0x01098999, "[LT+] VS2022 v17.14.29 build 35225" },
	{ 0x010b8999, "[PGO] VS2022 v17.14.29 build 35225" },
	{ 0x010c8999, "[PG+] VS2022 v17.14.29 build 35225" },
	{ 0x01068999, "[CIL] VS2022 v17.14.29 build 35225 (*)" },
	{ 0x01078999, "[CI+] VS2022 v17.14.29 build 35225 (*)" },
	{ 0x010a8999, "[LTM] VS2022 v17.14.29 build 35225 (*)" },
	{ 0x010d8999, "[POC] VS2022 v17.14.29 build 35225 (*)" },
	{ 0x010e8999, "[PO+] VS2022 v17.14.29 build 35225 (*)" },

	// MSVS2022 v17.14.28
	{ 0x01048998, "[ C ] VS2022 v17.14.28 build 35224" },
	{ 0x01038998, "[ASM] VS2022 v17.14.28 build 35224" },
	{ 0x01058998, "[C++] VS2022 v17.14.28 build 35224" },
	{ 0x00ff8998, "[RES] VS2022 v17.14.28 build 35224" },
	{ 0x01028998, "[LNK] VS2022 v17.14.28 build 35224" },
	{ 0x01008998, "[EXP] VS2022 v17.14.28 build 35224" },
	{ 0x01018998, "[IMP] VS2022 v17.14.28 build 35224" },
	{ 0x01088998, "[LTC] VS2022 v17.14.28 build 35224" },
	{ 0x01098998, "[LT+] VS2022 v17.14.28 build 35224" },
	{ 0x010b8998, "[PGO] VS2022 v17.14.28 build 35224" },
	{ 0x010c8998, "[PG+] VS2022 v17.14.28 build 35224" },
	{ 0x01068998, "[CIL] VS2022 v17.14.28 build 35224 (*)" },
	{ 0x01078998, "[CI+] VS2022 v17.14.28 build 35224 (*)" },
	{ 0x010a8998, "[LTM] VS2022 v17.14.28 build 35224 (*)" },
	{ 0x010d8998, "[POC] VS2022 v17.14.28 build 35224 (*)" },
	{ 0x010e8998, "[PO+] VS2022 v17.14.28 build 35224 (*)" },

	// MSVS2022 v17.14.27
	{ 0x01048997, "[ C ] VS2022 v17.14.27 build 35223" },
	{ 0x01038997, "[ASM] VS2022 v17.14.27 build 35223" },
	{ 0x01058997, "[C++] VS2022 v17.14.27 build 35223" },
	{ 0x00ff8997, "[RES] VS2022 v17.14.27 build 35223" },
	{ 0x01028997, "[LNK] VS2022 v17.14.27 build 35223" },
	{ 0x01008997, "[EXP] VS2022 v17.14.27 build 35223" },
	{ 0x01018997, "[IMP] VS2022 v17.14.27 build 35223" },
	{ 0x01088997, "[LTC] VS2022 v17.14.27 build 35223" },
	{ 0x01098997, "[LT+] VS2022 v17.14.27 build 35223" },
	{ 0x010b8997, "[PGO] VS2022 v17.14.27 build 35223" },
	{ 0x010c8997, "[PG+] VS2022 v17.14.27 build 35223" },
	{ 0x01068997, "[CIL] VS2022 v17.14.27 build 35223 (*)" },
	{ 0x01078997, "[CI+] VS2022 v17.14.27 build 35223 (*)" },
	{ 0x010a8997, "[LTM] VS2022 v17.14.27 build 35223 (*)" },
	{ 0x010d8997, "[POC] VS2022 v17.14.27 build 35223 (*)" },
	{ 0x010e8997, "[PO+] VS2022 v17.14.27 build 35223 (*)" },

	// MSVS2022 v17.14.22
	// MSVS2022 v17.14.23
	// MSVS2022 v17.14.25
	{ 0x01048996, "[ C ] VS2022 v17.14.22 build 35222" },
	{ 0x01038996, "[ASM] VS2022 v17.14.22 build 35222" },
	{ 0x01058996, "[C++] VS2022 v17.14.22 build 35222" },
	{ 0x00ff8996, "[RES] VS2022 v17.14.22 build 35222" },
	{ 0x01028996, "[LNK] VS2022 v17.14.22 build 35222" },
	{ 0x01008996, "[EXP] VS2022 v17.14.22 build 35222" },
	{ 0x01018996, "[IMP] VS2022 v17.14.22 build 35222" },
	{ 0x01088996, "[LTC] VS2022 v17.14.22 build 35222" },
	{ 0x01098996, "[LT+] VS2022 v17.14.22 build 35222" },
	{ 0x010b8996, "[PGO] VS2022 v17.14.22 build 35222" },
	{ 0x010c8996, "[PG+] VS2022 v17.14.22 build 35222" },
	{ 0x01068996, "[CIL] VS2022 v17.14.22 build 35222 (*)" },
	{ 0x01078996, "[CI+] VS2022 v17.14.22 build 35222 (*)" },
	{ 0x010a8996, "[LTM] VS2022 v17.14.22 build 35222 (*)" },
	{ 0x010d8996, "[POC] VS2022 v17.14.22 build 35222 (*)" },
	{ 0x010e8996, "[PO+] VS2022 v17.14.22 build 35222 (*)" },

	// MSVS2022 v17.14.21
	{ 0x01048995, "[ C ] VS2022 v17.14.21 build 35221" },
	{ 0x01038995, "[ASM] VS2022 v17.14.21 build 35221" },
	{ 0x01058995, "[C++] VS2022 v17.14.21 build 35221" },
	{ 0x00ff8995, "[RES] VS2022 v17.14.21 build 35221" },
	{ 0x01028995, "[LNK] VS2022 v17.14.21 build 35221" },
	{ 0x01008995, "[EXP] VS2022 v17.14.21 build 35221" },
	{ 0x01018995, "[IMP] VS2022 v17.14.21 build 35221" },
	{ 0x01088995, "[LTC] VS2022 v17.14.21 build 35221" },
	{ 0x01098995, "[LT+] VS2022 v17.14.21 build 35221" },
	{ 0x010b8995, "[PGO] VS2022 v17.14.21 build 35221" },
	{ 0x010c8995, "[PG+] VS2022 v17.14.21 build 35221" },
	{ 0x01068995, "[CIL] VS2022 v17.14.21 build 35221 (*)" },
	{ 0x01078995, "[CI+] VS2022 v17.14.21 build 35221 (*)" },
	{ 0x010a8995, "[LTM] VS2022 v17.14.21 build 35221 (*)" },
	{ 0x010d8995, "[POC] VS2022 v17.14.21 build 35221 (*)" },
	{ 0x010e8995, "[PO+] VS2022 v17.14.21 build 35221 (*)" },

	// MSVS2022 v17.14.20
	{ 0x01048994, "[ C ] VS2022 v17.14.20 build 35220" },
	{ 0x01038994, "[ASM] VS2022 v17.14.20 build 35220" },
	{ 0x01058994, "[C++] VS2022 v17.14.20 build 35220" },
	{ 0x00ff8994, "[RES] VS2022 v17.14.20 build 35220" },
	{ 0x01028994, "[LNK] VS2022 v17.14.20 build 35220" },
	{ 0x01008994, "[EXP] VS2022 v17.14.20 build 35220" },
	{ 0x01018994, "[IMP] VS2022 v17.14.20 build 35220" },
	{ 0x01088994, "[LTC] VS2022 v17.14.20 build 35220" },
	{ 0x01098994, "[LT+] VS2022 v17.14.20 build 35220" },
	{ 0x010b8994, "[PGO] VS2022 v17.14.20 build 35220" },
	{ 0x010c8994, "[PG+] VS2022 v17.14.20 build 35220" },
	{ 0x01068994, "[CIL] VS2022 v17.14.20 build 35220 (*)" },
	{ 0x01078994, "[CI+] VS2022 v17.14.20 build 35220 (*)" },
	{ 0x010a8994, "[LTM] VS2022 v17.14.20 build 35220 (*)" },
	{ 0x010d8994, "[POC] VS2022 v17.14.20 build 35220 (*)" },
	{ 0x010e8994, "[PO+] VS2022 v17.14.20 build 35220 (*)" },

	// MSVS2022 v17.14.18
	// MSVS2022 v17.14.19
	{ 0x01048993, "[ C ] VS2022 v17.14.18 build 35219" },
	{ 0x01038993, "[ASM] VS2022 v17.14.18 build 35219" },
	{ 0x01058993, "[C++] VS2022 v17.14.18 build 35219" },
	{ 0x00ff8993, "[RES] VS2022 v17.14.18 build 35219" },
	{ 0x01028993, "[LNK] VS2022 v17.14.18 build 35219" },
	{ 0x01008993, "[EXP] VS2022 v17.14.18 build 35219" },
	{ 0x01018993, "[IMP] VS2022 v17.14.18 build 35219" },
	{ 0x01088993, "[LTC] VS2022 v17.14.18 build 35219" },
	{ 0x01098993, "[LT+] VS2022 v17.14.18 build 35219" },
	{ 0x010b8993, "[PGO] VS2022 v17.14.18 build 35219" },
	{ 0x010c8993, "[PG+] VS2022 v17.14.18 build 35219" },
	{ 0x01068993, "[CIL] VS2022 v17.14.18 build 35219 (*)" },
	{ 0x01078993, "[CI+] VS2022 v17.14.18 build 35219 (*)" },
	{ 0x010a8993, "[LTM] VS2022 v17.14.18 build 35219 (*)" },
	{ 0x010d8993, "[POC] VS2022 v17.14.18 build 35219 (*)" },
	{ 0x010e8993, "[PO+] VS2022 v17.14.18 build 35219 (*)" },

	// MSVS2022 v17.14.15
	// MSVS2022 v17.14.15-pre.1.0
	// MSVS2022 v17.14.16-pre.1.0
	// MSVS2022 v17.14.16
	// MSVS2022 v17.14.17-pre.1.0
	// MSVS2022 v17.14.17
	{ 0x01048991, "[ C ] VS2022 v17.14.15 build 35217" },
	{ 0x01038991, "[ASM] VS2022 v17.14.15 build 35217" },
	{ 0x01058991, "[C++] VS2022 v17.14.15 build 35217" },
	{ 0x00ff8991, "[RES] VS2022 v17.14.15 build 35217" },
	{ 0x01028991, "[LNK] VS2022 v17.14.15 build 35217" },
	{ 0x01008991, "[EXP] VS2022 v17.14.15 build 35217" },
	{ 0x01018991, "[IMP] VS2022 v17.14.15 build 35217" },
	{ 0x01088991, "[LTC] VS2022 v17.14.15 build 35217" },
	{ 0x01098991, "[LT+] VS2022 v17.14.15 build 35217" },
	{ 0x010b8991, "[PGO] VS2022 v17.14.15 build 35217" },
	{ 0x010c8991, "[PG+] VS2022 v17.14.15 build 35217" },
	{ 0x01068991, "[CIL] VS2022 v17.14.15 build 35217 (*)" },
	{ 0x01078991, "[CI+] VS2022 v17.14.15 build 35217 (*)" },
	{ 0x010a8991, "[LTM] VS2022 v17.14.15 build 35217 (*)" },
	{ 0x010d8991, "[POC] VS2022 v17.14.15 build 35217 (*)" },
	{ 0x010e8991, "[PO+] VS2022 v17.14.15 build 35217 (*)" },

	// MSVS2022 v17.14.13
	// MSVS2022 v17.14.13-pre.1.0
	{ 0x0104898f, "[ C ] VS2022 v17.14.13 build 35215" },
	{ 0x0103898f, "[ASM] VS2022 v17.14.13 build 35215" },
	{ 0x0105898f, "[C++] VS2022 v17.14.13 build 35215" },
	{ 0x00ff898f, "[RES] VS2022 v17.14.13 build 35215" },
	{ 0x0102898f, "[LNK] VS2022 v17.14.13 build 35215" },
	{ 0x0100898f, "[EXP] VS2022 v17.14.13 build 35215" },
	{ 0x0101898f, "[IMP] VS2022 v17.14.13 build 35215" },
	{ 0x0108898f, "[LTC] VS2022 v17.14.13 build 35215" },
	{ 0x0109898f, "[LT+] VS2022 v17.14.13 build 35215" },
	{ 0x010b898f, "[PGO] VS2022 v17.14.13 build 35215" },
	{ 0x010c898f, "[PG+] VS2022 v17.14.13 build 35215" },
	{ 0x0106898f, "[CIL] VS2022 v17.14.13 build 35215 (*)" },
	{ 0x0107898f, "[CI+] VS2022 v17.14.13 build 35215 (*)" },
	{ 0x010a898f, "[LTM] VS2022 v17.14.13 build 35215 (*)" },
	{ 0x010d898f, "[POC] VS2022 v17.14.13 build 35215 (*)" },
	{ 0x010e898f, "[PO+] VS2022 v17.14.13 build 35215 (*)" },

	// MSVS2022 v17.14.11
	// MSVS2022 v17.14.11-pre.1.0
	// MSVS2022 v17.14.12-pre.1.0
	// MSVS2022 v17.14.12
	{ 0x0104898e, "[ C ] VS2022 v17.14.11 build 35214" },
	{ 0x0103898e, "[ASM] VS2022 v17.14.11 build 35214" },
	{ 0x0105898e, "[C++] VS2022 v17.14.11 build 35214" },
	{ 0x00ff898e, "[RES] VS2022 v17.14.11 build 35214" },
	{ 0x0102898e, "[LNK] VS2022 v17.14.11 build 35214" },
	{ 0x0100898e, "[EXP] VS2022 v17.14.11 build 35214" },
	{ 0x0101898e, "[IMP] VS2022 v17.14.11 build 35214" },
	{ 0x0108898e, "[LTC] VS2022 v17.14.11 build 35214" },
	{ 0x0109898e, "[LT+] VS2022 v17.14.11 build 35214" },
	{ 0x010b898e, "[PGO] VS2022 v17.14.11 build 35214" },
	{ 0x010c898e, "[PG+] VS2022 v17.14.11 build 35214" },
	{ 0x0106898e, "[CIL] VS2022 v17.14.11 build 35214 (*)" },
	{ 0x0107898e, "[CI+] VS2022 v17.14.11 build 35214 (*)" },
	{ 0x010a898e, "[LTM] VS2022 v17.14.11 build 35214 (*)" },
	{ 0x010d898e, "[POC] VS2022 v17.14.11 build 35214 (*)" },
	{ 0x010e898e, "[PO+] VS2022 v17.14.11 build 35214 (*)" },

	// MSVS2022 v17.14.9
	// MSVS2022 v17.14.9-pre.1.0
	// MSVS2022 v17.14.10
	// MSVS2022 v17.14.10-pre.1.0
	{ 0x0104898d, "[ C ] VS2022 v17.14.9 build 35213" },
	{ 0x0103898d, "[ASM] VS2022 v17.14.9 build 35213" },
	{ 0x0105898d, "[C++] VS2022 v17.14.9 build 35213" },
	{ 0x00ff898d, "[RES] VS2022 v17.14.9 build 35213" },
	{ 0x0102898d, "[LNK] VS2022 v17.14.9 build 35213" },
	{ 0x0100898d, "[EXP] VS2022 v17.14.9 build 35213" },
	{ 0x0101898d, "[IMP] VS2022 v17.14.9 build 35213" },
	{ 0x0108898d, "[LTC] VS2022 v17.14.9 build 35213" },
	{ 0x0109898d, "[LT+] VS2022 v17.14.9 build 35213" },
	{ 0x010b898d, "[PGO] VS2022 v17.14.9 build 35213" },
	{ 0x010c898d, "[PG+] VS2022 v17.14.9 build 35213" },
	{ 0x0106898d, "[CIL] VS2022 v17.14.9 build 35213 (*)" },
	{ 0x0107898d, "[CI+] VS2022 v17.14.9 build 35213 (*)" },
	{ 0x010a898d, "[LTM] VS2022 v17.14.9 build 35213 (*)" },
	{ 0x010d898d, "[POC] VS2022 v17.14.9 build 35213 (*)" },
	{ 0x010e898d, "[PO+] VS2022 v17.14.9 build 35213 (*)" },

	// MSVS2022 v17.14.4
	// MSVS2022 v17.14.4-pre.1.0
	// MSVS2022 v17.14.5
	// MSVS2022 v17.14.5-pre.1.0
	{ 0x01048989, "[ C ] VS2022 v17.14.4 build 35209" },
	{ 0x01038989, "[ASM] VS2022 v17.14.4 build 35209" },
	{ 0x01058989, "[C++] VS2022 v17.14.4 build 35209" },
	{ 0x00ff8989, "[RES] VS2022 v17.14.4 build 35209" },
	{ 0x01028989, "[LNK] VS2022 v17.14.4 build 35209" },
	{ 0x01008989, "[EXP] VS2022 v17.14.4 build 35209" },
	{ 0x01018989, "[IMP] VS2022 v17.14.4 build 35209" },
	{ 0x01088989, "[LTC] VS2022 v17.14.4 build 35209" },
	{ 0x01098989, "[LT+] VS2022 v17.14.4 build 35209" },
	{ 0x010b8989, "[PGO] VS2022 v17.14.4 build 35209" },
	{ 0x010c8989, "[PG+] VS2022 v17.14.4 build 35209" },
	{ 0x01068989, "[CIL] VS2022 v17.14.4 build 35209 (*)" },
	{ 0x01078989, "[CI+] VS2022 v17.14.4 build 35209 (*)" },
	{ 0x010a8989, "[LTM] VS2022 v17.14.4 build 35209 (*)" },
	{ 0x010d8989, "[POC] VS2022 v17.14.4 build 35209 (*)" },
	{ 0x010e8989, "[PO+] VS2022 v17.14.4 build 35209 (*)" },

	// MSVS2022 v17.13.6
	{ 0x010487fa, "[ C ] VS2022 v17.13.6 build 34810" },
	{ 0x010387fa, "[ASM] VS2022 v17.13.6 build 34810" },
	{ 0x010587fa, "[C++] VS2022 v17.13.6 build 34810" },
	{ 0x00ff87fa, "[RES] VS2022 v17.13.6 build 34810" },
	{ 0x010287fa, "[LNK] VS2022 v17.13.6 build 34810" },
	{ 0x010087fa, "[EXP] VS2022 v17.13.6 build 34810" },
	{ 0x010187fa, "[IMP] VS2022 v17.13.6 build 34810" },
	{ 0x010887fa, "[LTC] VS2022 v17.13.6 build 34810" },
	{ 0x010987fa, "[LT+] VS2022 v17.13.6 build 34810" },
	{ 0x010b87fa, "[PGO] VS2022 v17.13.6 build 34810" },
	{ 0x010c87fa, "[PG+] VS2022 v17.13.6 build 34810" },
	{ 0x010687fa, "[CIL] VS2022 v17.13.6 build 34810 (*)" },
	{ 0x010787fa, "[CI+] VS2022 v17.13.6 build 34810 (*)" },
	{ 0x010a87fa, "[LTM] VS2022 v17.13.6 build 34810 (*)" },
	{ 0x010d87fa, "[POC] VS2022 v17.13.6 build 34810 (*)" },
	{ 0x010e87fa, "[PO+] VS2022 v17.13.6 build 34810 (*)" },

	// MSVS2022 v17.13.3
	// MSVS2022 v17.13.4
	// MSVS2022 v17.13.5
	{ 0x010487f9, "[ C ] VS2022 v17.13.3 build 34809" },
	{ 0x010387f9, "[ASM] VS2022 v17.13.3 build 34809" },
	{ 0x010587f9, "[C++] VS2022 v17.13.3 build 34809" },
	{ 0x00ff87f9, "[RES] VS2022 v17.13.3 build 34809" },
	{ 0x010287f9, "[LNK] VS2022 v17.13.3 build 34809" },
	{ 0x010087f9, "[EXP] VS2022 v17.13.3 build 34809" },
	{ 0x010187f9, "[IMP] VS2022 v17.13.3 build 34809" },
	{ 0x010887f9, "[LTC] VS2022 v17.13.3 build 34809" },
	{ 0x010987f9, "[LT+] VS2022 v17.13.3 build 34809" },
	{ 0x010b87f9, "[PGO] VS2022 v17.13.3 build 34809" },
	{ 0x010c87f9, "[PG+] VS2022 v17.13.3 build 34809" },
	{ 0x010687f9, "[CIL] VS2022 v17.13.3 build 34809 (*)" },
	{ 0x010787f9, "[CI+] VS2022 v17.13.3 build 34809 (*)" },
	{ 0x010a87f9, "[LTM] VS2022 v17.13.3 build 34809 (*)" },
	{ 0x010d87f9, "[POC] VS2022 v17.13.3 build 34809 (*)" },
	{ 0x010e87f9, "[PO+] VS2022 v17.13.3 build 34809 (*)" },

	// MSVS2022 v17.12.4
	{ 0x01048684, "[ C ] VS2022 v17.12.4 build 34436" },
	{ 0x01038684, "[ASM] VS2022 v17.12.4 build 34436" },
	{ 0x01058684, "[C++] VS2022 v17.12.4 build 34436" },
	{ 0x00ff8684, "[RES] VS2022 v17.12.4 build 34436" },
	{ 0x01028684, "[LNK] VS2022 v17.12.4 build 34436" },
	{ 0x01008684, "[EXP] VS2022 v17.12.4 build 34436" },
	{ 0x01018684, "[IMP] VS2022 v17.12.4 build 34436" },
	{ 0x01088684, "[LTC] VS2022 v17.12.4 build 34436" },
	{ 0x01098684, "[LT+] VS2022 v17.12.4 build 34436" },
	{ 0x010b8684, "[PGO] VS2022 v17.12.4 build 34436" },
	{ 0x010c8684, "[PG+] VS2022 v17.12.4 build 34436" },
	{ 0x01068684, "[CIL] VS2022 v17.12.4 build 34436 (*)" },
	{ 0x01078684, "[CI+] VS2022 v17.12.4 build 34436 (*)" },
	{ 0x010a8684, "[LTM] VS2022 v17.12.4 build 34436 (*)" },
	{ 0x010d8684, "[POC] VS2022 v17.12.4 build 34436 (*)" },
	{ 0x010e8684, "[PO+] VS2022 v17.12.4 build 34436 (*)" },

	// MSVS2022 v17.12.2
	// MSVS2022 v17.12.3
	{ 0x01048683, "[ C ] VS2022 v17.12.2 build 34435" },
	{ 0x01038683, "[ASM] VS2022 v17.12.2 build 34435" },
	{ 0x01058683, "[C++] VS2022 v17.12.2 build 34435" },
	{ 0x00ff8683, "[RES] VS2022 v17.12.2 build 34435" },
	{ 0x01028683, "[LNK] VS2022 v17.12.2 build 34435" },
	{ 0x01008683, "[EXP] VS2022 v17.12.2 build 34435" },
	{ 0x01018683, "[IMP] VS2022 v17.12.2 build 34435" },
	{ 0x01088683, "[LTC] VS2022 v17.12.2 build 34435" },
	{ 0x01098683, "[LT+] VS2022 v17.12.2 build 34435" },
	{ 0x010b8683, "[PGO] VS2022 v17.12.2 build 34435" },
	{ 0x010c8683, "[PG+] VS2022 v17.12.2 build 34435" },
	{ 0x01068683, "[CIL] VS2022 v17.12.2 build 34435 (*)" },
	{ 0x01078683, "[CI+] VS2022 v17.12.2 build 34435 (*)" },
	{ 0x010a8683, "[LTM] VS2022 v17.12.2 build 34435 (*)" },
	{ 0x010d8683, "[POC] VS2022 v17.12.2 build 34435 (*)" },
	{ 0x010e8683, "[PO+] VS2022 v17.12.2 build 34435 (*)" },

	// MSVS2022 v17.12.0
	// MSVS2022 v17.12.1
	{ 0x01048681, "[ C ] VS2022 v17.12.0 build 34433" },
	{ 0x01038681, "[ASM] VS2022 v17.12.0 build 34433" },
	{ 0x01058681, "[C++] VS2022 v17.12.0 build 34433" },
	{ 0x00ff8681, "[RES] VS2022 v17.12.0 build 34433" },
	{ 0x01028681, "[LNK] VS2022 v17.12.0 build 34433" },
	{ 0x01008681, "[EXP] VS2022 v17.12.0 build 34433" },
	{ 0x01018681, "[IMP] VS2022 v17.12.0 build 34433" },
	{ 0x01088681, "[LTC] VS2022 v17.12.0 build 34433" },
	{ 0x01098681, "[LT+] VS2022 v17.12.0 build 34433" },
	{ 0x010b8681, "[PGO] VS2022 v17.12.0 build 34433" },
	{ 0x010c8681, "[PG+] VS2022 v17.12.0 build 34433" },
	{ 0x01068681, "[CIL] VS2022 v17.12.0 build 34433 (*)" },
	{ 0x01078681, "[CI+] VS2022 v17.12.0 build 34433 (*)" },
	{ 0x010a8681, "[LTM] VS2022 v17.12.0 build 34433 (*)" },
	{ 0x010d8681, "[POC] VS2022 v17.12.0 build 34433 (*)" },
	{ 0x010e8681, "[PO+] VS2022 v17.12.0 build 34433 (*)" },

	// MSVS2022 v17.11.5
	{ 0x0104854b, "[ C ] VS2022 v17.11.5 build 34123" },
	{ 0x0103854b, "[ASM] VS2022 v17.11.5 build 34123" },
	{ 0x0105854b, "[C++] VS2022 v17.11.5 build 34123" },
	{ 0x00ff854b, "[RES] VS2022 v17.11.5 build 34123" },
	{ 0x0102854b, "[LNK] VS2022 v17.11.5 build 34123" },
	{ 0x0100854b, "[EXP] VS2022 v17.11.5 build 34123" },
	{ 0x0101854b, "[IMP] VS2022 v17.11.5 build 34123" },
	{ 0x0108854b, "[LTC] VS2022 v17.11.5 build 34123" },
	{ 0x0109854b, "[LT+] VS2022 v17.11.5 build 34123" },
	{ 0x010b854b, "[PGO] VS2022 v17.11.5 build 34123" },
	{ 0x010c854b, "[PG+] VS2022 v17.11.5 build 34123" },
	{ 0x0106854b, "[CIL] VS2022 v17.11.5 build 34123 (*)" },
	{ 0x0107854b, "[CI+] VS2022 v17.11.5 build 34123 (*)" },
	{ 0x010a854b, "[LTM] VS2022 v17.11.5 build 34123 (*)" },
	{ 0x010d854b, "[POC] VS2022 v17.11.5 build 34123 (*)" },
	{ 0x010e854b, "[PO+] VS2022 v17.11.5 build 34123 (*)" },

	// MSVS2022 v17.11.0
	// MSVS2022 v17.11.1
	// MSVS2022 v17.11.2
	// MSVS2022 v17.11.3
	// MSVS2022 v17.11.4
	{ 0x01048548, "[ C ] VS2022 v17.11.0 build 34120" },
	{ 0x01038548, "[ASM] VS2022 v17.11.0 build 34120" },
	{ 0x01058548, "[C++] VS2022 v17.11.0 build 34120" },
	{ 0x00ff8548, "[RES] VS2022 v17.11.0 build 34120" },
	{ 0x01028548, "[LNK] VS2022 v17.11.0 build 34120" },
	{ 0x01008548, "[EXP] VS2022 v17.11.0 build 34120" },
	{ 0x01018548, "[IMP] VS2022 v17.11.0 build 34120" },
	{ 0x01088548, "[LTC] VS2022 v17.11.0 build 34120" },
	{ 0x01098548, "[LT+] VS2022 v17.11.0 build 34120" },
	{ 0x010b8548, "[PGO] VS2022 v17.11.0 build 34120" },
	{ 0x010c8548, "[PG+] VS2022 v17.11.0 build 34120" },
	{ 0x01068548, "[CIL] VS2022 v17.11.0 build 34120 (*)" },
	{ 0x01078548, "[CI+] VS2022 v17.11.0 build 34120 (*)" },
	{ 0x010a8548, "[LTM] VS2022 v17.11.0 build 34120 (*)" },
	{ 0x010d8548, "[POC] VS2022 v17.11.0 build 34120 (*)" },
	{ 0x010e8548, "[PO+] VS2022 v17.11.0 build 34120 (*)" },

	// MSVS2022 v17.10.5
	{ 0x01048415, "[ C ] VS2022 v17.10.5 build 33813" },
	{ 0x01038415, "[ASM] VS2022 v17.10.5 build 33813" },
	{ 0x01058415, "[C++] VS2022 v17.10.5 build 33813" },
	{ 0x00ff8415, "[RES] VS2022 v17.10.5 build 33813" },
	{ 0x01028415, "[LNK] VS2022 v17.10.5 build 33813" },
	{ 0x01008415, "[EXP] VS2022 v17.10.5 build 33813" },
	{ 0x01018415, "[IMP] VS2022 v17.10.5 build 33813" },
	{ 0x01088415, "[LTC] VS2022 v17.10.5 build 33813" },
	{ 0x01098415, "[LT+] VS2022 v17.10.5 build 33813" },
	{ 0x010b8415, "[PGO] VS2022 v17.10.5 build 33813" },
	{ 0x010c8415, "[PG+] VS2022 v17.10.5 build 33813" },
	{ 0x01068415, "[CIL] VS2022 v17.10.5 build 33813 (*)" },
	{ 0x01078415, "[CI+] VS2022 v17.10.5 build 33813 (*)" },
	{ 0x010a8415, "[LTM] VS2022 v17.10.5 build 33813 (*)" },
	{ 0x010d8415, "[POC] VS2022 v17.10.5 build 33813 (*)" },
	{ 0x010e8415, "[PO+] VS2022 v17.10.5 build 33813 (*)" },

	// MSVS2022 v17.10.4
	{ 0x01048414, "[ C ] VS2022 v17.10.4 build 33812" },
	{ 0x01038414, "[ASM] VS2022 v17.10.4 build 33812" },
	{ 0x01058414, "[C++] VS2022 v17.10.4 build 33812" },
	{ 0x00ff8414, "[RES] VS2022 v17.10.4 build 33812" },
	{ 0x01028414, "[LNK] VS2022 v17.10.4 build 33812" },
	{ 0x01008414, "[EXP] VS2022 v17.10.4 build 33812" },
	{ 0x01018414, "[IMP] VS2022 v17.10.4 build 33812" },
	{ 0x01088414, "[LTC] VS2022 v17.10.4 build 33812" },
	{ 0x01098414, "[LT+] VS2022 v17.10.4 build 33812" },
	{ 0x010b8414, "[PGO] VS2022 v17.10.4 build 33812" },
	{ 0x010c8414, "[PG+] VS2022 v17.10.4 build 33812" },
	{ 0x01068414, "[CIL] VS2022 v17.10.4 build 33812 (*)" },
	{ 0x01078414, "[CI+] VS2022 v17.10.4 build 33812 (*)" },
	{ 0x010a8414, "[LTM] VS2022 v17.10.4 build 33812 (*)" },
	{ 0x010d8414, "[POC] VS2022 v17.10.4 build 33812 (*)" },
	{ 0x010e8414, "[PO+] VS2022 v17.10.4 build 33812 (*)" },

	// MSVS2022 v17.10.1
	// MSVS2022 v17.10.2
	// MSVS2022 v17.10.3
	{ 0x01048413, "[ C ] VS2022 v17.10.1 build 33811" },
	{ 0x01038413, "[ASM] VS2022 v17.10.1 build 33811" },
	{ 0x01058413, "[C++] VS2022 v17.10.1 build 33811" },
	{ 0x00ff8413, "[RES] VS2022 v17.10.1 build 33811" },
	{ 0x01028413, "[LNK] VS2022 v17.10.1 build 33811" },
	{ 0x01008413, "[EXP] VS2022 v17.10.1 build 33811" },
	{ 0x01018413, "[IMP] VS2022 v17.10.1 build 33811" },
	{ 0x01088413, "[LTC] VS2022 v17.10.1 build 33811" },
	{ 0x01098413, "[LT+] VS2022 v17.10.1 build 33811" },
	{ 0x010b8413, "[PGO] VS2022 v17.10.1 build 33811" },
	{ 0x010c8413, "[PG+] VS2022 v17.10.1 build 33811" },
	{ 0x01068413, "[CIL] VS2022 v17.10.1 build 33811 (*)" },
	{ 0x01078413, "[CI+] VS2022 v17.10.1 build 33811 (*)" },
	{ 0x010a8413, "[LTM] VS2022 v17.10.1 build 33811 (*)" },
	{ 0x010d8413, "[POC] VS2022 v17.10.1 build 33811 (*)" },
	{ 0x010e8413, "[PO+] VS2022 v17.10.1 build 33811 (*)" },

	// MSVS2022 v17.9.4
	// MSVS2022 v17.9.5
	// MSVS2022 v17.9.6
	// MSVS2022 v17.9.7
	{ 0x010482f3, "[ C ] VS2022 v17.9.4 build 33523" },
	{ 0x010382f3, "[ASM] VS2022 v17.9.4 build 33523" },
	{ 0x010582f3, "[C++] VS2022 v17.9.4 build 33523" },
	{ 0x00ff82f3, "[RES] VS2022 v17.9.4 build 33523" },
	{ 0x010282f3, "[LNK] VS2022 v17.9.4 build 33523" },
	{ 0x010082f3, "[EXP] VS2022 v17.9.4 build 33523" },
	{ 0x010182f3, "[IMP] VS2022 v17.9.4 build 33523" },
	{ 0x010882f3, "[LTC] VS2022 v17.9.4 build 33523" },
	{ 0x010982f3, "[LT+] VS2022 v17.9.4 build 33523" },
	{ 0x010b82f3, "[PGO] VS2022 v17.9.4 build 33523" },
	{ 0x010c82f3, "[PG+] VS2022 v17.9.4 build 33523" },
	{ 0x010682f3, "[CIL] VS2022 v17.9.4 build 33523 (*)" },
	{ 0x010782f3, "[CI+] VS2022 v17.9.4 build 33523 (*)" },
	{ 0x010a82f3, "[LTM] VS2022 v17.9.4 build 33523 (*)" },
	{ 0x010d82f3, "[POC] VS2022 v17.9.4 build 33523 (*)" },
	{ 0x010e82f3, "[PO+] VS2022 v17.9.4 build 33523 (*)" },

	// MSVS2022 v17.9.3
	{ 0x010482f2, "[ C ] VS2022 v17.9.3 build 33522" },
	{ 0x010382f2, "[ASM] VS2022 v17.9.3 build 33522" },
	{ 0x010582f2, "[C++] VS2022 v17.9.3 build 33522" },
	{ 0x00ff82f2, "[RES] VS2022 v17.9.3 build 33522" },
	{ 0x010282f2, "[LNK] VS2022 v17.9.3 build 33522" },
	{ 0x010082f2, "[EXP] VS2022 v17.9.3 build 33522" },
	{ 0x010182f2, "[IMP] VS2022 v17.9.3 build 33522" },
	{ 0x010882f2, "[LTC] VS2022 v17.9.3 build 33522" },
	{ 0x010982f2, "[LT+] VS2022 v17.9.3 build 33522" },
	{ 0x010b82f2, "[PGO] VS2022 v17.9.3 build 33522" },
	{ 0x010c82f2, "[PG+] VS2022 v17.9.3 build 33522" },
	{ 0x010682f2, "[CIL] VS2022 v17.9.3 build 33522 (*)" },
	{ 0x010782f2, "[CI+] VS2022 v17.9.3 build 33522 (*)" },
	{ 0x010a82f2, "[LTM] VS2022 v17.9.3 build 33522 (*)" },
	{ 0x010d82f2, "[POC] VS2022 v17.9.3 build 33522 (*)" },
	{ 0x010e82f2, "[PO+] VS2022 v17.9.3 build 33522 (*)" },

	// MSVS2022 v17.9.1
	{ 0x010482f0, "[ C ] VS2022 v17.9.1 build 33520" },
	{ 0x010382f0, "[ASM] VS2022 v17.9.1 build 33520" },
	{ 0x010582f0, "[C++] VS2022 v17.9.1 build 33520" },
	{ 0x00ff82f0, "[RES] VS2022 v17.9.1 build 33520" },
	{ 0x010282f0, "[LNK] VS2022 v17.9.1 build 33520" },
	{ 0x010082f0, "[EXP] VS2022 v17.9.1 build 33520" },
	{ 0x010182f0, "[IMP] VS2022 v17.9.1 build 33520" },
	{ 0x010882f0, "[LTC] VS2022 v17.9.1 build 33520" },
	{ 0x010982f0, "[LT+] VS2022 v17.9.1 build 33520" },
	{ 0x010b82f0, "[PGO] VS2022 v17.9.1 build 33520" },
	{ 0x010c82f0, "[PG+] VS2022 v17.9.1 build 33520" },
	{ 0x010682f0, "[CIL] VS2022 v17.9.1 build 33520 (*)" },
	{ 0x010782f0, "[CI+] VS2022 v17.9.1 build 33520 (*)" },
	{ 0x010a82f0, "[LTM] VS2022 v17.9.1 build 33520 (*)" },
	{ 0x010d82f0, "[POC] VS2022 v17.9.1 build 33520 (*)" },
	{ 0x010e82f0, "[PO+] VS2022 v17.9.1 build 33520 (*)" },

	// MSVS2022 v17.8.6
	{ 0x0104816f, "[ C ] VS2022 v17.8.6 build 33135" },
	{ 0x0103816f, "[ASM] VS2022 v17.8.6 build 33135" },
	{ 0x0105816f, "[C++] VS2022 v17.8.6 build 33135" },
	{ 0x00ff816f, "[RES] VS2022 v17.8.6 build 33135" },
	{ 0x0102816f, "[LNK] VS2022 v17.8.6 build 33135" },
	{ 0x0100816f, "[EXP] VS2022 v17.8.6 build 33135" },
	{ 0x0101816f, "[IMP] VS2022 v17.8.6 build 33135" },
	{ 0x0108816f, "[LTC] VS2022 v17.8.6 build 33135" },
	{ 0x0109816f, "[LT+] VS2022 v17.8.6 build 33135" },
	{ 0x010b816f, "[PGO] VS2022 v17.8.6 build 33135" },
	{ 0x010c816f, "[PG+] VS2022 v17.8.6 build 33135" },
	{ 0x0106816f, "[CIL] VS2022 v17.8.6 build 33135 (*)" },
	{ 0x0107816f, "[CI+] VS2022 v17.8.6 build 33135 (*)" },
	{ 0x010a816f, "[LTM] VS2022 v17.8.6 build 33135 (*)" },
	{ 0x010d816f, "[POC] VS2022 v17.8.6 build 33135 (*)" },
	{ 0x010e816f, "[PO+] VS2022 v17.8.6 build 33135 (*)" },

	// MSVS2022 v17.8.4
	// MSVS2022 v17.8.5
	{ 0x0104816e, "[ C ] VS2022 v17.8.4 build 33134" },
	{ 0x0103816e, "[ASM] VS2022 v17.8.4 build 33134" },
	{ 0x0105816e, "[C++] VS2022 v17.8.4 build 33134" },
	{ 0x00ff816e, "[RES] VS2022 v17.8.4 build 33134" },
	{ 0x0102816e, "[LNK] VS2022 v17.8.4 build 33134" },
	{ 0x0100816e, "[EXP] VS2022 v17.8.4 build 33134" },
	{ 0x0101816e, "[IMP] VS2022 v17.8.4 build 33134" },
	{ 0x0108816e, "[LTC] VS2022 v17.8.4 build 33134" },
	{ 0x0109816e, "[LT+] VS2022 v17.8.4 build 33134" },
	{ 0x010b816e, "[PGO] VS2022 v17.8.4 build 33134" },
	{ 0x010c816e, "[PG+] VS2022 v17.8.4 build 33134" },
	{ 0x0106816e, "[CIL] VS2022 v17.8.4 build 33134 (*)" },
	{ 0x0107816e, "[CI+] VS2022 v17.8.4 build 33134 (*)" },
	{ 0x010a816e, "[LTM] VS2022 v17.8.4 build 33134 (*)" },
	{ 0x010d816e, "[POC] VS2022 v17.8.4 build 33134 (*)" },
	{ 0x010e816e, "[PO+] VS2022 v17.8.4 build 33134 (*)" },

	// MSVS2022 v17.8.3
	{ 0x0104816d, "[ C ] VS2022 v17.8.3 build 33133" },
	{ 0x0103816d, "[ASM] VS2022 v17.8.3 build 33133" },
	{ 0x0105816d, "[C++] VS2022 v17.8.3 build 33133" },
	{ 0x00ff816d, "[RES] VS2022 v17.8.3 build 33133" },
	{ 0x0102816d, "[LNK] VS2022 v17.8.3 build 33133" },
	{ 0x0100816d, "[EXP] VS2022 v17.8.3 build 33133" },
	{ 0x0101816d, "[IMP] VS2022 v17.8.3 build 33133" },
	{ 0x0108816d, "[LTC] VS2022 v17.8.3 build 33133" },
	{ 0x0109816d, "[LT+] VS2022 v17.8.3 build 33133" },
	{ 0x010b816d, "[PGO] VS2022 v17.8.3 build 33133" },
	{ 0x010c816d, "[PG+] VS2022 v17.8.3 build 33133" },
	{ 0x0106816d, "[CIL] VS2022 v17.8.3 build 33133 (*)" },
	{ 0x0107816d, "[CI+] VS2022 v17.8.3 build 33133 (*)" },
	{ 0x010a816d, "[LTM] VS2022 v17.8.3 build 33133 (*)" },
	{ 0x010d816d, "[POC] VS2022 v17.8.3 build 33133 (*)" },
	{ 0x010e816d, "[PO+] VS2022 v17.8.3 build 33133 (*)" },

	// MSVS2022 v17.8.0
	// MSVS2022 v17.8.1
	// MSVS2022 v17.8.2
	{ 0x0104816a, "[ C ] VS2022 v17.8.0 build 33130" },
	{ 0x0103816a, "[ASM] VS2022 v17.8.0 build 33130" },
	{ 0x0105816a, "[C++] VS2022 v17.8.0 build 33130" },
	{ 0x00ff816a, "[RES] VS2022 v17.8.0 build 33130" },
	{ 0x0102816a, "[LNK] VS2022 v17.8.0 build 33130" },
	{ 0x0100816a, "[EXP] VS2022 v17.8.0 build 33130" },
	{ 0x0101816a, "[IMP] VS2022 v17.8.0 build 33130" },
	{ 0x0108816a, "[LTC] VS2022 v17.8.0 build 33130" },
	{ 0x0109816a, "[LT+] VS2022 v17.8.0 build 33130" },
	{ 0x010b816a, "[PGO] VS2022 v17.8.0 build 33130" },
	{ 0x010c816a, "[PG+] VS2022 v17.8.0 build 33130" },
	{ 0x0106816a, "[CIL] VS2022 v17.8.0 build 33130 (*)" },
	{ 0x0107816a, "[CI+] VS2022 v17.8.0 build 33130 (*)" },
	{ 0x010a816a, "[LTM] VS2022 v17.8.0 build 33130 (*)" },
	{ 0x010d816a, "[POC] VS2022 v17.8.0 build 33130 (*)" },
	{ 0x010e816a, "[PO+] VS2022 v17.8.0 build 33130 (*)" },

	// MSVS2022 v17.7.5
	// MSVS2022 v17.7.6
	{ 0x01048039, "[ C ] VS2022 v17.7.5 build 32825" },
	{ 0x01038039, "[ASM] VS2022 v17.7.5 build 32825" },
	{ 0x01058039, "[C++] VS2022 v17.7.5 build 32825" },
	{ 0x00ff8039, "[RES] VS2022 v17.7.5 build 32825" },
	{ 0x01028039, "[LNK] VS2022 v17.7.5 build 32825" },
	{ 0x01008039, "[EXP] VS2022 v17.7.5 build 32825" },
	{ 0x01018039, "[IMP] VS2022 v17.7.5 build 32825" },
	{ 0x01088039, "[LTC] VS2022 v17.7.5 build 32825" },
	{ 0x01098039, "[LT+] VS2022 v17.7.5 build 32825" },
	{ 0x010b8039, "[PGO] VS2022 v17.7.5 build 32825" },
	{ 0x010c8039, "[PG+] VS2022 v17.7.5 build 32825" },
	{ 0x01068039, "[CIL] VS2022 v17.7.5 build 32825 (*)" },
	{ 0x01078039, "[CI+] VS2022 v17.7.5 build 32825 (*)" },
	{ 0x010a8039, "[LTM] VS2022 v17.7.5 build 32825 (*)" },
	{ 0x010d8039, "[POC] VS2022 v17.7.5 build 32825 (*)" },
	{ 0x010e8039, "[PO+] VS2022 v17.7.5 build 32825 (*)" },

	// MSVS2022 v17.7.4
	{ 0x01048038, "[ C ] VS2022 v17.7.4 build 32824" },
	{ 0x01038038, "[ASM] VS2022 v17.7.4 build 32824" },
	{ 0x01058038, "[C++] VS2022 v17.7.4 build 32824" },
	{ 0x00ff8038, "[RES] VS2022 v17.7.4 build 32824" },
	{ 0x01028038, "[LNK] VS2022 v17.7.4 build 32824" },
	{ 0x01008038, "[EXP] VS2022 v17.7.4 build 32824" },
	{ 0x01018038, "[IMP] VS2022 v17.7.4 build 32824" },
	{ 0x01088038, "[LTC] VS2022 v17.7.4 build 32824" },
	{ 0x01098038, "[LT+] VS2022 v17.7.4 build 32824" },
	{ 0x010b8038, "[PGO] VS2022 v17.7.4 build 32824" },
	{ 0x010c8038, "[PG+] VS2022 v17.7.4 build 32824" },
	{ 0x01068038, "[CIL] VS2022 v17.7.4 build 32824 (*)" },
	{ 0x01078038, "[CI+] VS2022 v17.7.4 build 32824 (*)" },
	{ 0x010a8038, "[LTM] VS2022 v17.7.4 build 32824 (*)" },
	{ 0x010d8038, "[POC] VS2022 v17.7.4 build 32824 (*)" },
	{ 0x010e8038, "[PO+] VS2022 v17.7.4 build 32824 (*)" },

	// MSVS2022 v17.7.0
	// MSVS2022 v17.7.1
	// MSVS2022 v17.7.2
	// MSVS2022 v17.7.3
	{ 0x01048036, "[ C ] VS2022 v17.7.0 build 32822" },
	{ 0x01038036, "[ASM] VS2022 v17.7.0 build 32822" },
	{ 0x01058036, "[C++] VS2022 v17.7.0 build 32822" },
	{ 0x00ff8036, "[RES] VS2022 v17.7.0 build 32822" },
	{ 0x01028036, "[LNK] VS2022 v17.7.0 build 32822" },
	{ 0x01008036, "[EXP] VS2022 v17.7.0 build 32822" },
	{ 0x01018036, "[IMP] VS2022 v17.7.0 build 32822" },
	{ 0x01088036, "[LTC] VS2022 v17.7.0 build 32822" },
	{ 0x01098036, "[LT+] VS2022 v17.7.0 build 32822" },
	{ 0x010b8036, "[PGO] VS2022 v17.7.0 build 32822" },
	{ 0x010c8036, "[PG+] VS2022 v17.7.0 build 32822" },
	{ 0x01068036, "[CIL] VS2022 v17.7.0 build 32822 (*)" },
	{ 0x01078036, "[CI+] VS2022 v17.7.0 build 32822 (*)" },
	{ 0x010a8036, "[LTM] VS2022 v17.7.0 build 32822 (*)" },
	{ 0x010d8036, "[POC] VS2022 v17.7.0 build 32822 (*)" },
	{ 0x010e8036, "[PO+] VS2022 v17.7.0 build 32822 (*)" },

	// MSVS2022 v17.6.5
	{ 0x01047f19, "[ C ] VS2022 v17.6.5 build 32537" },
	{ 0x01037f19, "[ASM] VS2022 v17.6.5 build 32537" },
	{ 0x01057f19, "[C++] VS2022 v17.6.5 build 32537" },
	{ 0x00ff7f19, "[RES] VS2022 v17.6.5 build 32537" },
	{ 0x01027f19, "[LNK] VS2022 v17.6.5 build 32537" },
	{ 0x01007f19, "[EXP] VS2022 v17.6.5 build 32537" },
	{ 0x01017f19, "[IMP] VS2022 v17.6.5 build 32537" },
	{ 0x01087f19, "[LTC] VS2022 v17.6.5 build 32537" },
	{ 0x01097f19, "[LT+] VS2022 v17.6.5 build 32537" },
	{ 0x010b7f19, "[PGO] VS2022 v17.6.5 build 32537" },
	{ 0x010c7f19, "[PG+] VS2022 v17.6.5 build 32537" },
	{ 0x01067f19, "[CIL] VS2022 v17.6.5 build 32537 (*)" },
	{ 0x01077f19, "[CI+] VS2022 v17.6.5 build 32537 (*)" },
	{ 0x010a7f19, "[LTM] VS2022 v17.6.5 build 32537 (*)" },
	{ 0x010d7f19, "[POC] VS2022 v17.6.5 build 32537 (*)" },
	{ 0x010e7f19, "[PO+] VS2022 v17.6.5 build 32537 (*)" },

	// MSVS2022 v17.6.4
	{ 0x01047f17, "[ C ] VS2022 v17.6.4 build 32535" },
	{ 0x01037f17, "[ASM] VS2022 v17.6.4 build 32535" },
	{ 0x01057f17, "[C++] VS2022 v17.6.4 build 32535" },
	{ 0x00ff7f17, "[RES] VS2022 v17.6.4 build 32535" },
	{ 0x01027f17, "[LNK] VS2022 v17.6.4 build 32535" },
	{ 0x01007f17, "[EXP] VS2022 v17.6.4 build 32535" },
	{ 0x01017f17, "[IMP] VS2022 v17.6.4 build 32535" },
	{ 0x01087f17, "[LTC] VS2022 v17.6.4 build 32535" },
	{ 0x01097f17, "[LT+] VS2022 v17.6.4 build 32535" },
	{ 0x010b7f17, "[PGO] VS2022 v17.6.4 build 32535" },
	{ 0x010c7f17, "[PG+] VS2022 v17.6.4 build 32535" },
	{ 0x01067f17, "[CIL] VS2022 v17.6.4 build 32535 (*)" },
	{ 0x01077f17, "[CI+] VS2022 v17.6.4 build 32535 (*)" },
	{ 0x010a7f17, "[LTM] VS2022 v17.6.4 build 32535 (*)" },
	{ 0x010d7f17, "[POC] VS2022 v17.6.4 build 32535 (*)" },
	{ 0x010e7f17, "[PO+] VS2022 v17.6.4 build 32535 (*)" },

	// MSVS2022 v17.6.3
	{ 0x01047f16, "[ C ] VS2022 v17.6.3 build 32534" },
	{ 0x01037f16, "[ASM] VS2022 v17.6.3 build 32534" },
	{ 0x01057f16, "[C++] VS2022 v17.6.3 build 32534" },
	{ 0x00ff7f16, "[RES] VS2022 v17.6.3 build 32534" },
	{ 0x01027f16, "[LNK] VS2022 v17.6.3 build 32534" },
	{ 0x01007f16, "[EXP] VS2022 v17.6.3 build 32534" },
	{ 0x01017f16, "[IMP] VS2022 v17.6.3 build 32534" },
	{ 0x01087f16, "[LTC] VS2022 v17.6.3 build 32534" },
	{ 0x01097f16, "[LT+] VS2022 v17.6.3 build 32534" },
	{ 0x010b7f16, "[PGO] VS2022 v17.6.3 build 32534" },
	{ 0x010c7f16, "[PG+] VS2022 v17.6.3 build 32534" },
	{ 0x01067f16, "[CIL] VS2022 v17.6.3 build 32534 (*)" },
	{ 0x01077f16, "[CI+] VS2022 v17.6.3 build 32534 (*)" },
	{ 0x010a7f16, "[LTM] VS2022 v17.6.3 build 32534 (*)" },
	{ 0x010d7f16, "[POC] VS2022 v17.6.3 build 32534 (*)" },
	{ 0x010e7f16, "[PO+] VS2022 v17.6.3 build 32534 (*)" },

	// MSVS2022 v17.6.0
	// MSVS2022 v17.6.1
	// MSVS2022 v17.6.2
	{ 0x01047f14, "[ C ] VS2022 v17.6.0 build 32532" },
	{ 0x01037f14, "[ASM] VS2022 v17.6.0 build 32532" },
	{ 0x01057f14, "[C++] VS2022 v17.6.0 build 32532" },
	{ 0x00ff7f14, "[RES] VS2022 v17.6.0 build 32532" },
	{ 0x01027f14, "[LNK] VS2022 v17.6.0 build 32532" },
	{ 0x01007f14, "[EXP] VS2022 v17.6.0 build 32532" },
	{ 0x01017f14, "[IMP] VS2022 v17.6.0 build 32532" },
	{ 0x01087f14, "[LTC] VS2022 v17.6.0 build 32532" },
	{ 0x01097f14, "[LT+] VS2022 v17.6.0 build 32532" },
	{ 0x010b7f14, "[PGO] VS2022 v17.6.0 build 32532" },
	{ 0x010c7f14, "[PG+] VS2022 v17.6.0 build 32532" },
	{ 0x01067f14, "[CIL] VS2022 v17.6.0 build 32532 (*)" },
	{ 0x01077f14, "[CI+] VS2022 v17.6.0 build 32532 (*)" },
	{ 0x010a7f14, "[LTM] VS2022 v17.6.0 build 32532 (*)" },
	{ 0x010d7f14, "[POC] VS2022 v17.6.0 build 32532 (*)" },
	{ 0x010e7f14, "[PO+] VS2022 v17.6.0 build 32532 (*)" },

	// MSVS2022 v17.5.4
	// MSVS2022 v17.5.5
	{ 0x01047dd9, "[ C ] VS2022 v17.5.4 build 32217" },
	{ 0x01037dd9, "[ASM] VS2022 v17.5.4 build 32217" },
	{ 0x01057dd9, "[C++] VS2022 v17.5.4 build 32217" },
	{ 0x00ff7dd9, "[RES] VS2022 v17.5.4 build 32217" },
	{ 0x01027dd9, "[LNK] VS2022 v17.5.4 build 32217" },
	{ 0x01007dd9, "[EXP] VS2022 v17.5.4 build 32217" },
	{ 0x01017dd9, "[IMP] VS2022 v17.5.4 build 32217" },
	{ 0x01087dd9, "[LTC] VS2022 v17.5.4 build 32217" },
	{ 0x01097dd9, "[LT+] VS2022 v17.5.4 build 32217" },
	{ 0x010b7dd9, "[PGO] VS2022 v17.5.4 build 32217" },
	{ 0x010c7dd9, "[PG+] VS2022 v17.5.4 build 32217" },
	{ 0x01067dd9, "[CIL] VS2022 v17.5.4 build 32217 (*)" },
	{ 0x01077dd9, "[CI+] VS2022 v17.5.4 build 32217 (*)" },
	{ 0x010a7dd9, "[LTM] VS2022 v17.5.4 build 32217 (*)" },
	{ 0x010d7dd9, "[POC] VS2022 v17.5.4 build 32217 (*)" },
	{ 0x010e7dd9, "[PO+] VS2022 v17.5.4 build 32217 (*)" },

	// MSVS2022 v17.5.3
	{ 0x01047dd8, "[ C ] VS2022 v17.5.3 build 32216" },
	{ 0x01037dd8, "[ASM] VS2022 v17.5.3 build 32216" },
	{ 0x01057dd8, "[C++] VS2022 v17.5.3 build 32216" },
	{ 0x00ff7dd8, "[RES] VS2022 v17.5.3 build 32216" },
	{ 0x01027dd8, "[LNK] VS2022 v17.5.3 build 32216" },
	{ 0x01007dd8, "[EXP] VS2022 v17.5.3 build 32216" },
	{ 0x01017dd8, "[IMP] VS2022 v17.5.3 build 32216" },
	{ 0x01087dd8, "[LTC] VS2022 v17.5.3 build 32216" },
	{ 0x01097dd8, "[LT+] VS2022 v17.5.3 build 32216" },
	{ 0x010b7dd8, "[PGO] VS2022 v17.5.3 build 32216" },
	{ 0x010c7dd8, "[PG+] VS2022 v17.5.3 build 32216" },
	{ 0x01067dd8, "[CIL] VS2022 v17.5.3 build 32216 (*)" },
	{ 0x01077dd8, "[CI+] VS2022 v17.5.3 build 32216 (*)" },
	{ 0x010a7dd8, "[LTM] VS2022 v17.5.3 build 32216 (*)" },
	{ 0x010d7dd8, "[POC] VS2022 v17.5.3 build 32216 (*)" },
	{ 0x010e7dd8, "[PO+] VS2022 v17.5.3 build 32216 (*)" },

	// MSVS2022 v17.5.0
	// MSVS2022 v17.5.1
	// MSVS2022 v17.5.2
	{ 0x01047dd7, "[ C ] VS2022 v17.5.0 build 32215" },
	{ 0x01037dd7, "[ASM] VS2022 v17.5.0 build 32215" },
	{ 0x01057dd7, "[C++] VS2022 v17.5.0 build 32215" },
	{ 0x00ff7dd7, "[RES] VS2022 v17.5.0 build 32215" },
	{ 0x01027dd7, "[LNK] VS2022 v17.5.0 build 32215" },
	{ 0x01007dd7, "[EXP] VS2022 v17.5.0 build 32215" },
	{ 0x01017dd7, "[IMP] VS2022 v17.5.0 build 32215" },
	{ 0x01087dd7, "[LTC] VS2022 v17.5.0 build 32215" },
	{ 0x01097dd7, "[LT+] VS2022 v17.5.0 build 32215" },
	{ 0x010b7dd7, "[PGO] VS2022 v17.5.0 build 32215" },
	{ 0x010c7dd7, "[PG+] VS2022 v17.5.0 build 32215" },
	{ 0x01067dd7, "[CIL] VS2022 v17.5.0 build 32215 (*)" },
	{ 0x01077dd7, "[CI+] VS2022 v17.5.0 build 32215 (*)" },
	{ 0x010a7dd7, "[LTM] VS2022 v17.5.0 build 32215 (*)" },
	{ 0x010d7dd7, "[POC] VS2022 v17.5.0 build 32215 (*)" },
	{ 0x010e7dd7, "[PO+] VS2022 v17.5.0 build 32215 (*)" },

	// MSVS2022 v17.4.5
	{ 0x01047cc6, "[ C ] VS2022 v17.4.5 build 31942" },
	{ 0x01037cc6, "[ASM] VS2022 v17.4.5 build 31942" },
	{ 0x01057cc6, "[C++] VS2022 v17.4.5 build 31942" },
	{ 0x00ff7cc6, "[RES] VS2022 v17.4.5 build 31942" },
	{ 0x01027cc6, "[LNK] VS2022 v17.4.5 build 31942" },
	{ 0x01007cc6, "[EXP] VS2022 v17.4.5 build 31942" },
	{ 0x01017cc6, "[IMP] VS2022 v17.4.5 build 31942" },
	{ 0x01067cc6, "[CIL] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x01077cc6, "[CI+] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x01087cc6, "[LTC] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x01097cc6, "[LT+] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x010a7cc6, "[LTM] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x010b7cc6, "[PGO] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x010c7cc6, "[PG+] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x010d7cc6, "[POC] VS2022 v17.4.5 build 31942 (*)" },
	{ 0x010e7cc6, "[PO+] VS2022 v17.4.5 build 31942 (*)" },

	// MSVS2022 v17.4.3
	{ 0x01047cc1, "[ C ] VS2022 v17.4.3 build 31937" },
	{ 0x01037cc1, "[ASM] VS2022 v17.4.3 build 31937" },
	{ 0x01057cc1, "[C++] VS2022 v17.4.3 build 31937" },
	{ 0x00ff7cc1, "[RES] VS2022 v17.4.3 build 31937" },
	{ 0x01027cc1, "[LNK] VS2022 v17.4.3 build 31937" },
	{ 0x01007cc1, "[EXP] VS2022 v17.4.3 build 31937" },
	{ 0x01017cc1, "[IMP] VS2022 v17.4.3 build 31937" },
	{ 0x01067cc1, "[CIL] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x01077cc1, "[CI+] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x01087cc1, "[LTC] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x01097cc1, "[LT+] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x010a7cc1, "[LTM] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x010b7cc1, "[PGO] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x010c7cc1, "[PG+] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x010d7cc1, "[POC] VS2022 v17.4.3 build 31937 (*)" },
	{ 0x010e7cc1, "[PO+] VS2022 v17.4.3 build 31937 (*)" },

	// MSVS2022 v17.4.2
	{ 0x01047cbf, "[ C ] VS2022 v17.4.2 build 31935" },
	{ 0x01037cbf, "[ASM] VS2022 v17.4.2 build 31935" },
	{ 0x01057cbf, "[C++] VS2022 v17.4.2 build 31935" },
	{ 0x00ff7cbf, "[RES] VS2022 v17.4.2 build 31935" },
	{ 0x01027cbf, "[LNK] VS2022 v17.4.2 build 31935" },
	{ 0x01007cbf, "[EXP] VS2022 v17.4.2 build 31935" },
	{ 0x01017cbf, "[IMP] VS2022 v17.4.2 build 31935" },
	{ 0x01067cbf, "[CIL] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x01077cbf, "[CI+] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x01087cbf, "[LTC] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x01097cbf, "[LT+] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x010a7cbf, "[LTM] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x010b7cbf, "[PGO] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x010c7cbf, "[PG+] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x010d7cbf, "[POC] VS2022 v17.4.2 build 31935 (*)" },
	{ 0x010e7cbf, "[PO+] VS2022 v17.4.2 build 31935 (*)" },

	// MSVS2022 v17.3.4
	{ 0x01047b8e, "[ C ] VS2022 v17.3.4 build 31630" },
	{ 0x01037b8e, "[ASM] VS2022 v17.3.4 build 31630" },
	{ 0x01057b8e, "[C++] VS2022 v17.3.4 build 31630" },
	{ 0x00ff7b8e, "[RES] VS2022 v17.3.4 build 31630" },
	{ 0x01027b8e, "[LNK] VS2022 v17.3.4 build 31630" },
	{ 0x01007b8e, "[EXP] VS2022 v17.3.4 build 31630" },
	{ 0x01017b8e, "[IMP] VS2022 v17.3.4 build 31630" },
	{ 0x01067b8e, "[CIL] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x01077b8e, "[CI+] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x01087b8e, "[LTC] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x01097b8e, "[LT+] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x010a7b8e, "[LTM] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x010b7b8e, "[PGO] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x010c7b8e, "[PG+] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x010d7b8e, "[POC] VS2022 v17.3.4 build 31630 (*)" },
	{ 0x010e7b8e, "[PO+] VS2022 v17.3.4 build 31630 (*)" },

	// MSVS2022 v17.2.5
	{ 0x01047a64, "[ C ] VS2022 v17.2.5 build 31332" },
	{ 0x01037a64, "[ASM] VS2022 v17.2.5 build 31332" },
	{ 0x01057a64, "[C++] VS2022 v17.2.5 build 31332" },
	{ 0x00ff7a64, "[RES] VS2022 v17.2.5 build 31332" },
	{ 0x01027a64, "[LNK] VS2022 v17.2.5 build 31332" },
	{ 0x01007a64, "[EXP] VS2022 v17.2.5 build 31332" },
	{ 0x01017a64, "[IMP] VS2022 v17.2.5 build 31332" },
	{ 0x01067a64, "[CIL] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x01077a64, "[CI+] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x01087a64, "[LTC] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x01097a64, "[LT+] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x010a7a64, "[LTM] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x010b7a64, "[PGO] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x010c7a64, "[PG+] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x010d7a64, "[POC] VS2022 v17.2.5 build 31332 (*)" },
	{ 0x010e7a64, "[PO+] VS2022 v17.2.5 build 31332 (*)" },

	// MSVS2022 v17.2.1 - 17.2.4
	{ 0x01047a61, "[ C ] VS2022 v17.2.1 build 31329" },
	{ 0x01037a61, "[ASM] VS2022 v17.2.1 build 31329" },
	{ 0x01057a61, "[C++] VS2022 v17.2.1 build 31329" },
	{ 0x00ff7a61, "[RES] VS2022 v17.2.1 build 31329" },
	{ 0x01027a61, "[LNK] VS2022 v17.2.1 build 31329" },
	{ 0x01007a61, "[EXP] VS2022 v17.2.1 build 31329" },
	{ 0x01017a61, "[IMP] VS2022 v17.2.1 build 31329" },
	{ 0x01067a61, "[CIL] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x01077a61, "[CI+] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x01087a61, "[LTC] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x01097a61, "[LT+] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x010a7a61, "[LTM] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x010b7a61, "[PGO] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x010c7a61, "[PG+] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x010d7a61, "[POC] VS2022 v17.2.1 build 31329 (*)" },
	{ 0x010e7a61, "[PO+] VS2022 v17.2.1 build 31329 (*)" },

	// MSVS2022 v17.14.14-pre.1.0
	// MSVS2022 v17.14.14
	{ 0x01048990, "[ C ] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01038990, "[ASM] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01058990, "[C++] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x00ff8990, "[RES] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01028990, "[LNK] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01008990, "[EXP] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01018990, "[IMP] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01088990, "[LTC] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01098990, "[LT+] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x010b8990, "[PGO] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x010c8990, "[PG+] VS2022 v17.14.14 pre 1.0 build 35216" },
	{ 0x01068990, "[CIL] VS2022 v17.14.14 pre 1.0 build 35216 (*)" },
	{ 0x01078990, "[CI+] VS2022 v17.14.14 pre 1.0 build 35216 (*)" },
	{ 0x010a8990, "[LTM] VS2022 v17.14.14 pre 1.0 build 35216 (*)" },
	{ 0x010d8990, "[POC] VS2022 v17.14.14 pre 1.0 build 35216 (*)" },
	{ 0x010e8990, "[PO+] VS2022 v17.14.14 pre 1.0 build 35216 (*)" },

	// MSVS2022 v17.14.6-pre.1.0
	// MSVS2022 v17.14.6
	// MSVS2022 v17.14.7
	// MSVS2022 v17.14.7-pre.1.0
	// MSVS2022 v17.14.8
	// MSVS2022 v17.14.8-pre.1.0
	{ 0x0104898b, "[ C ] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0103898b, "[ASM] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0105898b, "[C++] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x00ff898b, "[RES] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0102898b, "[LNK] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0100898b, "[EXP] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0101898b, "[IMP] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0108898b, "[LTC] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0109898b, "[LT+] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x010b898b, "[PGO] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x010c898b, "[PG+] VS2022 v17.14.6 pre 1.0 build 35211" },
	{ 0x0106898b, "[CIL] VS2022 v17.14.6 pre 1.0 build 35211 (*)" },
	{ 0x0107898b, "[CI+] VS2022 v17.14.6 pre 1.0 build 35211 (*)" },
	{ 0x010a898b, "[LTM] VS2022 v17.14.6 pre 1.0 build 35211 (*)" },
	{ 0x010d898b, "[POC] VS2022 v17.14.6 pre 1.0 build 35211 (*)" },
	{ 0x010e898b, "[PO+] VS2022 v17.14.6 pre 1.0 build 35211 (*)" },

	// MSVS2022 v17.14.3-pre.1.0
	// MSVS2022 v17.14.3
	{ 0x01048988, "[ C ] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01038988, "[ASM] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01058988, "[C++] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x00ff8988, "[RES] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01028988, "[LNK] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01008988, "[EXP] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01018988, "[IMP] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01088988, "[LTC] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01098988, "[LT+] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x010b8988, "[PGO] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x010c8988, "[PG+] VS2022 v17.14.3 pre 1.0 build 35208" },
	{ 0x01068988, "[CIL] VS2022 v17.14.3 pre 1.0 build 35208 (*)" },
	{ 0x01078988, "[CI+] VS2022 v17.14.3 pre 1.0 build 35208 (*)" },
	{ 0x010a8988, "[LTM] VS2022 v17.14.3 pre 1.0 build 35208 (*)" },
	{ 0x010d8988, "[POC] VS2022 v17.14.3 pre 1.0 build 35208 (*)" },
	{ 0x010e8988, "[PO+] VS2022 v17.14.3 pre 1.0 build 35208 (*)" },

	// MSVS2022 v17.14.0-pre.7.0
	// MSVS2022 v17.14.0
	// MSVS2022 v17.14.2
	// MSVS2022 v17.14.2-pre.1.0
	{ 0x01048987, "[ C ] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01038987, "[ASM] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01058987, "[C++] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x00ff8987, "[RES] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01028987, "[LNK] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01008987, "[EXP] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01018987, "[IMP] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01088987, "[LTC] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01098987, "[LT+] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x010b8987, "[PGO] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x010c8987, "[PG+] VS2022 v17.14.0 pre 7.0 build 35207" },
	{ 0x01068987, "[CIL] VS2022 v17.14.0 pre 7.0 build 35207 (*)" },
	{ 0x01078987, "[CI+] VS2022 v17.14.0 pre 7.0 build 35207 (*)" },
	{ 0x010a8987, "[LTM] VS2022 v17.14.0 pre 7.0 build 35207 (*)" },
	{ 0x010d8987, "[POC] VS2022 v17.14.0 pre 7.0 build 35207 (*)" },
	{ 0x010e8987, "[PO+] VS2022 v17.14.0 pre 7.0 build 35207 (*)" },

	// MSVS2022 v17.14.0-pre.6.0
	{ 0x01048938, "[ C ] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01038938, "[ASM] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01058938, "[C++] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x00ff8938, "[RES] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01028938, "[LNK] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01008938, "[EXP] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01018938, "[IMP] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01088938, "[LTC] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01098938, "[LT+] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x010b8938, "[PGO] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x010c8938, "[PG+] VS2022 v17.14.0 pre 6.0 build 35128" },
	{ 0x01068938, "[CIL] VS2022 v17.14.0 pre 6.0 build 35128 (*)" },
	{ 0x01078938, "[CI+] VS2022 v17.14.0 pre 6.0 build 35128 (*)" },
	{ 0x010a8938, "[LTM] VS2022 v17.14.0 pre 6.0 build 35128 (*)" },
	{ 0x010d8938, "[POC] VS2022 v17.14.0 pre 6.0 build 35128 (*)" },
	{ 0x010e8938, "[PO+] VS2022 v17.14.0 pre 6.0 build 35128 (*)" },

	// MSVS2022 v17.14.0-pre.4.0
	// MSVS2022 v17.14.0-pre.5.0
	{ 0x01048928, "[ C ] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01038928, "[ASM] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01058928, "[C++] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x00ff8928, "[RES] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01028928, "[LNK] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01008928, "[EXP] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01018928, "[IMP] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01088928, "[LTC] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01098928, "[LT+] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x010b8928, "[PGO] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x010c8928, "[PG+] VS2022 v17.14.0 pre 4.0 build 35112" },
	{ 0x01068928, "[CIL] VS2022 v17.14.0 pre 4.0 build 35112 (*)" },
	{ 0x01078928, "[CI+] VS2022 v17.14.0 pre 4.0 build 35112 (*)" },
	{ 0x010a8928, "[LTM] VS2022 v17.14.0 pre 4.0 build 35112 (*)" },
	{ 0x010d8928, "[POC] VS2022 v17.14.0 pre 4.0 build 35112 (*)" },
	{ 0x010e8928, "[PO+] VS2022 v17.14.0 pre 4.0 build 35112 (*)" },

	// MSVS2022 v17.14.0-pre.3.0
	{ 0x01048925, "[ C ] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01038925, "[ASM] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01058925, "[C++] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x00ff8925, "[RES] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01028925, "[LNK] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01008925, "[EXP] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01018925, "[IMP] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01088925, "[LTC] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01098925, "[LT+] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x010b8925, "[PGO] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x010c8925, "[PG+] VS2022 v17.14.0 pre 3.0 build 35109" },
	{ 0x01068925, "[CIL] VS2022 v17.14.0 pre 3.0 build 35109 (*)" },
	{ 0x01078925, "[CI+] VS2022 v17.14.0 pre 3.0 build 35109 (*)" },
	{ 0x010a8925, "[LTM] VS2022 v17.14.0 pre 3.0 build 35109 (*)" },
	{ 0x010d8925, "[POC] VS2022 v17.14.0 pre 3.0 build 35109 (*)" },
	{ 0x010e8925, "[PO+] VS2022 v17.14.0 pre 3.0 build 35109 (*)" },

	// MSVS2022 v17.14.0-pre.2.0
	{ 0x01048866, "[ C ] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01038866, "[ASM] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01058866, "[C++] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x00ff8866, "[RES] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01028866, "[LNK] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01008866, "[EXP] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01018866, "[IMP] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01088866, "[LTC] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01098866, "[LT+] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x010b8866, "[PGO] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x010c8866, "[PG+] VS2022 v17.14.0 pre 2.0 build 34918" },
	{ 0x01068866, "[CIL] VS2022 v17.14.0 pre 2.0 build 34918 (*)" },
	{ 0x01078866, "[CI+] VS2022 v17.14.0 pre 2.0 build 34918 (*)" },
	{ 0x010a8866, "[LTM] VS2022 v17.14.0 pre 2.0 build 34918 (*)" },
	{ 0x010d8866, "[POC] VS2022 v17.14.0 pre 2.0 build 34918 (*)" },
	{ 0x010e8866, "[PO+] VS2022 v17.14.0 pre 2.0 build 34918 (*)" },

	// MSVS2022 v17.14.0-pre.1.0
	// MSVS2022 v17.14.0-pre.1.1
	{ 0x01048807, "[ C ] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01038807, "[ASM] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01058807, "[C++] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x00ff8807, "[RES] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01028807, "[LNK] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01008807, "[EXP] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01018807, "[IMP] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01088807, "[LTC] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01098807, "[LT+] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x010b8807, "[PGO] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x010c8807, "[PG+] VS2022 v17.14.0 pre 1.0 build 34823" },
	{ 0x01068807, "[CIL] VS2022 v17.14.0 pre 1.0 build 34823 (*)" },
	{ 0x01078807, "[CI+] VS2022 v17.14.0 pre 1.0 build 34823 (*)" },
	{ 0x010a8807, "[LTM] VS2022 v17.14.0 pre 1.0 build 34823 (*)" },
	{ 0x010d8807, "[POC] VS2022 v17.14.0 pre 1.0 build 34823 (*)" },
	{ 0x010e8807, "[PO+] VS2022 v17.14.0 pre 1.0 build 34823 (*)" },

	// MSVS2022 v17.13.0-pre.4.0
	// MSVS2022 v17.13.0-pre.5.0
	// MSVS2022 v17.13.0
	// MSVS2022 v17.13.1
	// MSVS2022 v17.13.2
	{ 0x010487f8, "[ C ] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010387f8, "[ASM] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010587f8, "[C++] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x00ff87f8, "[RES] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010287f8, "[LNK] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010087f8, "[EXP] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010187f8, "[IMP] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010887f8, "[LTC] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010987f8, "[LT+] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010b87f8, "[PGO] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010c87f8, "[PG+] VS2022 v17.13.0 pre 4.0 build 34808" },
	{ 0x010687f8, "[CIL] VS2022 v17.13.0 pre 4.0 build 34808 (*)" },
	{ 0x010787f8, "[CI+] VS2022 v17.13.0 pre 4.0 build 34808 (*)" },
	{ 0x010a87f8, "[LTM] VS2022 v17.13.0 pre 4.0 build 34808 (*)" },
	{ 0x010d87f8, "[POC] VS2022 v17.13.0 pre 4.0 build 34808 (*)" },
	{ 0x010e87f8, "[PO+] VS2022 v17.13.0 pre 4.0 build 34808 (*)" },

	// MSVS2022 v17.13.0-pre.2.0
	// MSVS2022 v17.13.0-pre.2.1
	// MSVS2022 v17.13.0-pre.3.0
	{ 0x0104873a, "[ C ] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0103873a, "[ASM] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0105873a, "[C++] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x00ff873a, "[RES] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0102873a, "[LNK] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0100873a, "[EXP] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0101873a, "[IMP] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0108873a, "[LTC] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0109873a, "[LT+] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x010b873a, "[PGO] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x010c873a, "[PG+] VS2022 v17.13.0 pre 2.0 build 34618" },
	{ 0x0106873a, "[CIL] VS2022 v17.13.0 pre 2.0 build 34618 (*)" },
	{ 0x0107873a, "[CI+] VS2022 v17.13.0 pre 2.0 build 34618 (*)" },
	{ 0x010a873a, "[LTM] VS2022 v17.13.0 pre 2.0 build 34618 (*)" },
	{ 0x010d873a, "[POC] VS2022 v17.13.0 pre 2.0 build 34618 (*)" },
	{ 0x010e873a, "[PO+] VS2022 v17.13.0 pre 2.0 build 34618 (*)" },

	// MSVS2022 v17.13.0-pre.1.0
	{ 0x0104872c, "[ C ] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0103872c, "[ASM] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0105872c, "[C++] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x00ff872c, "[RES] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0102872c, "[LNK] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0100872c, "[EXP] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0101872c, "[IMP] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0108872c, "[LTC] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0109872c, "[LT+] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x010b872c, "[PGO] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x010c872c, "[PG+] VS2022 v17.13.0 pre 1.0 build 34604" },
	{ 0x0106872c, "[CIL] VS2022 v17.13.0 pre 1.0 build 34604 (*)" },
	{ 0x0107872c, "[CI+] VS2022 v17.13.0 pre 1.0 build 34604 (*)" },
	{ 0x010a872c, "[LTM] VS2022 v17.13.0 pre 1.0 build 34604 (*)" },
	{ 0x010d872c, "[POC] VS2022 v17.13.0 pre 1.0 build 34604 (*)" },
	{ 0x010e872c, "[PO+] VS2022 v17.13.0 pre 1.0 build 34604 (*)" },

	// MSVS2022 v17.12.0-pre.5.0
	{ 0x01048680, "[ C ] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01038680, "[ASM] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01058680, "[C++] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x00ff8680, "[RES] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01028680, "[LNK] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01008680, "[EXP] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01018680, "[IMP] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01088680, "[LTC] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01098680, "[LT+] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x010b8680, "[PGO] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x010c8680, "[PG+] VS2022 v17.12.0 pre 5.0 build 34432" },
	{ 0x01068680, "[CIL] VS2022 v17.12.0 pre 5.0 build 34432 (*)" },
	{ 0x01078680, "[CI+] VS2022 v17.12.0 pre 5.0 build 34432 (*)" },
	{ 0x010a8680, "[LTM] VS2022 v17.12.0 pre 5.0 build 34432 (*)" },
	{ 0x010d8680, "[POC] VS2022 v17.12.0 pre 5.0 build 34432 (*)" },
	{ 0x010e8680, "[PO+] VS2022 v17.12.0 pre 5.0 build 34432 (*)" },

	// MSVS2022 v17.12.0-pre.4.0
	{ 0x0104867f, "[ C ] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0103867f, "[ASM] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0105867f, "[C++] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x00ff867f, "[RES] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0102867f, "[LNK] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0100867f, "[EXP] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0101867f, "[IMP] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0108867f, "[LTC] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0109867f, "[LT+] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x010b867f, "[PGO] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x010c867f, "[PG+] VS2022 v17.12.0 pre 4.0 build 34431" },
	{ 0x0106867f, "[CIL] VS2022 v17.12.0 pre 4.0 build 34431 (*)" },
	{ 0x0107867f, "[CI+] VS2022 v17.12.0 pre 4.0 build 34431 (*)" },
	{ 0x010a867f, "[LTM] VS2022 v17.12.0 pre 4.0 build 34431 (*)" },
	{ 0x010d867f, "[POC] VS2022 v17.12.0 pre 4.0 build 34431 (*)" },
	{ 0x010e867f, "[PO+] VS2022 v17.12.0 pre 4.0 build 34431 (*)" },

	// MSVS2022 v17.12.0-pre.3.0
	{ 0x0104867e, "[ C ] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0103867e, "[ASM] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0105867e, "[C++] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x00ff867e, "[RES] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0102867e, "[LNK] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0100867e, "[EXP] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0101867e, "[IMP] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0108867e, "[LTC] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0109867e, "[LT+] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x010b867e, "[PGO] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x010c867e, "[PG+] VS2022 v17.12.0 pre 3.0 build 34430" },
	{ 0x0106867e, "[CIL] VS2022 v17.12.0 pre 3.0 build 34430 (*)" },
	{ 0x0107867e, "[CI+] VS2022 v17.12.0 pre 3.0 build 34430 (*)" },
	{ 0x010a867e, "[LTM] VS2022 v17.12.0 pre 3.0 build 34430 (*)" },
	{ 0x010d867e, "[POC] VS2022 v17.12.0 pre 3.0 build 34430 (*)" },
	{ 0x010e867e, "[PO+] VS2022 v17.12.0 pre 3.0 build 34430 (*)" },

	// MSVS2022 v17.12.0-pre.2.0
	// MSVS2022 v17.12.0-pre.2.1
	{ 0x01048611, "[ C ] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01038611, "[ASM] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01058611, "[C++] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x00ff8611, "[RES] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01028611, "[LNK] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01008611, "[EXP] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01018611, "[IMP] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01088611, "[LTC] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01098611, "[LT+] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x010b8611, "[PGO] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x010c8611, "[PG+] VS2022 v17.12.0 pre 2.0 build 34321" },
	{ 0x01068611, "[CIL] VS2022 v17.12.0 pre 2.0 build 34321 (*)" },
	{ 0x01078611, "[CI+] VS2022 v17.12.0 pre 2.0 build 34321 (*)" },
	{ 0x010a8611, "[LTM] VS2022 v17.12.0 pre 2.0 build 34321 (*)" },
	{ 0x010d8611, "[POC] VS2022 v17.12.0 pre 2.0 build 34321 (*)" },
	{ 0x010e8611, "[PO+] VS2022 v17.12.0 pre 2.0 build 34321 (*)" },

	// MSVS2022 v17.12.0-pre.1.0
	{ 0x010485b2, "[ C ] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010385b2, "[ASM] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010585b2, "[C++] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x00ff85b2, "[RES] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010285b2, "[LNK] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010085b2, "[EXP] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010185b2, "[IMP] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010885b2, "[LTC] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010985b2, "[LT+] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010b85b2, "[PGO] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010c85b2, "[PG+] VS2022 v17.12.0 pre 1.0 build 34226" },
	{ 0x010685b2, "[CIL] VS2022 v17.12.0 pre 1.0 build 34226 (*)" },
	{ 0x010785b2, "[CI+] VS2022 v17.12.0 pre 1.0 build 34226 (*)" },
	{ 0x010a85b2, "[LTM] VS2022 v17.12.0 pre 1.0 build 34226 (*)" },
	{ 0x010d85b2, "[POC] VS2022 v17.12.0 pre 1.0 build 34226 (*)" },
	{ 0x010e85b2, "[PO+] VS2022 v17.12.0 pre 1.0 build 34226 (*)" },

	// MSVS2022 v17.11.0-pre.7.0
	{ 0x01048547, "[ C ] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01038547, "[ASM] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01058547, "[C++] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x00ff8547, "[RES] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01028547, "[LNK] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01008547, "[EXP] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01018547, "[IMP] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01088547, "[LTC] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01098547, "[LT+] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x010b8547, "[PGO] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x010c8547, "[PG+] VS2022 v17.11.0 pre 7.0 build 34119" },
	{ 0x01068547, "[CIL] VS2022 v17.11.0 pre 7.0 build 34119 (*)" },
	{ 0x01078547, "[CI+] VS2022 v17.11.0 pre 7.0 build 34119 (*)" },
	{ 0x010a8547, "[LTM] VS2022 v17.11.0 pre 7.0 build 34119 (*)" },
	{ 0x010d8547, "[POC] VS2022 v17.11.0 pre 7.0 build 34119 (*)" },
	{ 0x010e8547, "[PO+] VS2022 v17.11.0 pre 7.0 build 34119 (*)" },

	// MSVS2022 v17.11.0-pre.5.0
	// MSVS2022 v17.11.0-pre.6.0
	{ 0x01048545, "[ C ] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01038545, "[ASM] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01058545, "[C++] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x00ff8545, "[RES] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01028545, "[LNK] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01008545, "[EXP] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01018545, "[IMP] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01088545, "[LTC] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01098545, "[LT+] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x010b8545, "[PGO] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x010c8545, "[PG+] VS2022 v17.11.0 pre 5.0 build 34117" },
	{ 0x01068545, "[CIL] VS2022 v17.11.0 pre 5.0 build 34117 (*)" },
	{ 0x01078545, "[CI+] VS2022 v17.11.0 pre 5.0 build 34117 (*)" },
	{ 0x010a8545, "[LTM] VS2022 v17.11.0 pre 5.0 build 34117 (*)" },
	{ 0x010d8545, "[POC] VS2022 v17.11.0 pre 5.0 build 34117 (*)" },
	{ 0x010e8545, "[PO+] VS2022 v17.11.0 pre 5.0 build 34117 (*)" },

	// MSVS2022 v17.11.0-pre.3.0
	// MSVS2022 v17.11.0-pre.4.0
	{ 0x010484e5, "[ C ] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010384e5, "[ASM] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010584e5, "[C++] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x00ff84e5, "[RES] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010284e5, "[LNK] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010084e5, "[EXP] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010184e5, "[IMP] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010884e5, "[LTC] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010984e5, "[LT+] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010b84e5, "[PGO] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010c84e5, "[PG+] VS2022 v17.11.0 pre 3.0 build 34021" },
	{ 0x010684e5, "[CIL] VS2022 v17.11.0 pre 3.0 build 34021 (*)" },
	{ 0x010784e5, "[CI+] VS2022 v17.11.0 pre 3.0 build 34021 (*)" },
	{ 0x010a84e5, "[LTM] VS2022 v17.11.0 pre 3.0 build 34021 (*)" },
	{ 0x010d84e5, "[POC] VS2022 v17.11.0 pre 3.0 build 34021 (*)" },
	{ 0x010e84e5, "[PO+] VS2022 v17.11.0 pre 3.0 build 34021 (*)" },

	// MSVS2022 v17.11.0-pre.2.0
	// MSVS2022 v17.11.0-pre.2.1
	{ 0x01048483, "[ C ] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01038483, "[ASM] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01058483, "[C++] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x00ff8483, "[RES] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01028483, "[LNK] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01008483, "[EXP] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01018483, "[IMP] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01088483, "[LTC] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01098483, "[LT+] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x010b8483, "[PGO] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x010c8483, "[PG+] VS2022 v17.11.0 pre 2.0 build 33923" },
	{ 0x01068483, "[CIL] VS2022 v17.11.0 pre 2.0 build 33923 (*)" },
	{ 0x01078483, "[CI+] VS2022 v17.11.0 pre 2.0 build 33923 (*)" },
	{ 0x010a8483, "[LTM] VS2022 v17.11.0 pre 2.0 build 33923 (*)" },
	{ 0x010d8483, "[POC] VS2022 v17.11.0 pre 2.0 build 33923 (*)" },
	{ 0x010e8483, "[PO+] VS2022 v17.11.0 pre 2.0 build 33923 (*)" },

	// MSVS2022 v17.11.0-pre.1.0
	// MSVS2022 v17.11.0-pre.1.1
	{ 0x0104846d, "[ C ] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0103846d, "[ASM] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0105846d, "[C++] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x00ff846d, "[RES] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0102846d, "[LNK] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0100846d, "[EXP] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0101846d, "[IMP] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0108846d, "[LTC] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0109846d, "[LT+] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x010b846d, "[PGO] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x010c846d, "[PG+] VS2022 v17.11.0 pre 1.0 build 33901" },
	{ 0x0106846d, "[CIL] VS2022 v17.11.0 pre 1.0 build 33901 (*)" },
	{ 0x0107846d, "[CI+] VS2022 v17.11.0 pre 1.0 build 33901 (*)" },
	{ 0x010a846d, "[LTM] VS2022 v17.11.0 pre 1.0 build 33901 (*)" },
	{ 0x010d846d, "[POC] VS2022 v17.11.0 pre 1.0 build 33901 (*)" },
	{ 0x010e846d, "[PO+] VS2022 v17.11.0 pre 1.0 build 33901 (*)" },

	// MSVS2022 v17.10.0-pre.5.0
	// MSVS2022 v17.10.0-pre.6.0
	// MSVS2022 v17.10.0-pre.7.0
	// MSVS2022 v17.10.0
	{ 0x01048410, "[ C ] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01038410, "[ASM] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01058410, "[C++] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x00ff8410, "[RES] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01028410, "[LNK] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01008410, "[EXP] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01018410, "[IMP] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01088410, "[LTC] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01098410, "[LT+] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x010b8410, "[PGO] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x010c8410, "[PG+] VS2022 v17.10.0 pre 5.0 build 33808" },
	{ 0x01068410, "[CIL] VS2022 v17.10.0 pre 5.0 build 33808 (*)" },
	{ 0x01078410, "[CI+] VS2022 v17.10.0 pre 5.0 build 33808 (*)" },
	{ 0x010a8410, "[LTM] VS2022 v17.10.0 pre 5.0 build 33808 (*)" },
	{ 0x010d8410, "[POC] VS2022 v17.10.0 pre 5.0 build 33808 (*)" },
	{ 0x010e8410, "[PO+] VS2022 v17.10.0 pre 5.0 build 33808 (*)" },

	// MSVS2022 v17.10.0-pre.4.0
	{ 0x0104840f, "[ C ] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0103840f, "[ASM] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0105840f, "[C++] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x00ff840f, "[RES] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0102840f, "[LNK] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0100840f, "[EXP] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0101840f, "[IMP] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0108840f, "[LTC] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0109840f, "[LT+] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x010b840f, "[PGO] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x010c840f, "[PG+] VS2022 v17.10.0 pre 4.0 build 33807" },
	{ 0x0106840f, "[CIL] VS2022 v17.10.0 pre 4.0 build 33807 (*)" },
	{ 0x0107840f, "[CI+] VS2022 v17.10.0 pre 4.0 build 33807 (*)" },
	{ 0x010a840f, "[LTM] VS2022 v17.10.0 pre 4.0 build 33807 (*)" },
	{ 0x010d840f, "[POC] VS2022 v17.10.0 pre 4.0 build 33807 (*)" },
	{ 0x010e840f, "[PO+] VS2022 v17.10.0 pre 4.0 build 33807 (*)" },

	// MSVS2022 v17.10.0-pre.3.0
	{ 0x010483b9, "[ C ] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010383b9, "[ASM] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010583b9, "[C++] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x00ff83b9, "[RES] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010283b9, "[LNK] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010083b9, "[EXP] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010183b9, "[IMP] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010883b9, "[LTC] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010983b9, "[LT+] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010b83b9, "[PGO] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010c83b9, "[PG+] VS2022 v17.10.0 pre 3.0 build 33721" },
	{ 0x010683b9, "[CIL] VS2022 v17.10.0 pre 3.0 build 33721 (*)" },
	{ 0x010783b9, "[CI+] VS2022 v17.10.0 pre 3.0 build 33721 (*)" },
	{ 0x010a83b9, "[LTM] VS2022 v17.10.0 pre 3.0 build 33721 (*)" },
	{ 0x010d83b9, "[POC] VS2022 v17.10.0 pre 3.0 build 33721 (*)" },
	{ 0x010e83b9, "[PO+] VS2022 v17.10.0 pre 3.0 build 33721 (*)" },

	// MSVS2022 v17.10.0-pre.2.0
	{ 0x01048351, "[ C ] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01038351, "[ASM] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01058351, "[C++] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x00ff8351, "[RES] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01028351, "[LNK] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01008351, "[EXP] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01018351, "[IMP] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01088351, "[LTC] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01098351, "[LT+] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x010b8351, "[PGO] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x010c8351, "[PG+] VS2022 v17.10.0 pre 2.0 build 33617" },
	{ 0x01068351, "[CIL] VS2022 v17.10.0 pre 2.0 build 33617 (*)" },
	{ 0x01078351, "[CI+] VS2022 v17.10.0 pre 2.0 build 33617 (*)" },
	{ 0x010a8351, "[LTM] VS2022 v17.10.0 pre 2.0 build 33617 (*)" },
	{ 0x010d8351, "[POC] VS2022 v17.10.0 pre 2.0 build 33617 (*)" },
	{ 0x010e8351, "[PO+] VS2022 v17.10.0 pre 2.0 build 33617 (*)" },

	// MSVS2022 v17.10.0-pre.1.0
	// MSVS2022 v17.9.2
	{ 0x010482f1, "[ C ] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010382f1, "[ASM] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010582f1, "[C++] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x00ff82f1, "[RES] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010282f1, "[LNK] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010082f1, "[EXP] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010182f1, "[IMP] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010882f1, "[LTC] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010982f1, "[LT+] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010b82f1, "[PGO] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010c82f1, "[PG+] VS2022 v17.10.0 pre 1.0 build 33521" },
	{ 0x010682f1, "[CIL] VS2022 v17.10.0 pre 1.0 build 33521 (*)" },
	{ 0x010782f1, "[CI+] VS2022 v17.10.0 pre 1.0 build 33521 (*)" },
	{ 0x010a82f1, "[LTM] VS2022 v17.10.0 pre 1.0 build 33521 (*)" },
	{ 0x010d82f1, "[POC] VS2022 v17.10.0 pre 1.0 build 33521 (*)" },
	{ 0x010e82f1, "[PO+] VS2022 v17.10.0 pre 1.0 build 33521 (*)" },

	// MSVS2022 v17.9.0-pre.5.0
	// MSVS2022 v17.9.0
	{ 0x010482ef, "[ C ] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010382ef, "[ASM] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010582ef, "[C++] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x00ff82ef, "[RES] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010282ef, "[LNK] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010082ef, "[EXP] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010182ef, "[IMP] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010882ef, "[LTC] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010982ef, "[LT+] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010b82ef, "[PGO] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010c82ef, "[PG+] VS2022 v17.9.0 pre 5.0 build 33519" },
	{ 0x010682ef, "[CIL] VS2022 v17.9.0 pre 5.0 build 33519 (*)" },
	{ 0x010782ef, "[CI+] VS2022 v17.9.0 pre 5.0 build 33519 (*)" },
	{ 0x010a82ef, "[LTM] VS2022 v17.9.0 pre 5.0 build 33519 (*)" },
	{ 0x010d82ef, "[POC] VS2022 v17.9.0 pre 5.0 build 33519 (*)" },
	{ 0x010e82ef, "[PO+] VS2022 v17.9.0 pre 5.0 build 33519 (*)" },

	// MSVS2022 v17.9.0-pre.3.0
	// MSVS2022 v17.9.0-pre.4.0
	{ 0x01048294, "[ C ] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01038294, "[ASM] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01058294, "[C++] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x00ff8294, "[RES] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01028294, "[LNK] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01008294, "[EXP] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01018294, "[IMP] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01088294, "[LTC] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01098294, "[LT+] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x010b8294, "[PGO] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x010c8294, "[PG+] VS2022 v17.9.0 pre 3.0 build 33428" },
	{ 0x01068294, "[CIL] VS2022 v17.9.0 pre 3.0 build 33428 (*)" },
	{ 0x01078294, "[CI+] VS2022 v17.9.0 pre 3.0 build 33428 (*)" },
	{ 0x010a8294, "[LTM] VS2022 v17.9.0 pre 3.0 build 33428 (*)" },
	{ 0x010d8294, "[POC] VS2022 v17.9.0 pre 3.0 build 33428 (*)" },
	{ 0x010e8294, "[PO+] VS2022 v17.9.0 pre 3.0 build 33428 (*)" },

	// MSVS2022 v17.9.0-pre.2.0
	// MSVS2022 v17.9.0-pre.2.1
	{ 0x01048229, "[ C ] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01038229, "[ASM] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01058229, "[C++] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x00ff8229, "[RES] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01028229, "[LNK] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01008229, "[EXP] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01018229, "[IMP] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01088229, "[LTC] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01098229, "[LT+] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x010b8229, "[PGO] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x010c8229, "[PG+] VS2022 v17.9.0 pre 2.0 build 33321" },
	{ 0x01068229, "[CIL] VS2022 v17.9.0 pre 2.0 build 33321 (*)" },
	{ 0x01078229, "[CI+] VS2022 v17.9.0 pre 2.0 build 33321 (*)" },
	{ 0x010a8229, "[LTM] VS2022 v17.9.0 pre 2.0 build 33321 (*)" },
	{ 0x010d8229, "[POC] VS2022 v17.9.0 pre 2.0 build 33321 (*)" },
	{ 0x010e8229, "[PO+] VS2022 v17.9.0 pre 2.0 build 33321 (*)" },

	// MSVS2022 v17.9.0-pre.1.0
	// MSVS2022 v17.9.0-pre.1.1
	{ 0x010481c2, "[ C ] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010381c2, "[ASM] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010581c2, "[C++] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x00ff81c2, "[RES] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010281c2, "[LNK] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010081c2, "[EXP] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010181c2, "[IMP] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010881c2, "[LTC] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010981c2, "[LT+] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010b81c2, "[PGO] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010c81c2, "[PG+] VS2022 v17.9.0 pre 1.0 build 33218" },
	{ 0x010681c2, "[CIL] VS2022 v17.9.0 pre 1.0 build 33218 (*)" },
	{ 0x010781c2, "[CI+] VS2022 v17.9.0 pre 1.0 build 33218 (*)" },
	{ 0x010a81c2, "[LTM] VS2022 v17.9.0 pre 1.0 build 33218 (*)" },
	{ 0x010d81c2, "[POC] VS2022 v17.9.0 pre 1.0 build 33218 (*)" },
	{ 0x010e81c2, "[PO+] VS2022 v17.9.0 pre 1.0 build 33218 (*)" },

	// MSVS2022 v17.8.0-pre.6.0
	{ 0x01048169, "[ C ] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01038169, "[ASM] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01058169, "[C++] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x00ff8169, "[RES] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01028169, "[LNK] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01008169, "[EXP] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01018169, "[IMP] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01088169, "[LTC] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01098169, "[LT+] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x010b8169, "[PGO] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x010c8169, "[PG+] VS2022 v17.8.0 pre 6.0 build 33129" },
	{ 0x01068169, "[CIL] VS2022 v17.8.0 pre 6.0 build 33129 (*)" },
	{ 0x01078169, "[CI+] VS2022 v17.8.0 pre 6.0 build 33129 (*)" },
	{ 0x010a8169, "[LTM] VS2022 v17.8.0 pre 6.0 build 33129 (*)" },
	{ 0x010d8169, "[POC] VS2022 v17.8.0 pre 6.0 build 33129 (*)" },
	{ 0x010e8169, "[PO+] VS2022 v17.8.0 pre 6.0 build 33129 (*)" },

	// MSVS2022 v17.8.0-pre.5.0
	{ 0x01048168, "[ C ] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01038168, "[ASM] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01058168, "[C++] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x00ff8168, "[RES] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01028168, "[LNK] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01008168, "[EXP] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01018168, "[IMP] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01088168, "[LTC] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01098168, "[LT+] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x010b8168, "[PGO] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x010c8168, "[PG+] VS2022 v17.8.0 pre 5.0 build 33128" },
	{ 0x01068168, "[CIL] VS2022 v17.8.0 pre 5.0 build 33128 (*)" },
	{ 0x01078168, "[CI+] VS2022 v17.8.0 pre 5.0 build 33128 (*)" },
	{ 0x010a8168, "[LTM] VS2022 v17.8.0 pre 5.0 build 33128 (*)" },
	{ 0x010d8168, "[POC] VS2022 v17.8.0 pre 5.0 build 33128 (*)" },
	{ 0x010e8168, "[PO+] VS2022 v17.8.0 pre 5.0 build 33128 (*)" },

	// MSVS2022 v17.8.0-pre.3.0
	// MSVS2022 v17.8.0-pre.4.0
	{ 0x01048166, "[ C ] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01038166, "[ASM] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01058166, "[C++] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x00ff8166, "[RES] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01028166, "[LNK] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01008166, "[EXP] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01018166, "[IMP] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01088166, "[LTC] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01098166, "[LT+] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x010b8166, "[PGO] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x010c8166, "[PG+] VS2022 v17.8.0 pre 3.0 build 33126" },
	{ 0x01068166, "[CIL] VS2022 v17.8.0 pre 3.0 build 33126 (*)" },
	{ 0x01078166, "[CI+] VS2022 v17.8.0 pre 3.0 build 33126 (*)" },
	{ 0x010a8166, "[LTM] VS2022 v17.8.0 pre 3.0 build 33126 (*)" },
	{ 0x010d8166, "[POC] VS2022 v17.8.0 pre 3.0 build 33126 (*)" },
	{ 0x010e8166, "[PO+] VS2022 v17.8.0 pre 3.0 build 33126 (*)" },

	// MSVS2022 v17.8.0-pre.2.0
	{ 0x01048106, "[ C ] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01038106, "[ASM] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01058106, "[C++] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x00ff8106, "[RES] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01028106, "[LNK] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01008106, "[EXP] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01018106, "[IMP] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01088106, "[LTC] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01098106, "[LT+] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x010b8106, "[PGO] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x010c8106, "[PG+] VS2022 v17.8.0 pre 2.0 build 33030" },
	{ 0x01068106, "[CIL] VS2022 v17.8.0 pre 2.0 build 33030 (*)" },
	{ 0x01078106, "[CI+] VS2022 v17.8.0 pre 2.0 build 33030 (*)" },
	{ 0x010a8106, "[LTM] VS2022 v17.8.0 pre 2.0 build 33030 (*)" },
	{ 0x010d8106, "[POC] VS2022 v17.8.0 pre 2.0 build 33030 (*)" },
	{ 0x010e8106, "[PO+] VS2022 v17.8.0 pre 2.0 build 33030 (*)" },

	// MSVS2022 v17.8.0-pre.1.0
	{ 0x01048097, "[ C ] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01038097, "[ASM] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01058097, "[C++] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x00ff8097, "[RES] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01028097, "[LNK] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01008097, "[EXP] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01018097, "[IMP] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01088097, "[LTC] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01098097, "[LT+] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x010b8097, "[PGO] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x010c8097, "[PG+] VS2022 v17.8.0 pre 1.0 build 32919" },
	{ 0x01068097, "[CIL] VS2022 v17.8.0 pre 1.0 build 32919 (*)" },
	{ 0x01078097, "[CI+] VS2022 v17.8.0 pre 1.0 build 32919 (*)" },
	{ 0x010a8097, "[LTM] VS2022 v17.8.0 pre 1.0 build 32919 (*)" },
	{ 0x010d8097, "[POC] VS2022 v17.8.0 pre 1.0 build 32919 (*)" },
	{ 0x010e8097, "[PO+] VS2022 v17.8.0 pre 1.0 build 32919 (*)" },

	// MSVS2022 v17.7.0-pre.3.0
	// MSVS2022 v17.7.0-pre.4.0
	// MSVS2022 v17.7.0-pre.5.0
	// MSVS2022 v17.7.0-pre.6.0
	{ 0x01048034, "[ C ] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01038034, "[ASM] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01058034, "[C++] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x00ff8034, "[RES] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01028034, "[LNK] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01008034, "[EXP] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01018034, "[IMP] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01088034, "[LTC] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01098034, "[LT+] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x010b8034, "[PGO] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x010c8034, "[PG+] VS2022 v17.7.0 pre 3.0 build 32820" },
	{ 0x01068034, "[CIL] VS2022 v17.7.0 pre 3.0 build 32820 (*)" },
	{ 0x01078034, "[CI+] VS2022 v17.7.0 pre 3.0 build 32820 (*)" },
	{ 0x010a8034, "[LTM] VS2022 v17.7.0 pre 3.0 build 32820 (*)" },
	{ 0x010d8034, "[POC] VS2022 v17.7.0 pre 3.0 build 32820 (*)" },
	{ 0x010e8034, "[PO+] VS2022 v17.7.0 pre 3.0 build 32820 (*)" },

	// MSVS2022 v17.7.0-pre.1.0
	// MSVS2022 v17.7.0-pre.2.0
	{ 0x01047fc1, "[ C ] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01037fc1, "[ASM] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01057fc1, "[C++] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x00ff7fc1, "[RES] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01027fc1, "[LNK] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01007fc1, "[EXP] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01017fc1, "[IMP] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01087fc1, "[LTC] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01097fc1, "[LT+] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x010b7fc1, "[PGO] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x010c7fc1, "[PG+] VS2022 v17.7.0 pre 1.0 build 32705" },
	{ 0x01067fc1, "[CIL] VS2022 v17.7.0 pre 1.0 build 32705 (*)" },
	{ 0x01077fc1, "[CI+] VS2022 v17.7.0 pre 1.0 build 32705 (*)" },
	{ 0x010a7fc1, "[LTM] VS2022 v17.7.0 pre 1.0 build 32705 (*)" },
	{ 0x010d7fc1, "[POC] VS2022 v17.7.0 pre 1.0 build 32705 (*)" },
	{ 0x010e7fc1, "[PO+] VS2022 v17.7.0 pre 1.0 build 32705 (*)" },

	// MSVS2022 v17.6.0-pre.5.0
	// MSVS2022 v17.6.0-pre.6.0
	// MSVS2022 v17.6.0-pre.7.0
	{ 0x01047f12, "[ C ] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01037f12, "[ASM] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01057f12, "[C++] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x00ff7f12, "[RES] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01027f12, "[LNK] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01007f12, "[EXP] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01017f12, "[IMP] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01087f12, "[LTC] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01097f12, "[LT+] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x010b7f12, "[PGO] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x010c7f12, "[PG+] VS2022 v17.6.0 pre 5.0 build 32530" },
	{ 0x01067f12, "[CIL] VS2022 v17.6.0 pre 5.0 build 32530 (*)" },
	{ 0x01077f12, "[CI+] VS2022 v17.6.0 pre 5.0 build 32530 (*)" },
	{ 0x010a7f12, "[LTM] VS2022 v17.6.0 pre 5.0 build 32530 (*)" },
	{ 0x010d7f12, "[POC] VS2022 v17.6.0 pre 5.0 build 32530 (*)" },
	{ 0x010e7f12, "[PO+] VS2022 v17.6.0 pre 5.0 build 32530 (*)" },

	// MSVS2022 v17.6.0-pre.3.0
	// MSVS2022 v17.6.0-pre.4.0
	{ 0x01047f0a, "[ C ] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01037f0a, "[ASM] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01057f0a, "[C++] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x00ff7f0a, "[RES] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01027f0a, "[LNK] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01007f0a, "[EXP] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01017f0a, "[IMP] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01087f0a, "[LTC] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01097f0a, "[LT+] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x010b7f0a, "[PGO] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x010c7f0a, "[PG+] VS2022 v17.6.0 pre 3.0 build 32522" },
	{ 0x01067f0a, "[CIL] VS2022 v17.6.0 pre 3.0 build 32522 (*)" },
	{ 0x01077f0a, "[CI+] VS2022 v17.6.0 pre 3.0 build 32522 (*)" },
	{ 0x010a7f0a, "[LTM] VS2022 v17.6.0 pre 3.0 build 32522 (*)" },
	{ 0x010d7f0a, "[POC] VS2022 v17.6.0 pre 3.0 build 32522 (*)" },
	{ 0x010e7f0a, "[PO+] VS2022 v17.6.0 pre 3.0 build 32522 (*)" },

	// MSVS2022 v17.6.0-pre.2.0
	{ 0x01047ef6, "[ C ] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01037ef6, "[ASM] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01057ef6, "[C++] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x00ff7ef6, "[RES] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01027ef6, "[LNK] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01007ef6, "[EXP] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01017ef6, "[IMP] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01087ef6, "[LTC] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01097ef6, "[LT+] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x010b7ef6, "[PGO] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x010c7ef6, "[PG+] VS2022 v17.6.0 pre 2.0 build 32502" },
	{ 0x01067ef6, "[CIL] VS2022 v17.6.0 pre 2.0 build 32502 (*)" },
	{ 0x01077ef6, "[CI+] VS2022 v17.6.0 pre 2.0 build 32502 (*)" },
	{ 0x010a7ef6, "[LTM] VS2022 v17.6.0 pre 2.0 build 32502 (*)" },
	{ 0x010d7ef6, "[POC] VS2022 v17.6.0 pre 2.0 build 32502 (*)" },
	{ 0x010e7ef6, "[PO+] VS2022 v17.6.0 pre 2.0 build 32502 (*)" },

	// MSVS2022 v17.6.0-pre.1.0
	{ 0x01047e43, "[ C ] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01037e43, "[ASM] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01057e43, "[C++] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x00ff7e43, "[RES] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01027e43, "[LNK] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01007e43, "[EXP] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01017e43, "[IMP] VS2022 v17.6.0 pre 1.0 build 32323" },
	{ 0x01067e43, "[CIL] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x01077e43, "[CI+] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x01087e43, "[LTC] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x01097e43, "[LT+] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x010a7e43, "[LTM] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x010b7e43, "[PGO] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x010c7e43, "[PG+] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x010d7e43, "[POC] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },
	{ 0x010e7e43, "[PO+] VS2022 v17.6.0 pre 1.0 build 32323 (*)" },

	// MSVS2022 v17.5.0-pre.4.0
	{ 0x01047dd5, "[ C ] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01037dd5, "[ASM] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01057dd5, "[C++] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x00ff7dd5, "[RES] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01027dd5, "[LNK] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01007dd5, "[EXP] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01017dd5, "[IMP] VS2022 v17.5.0 pre 4.0 build 32213" },
	{ 0x01067dd5, "[CIL] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x01077dd5, "[CI+] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x01087dd5, "[LTC] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x01097dd5, "[LT+] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x010a7dd5, "[LTM] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x010b7dd5, "[PGO] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x010c7dd5, "[PG+] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x010d7dd5, "[POC] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },
	{ 0x010e7dd5, "[PO+] VS2022 v17.5.0 pre 4.0 build 32213 (*)" },

	// MSVS2022 v17.5.0-pre.2.0
	{ 0x01047d7c, "[ C ] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01037d7c, "[ASM] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01057d7c, "[C++] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x00ff7d7c, "[RES] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01027d7c, "[LNK] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01007d7c, "[EXP] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01017d7c, "[IMP] VS2022 v17.5.0 pre 2.0 build 32124" },
	{ 0x01067d7c, "[CIL] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x01077d7c, "[CI+] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x01087d7c, "[LTC] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x01097d7c, "[LT+] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x010a7d7c, "[LTM] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x010b7d7c, "[PGO] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x010c7d7c, "[PG+] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x010d7d7c, "[POC] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },
	{ 0x010e7d7c, "[PO+] VS2022 v17.5.0 pre 2.0 build 32124 (*)" },

	// MSVS2022 v17.5.0-pre.1.0
	{ 0x01047d13, "[ C ] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01037d13, "[ASM] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01057d13, "[C++] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x00ff7d13, "[RES] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01027d13, "[LNK] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01007d13, "[EXP] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01017d13, "[IMP] VS2022 v17.5.0 pre 1.0 build 32019" },
	{ 0x01067d13, "[CIL] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x01077d13, "[CI+] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x01087d13, "[LTC] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x01097d13, "[LT+] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x010a7d13, "[LTM] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x010b7d13, "[PGO] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x010c7d13, "[PG+] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x010d7d13, "[POC] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },
	{ 0x010e7d13, "[PO+] VS2022 v17.5.0 pre 1.0 build 32019 (*)" },

	// MSVS2022 v17.4.0-pre.6.0
	{ 0x01047cbd, "[ C ] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01037cbd, "[ASM] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01057cbd, "[C++] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x00ff7cbd, "[RES] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01027cbd, "[LNK] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01007cbd, "[EXP] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01017cbd, "[IMP] VS2022 v17.4.0 pre 6.0 build 31933" },
	{ 0x01067cbd, "[CIL] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x01077cbd, "[CI+] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x01087cbd, "[LTC] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x01097cbd, "[LT+] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x010a7cbd, "[LTM] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x010b7cbd, "[PGO] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x010c7cbd, "[PG+] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x010d7cbd, "[POC] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },
	{ 0x010e7cbd, "[PO+] VS2022 v17.4.0 pre 6.0 build 31933 (*)" },

	// MSVS2022 v17.4.0-pre.5.0
	{ 0x01047cbc, "[ C ] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01037cbc, "[ASM] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01057cbc, "[C++] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x00ff7cbc, "[RES] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01027cbc, "[LNK] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01007cbc, "[EXP] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01017cbc, "[IMP] VS2022 v17.4.0 pre 5.0 build 31932" },
	{ 0x01067cbc, "[CIL] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x01077cbc, "[CI+] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x01087cbc, "[LTC] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x01097cbc, "[LT+] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x010a7cbc, "[LTM] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x010b7cbc, "[PGO] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x010c7cbc, "[PG+] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x010d7cbc, "[POC] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },
	{ 0x010e7cbc, "[PO+] VS2022 v17.4.0 pre 5.0 build 31932 (*)" },

	// MSVS2022 v17.4.0-pre.4.0
	{ 0x01047cbb, "[ C ] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01037cbb, "[ASM] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01057cbb, "[C++] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x00ff7cbb, "[RES] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01027cbb, "[LNK] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01007cbb, "[EXP] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01017cbb, "[IMP] VS2022 v17.4.0 pre 4.0 build 31931" },
	{ 0x01067cbb, "[CIL] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x01077cbb, "[CI+] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x01087cbb, "[LTC] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x01097cbb, "[LT+] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x010a7cbb, "[LTM] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x010b7cbb, "[PGO] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x010c7cbb, "[PG+] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x010d7cbb, "[POC] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },
	{ 0x010e7cbb, "[PO+] VS2022 v17.4.0 pre 4.0 build 31931 (*)" },

	// MSVS2022 v17.4.0-pre.3.0
	{ 0x01047cb1, "[ C ] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01037cb1, "[ASM] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01057cb1, "[C++] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x00ff7cb1, "[RES] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01027cb1, "[LNK] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01007cb1, "[EXP] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01017cb1, "[IMP] VS2022 v17.4.0 pre 3.0 build 31921" },
	{ 0x01067cb1, "[CIL] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x01077cb1, "[CI+] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x01087cb1, "[LTC] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x01097cb1, "[LT+] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x010a7cb1, "[LTM] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x010b7cb1, "[PGO] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x010c7cb1, "[PG+] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x010d7cb1, "[POC] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },
	{ 0x010e7cb1, "[PO+] VS2022 v17.4.0 pre 3.0 build 31921 (*)" },

	// MSVS2022 v17.4.0-pre.2.0
	{ 0x01047c4f, "[ C ] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01037c4f, "[ASM] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01057c4f, "[C++] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x00ff7c4f, "[RES] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01027c4f, "[LNK] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01007c4f, "[EXP] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01017c4f, "[IMP] VS2022 v17.4.0 pre 2.0 build 31823" },
	{ 0x01067c4f, "[CIL] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x01077c4f, "[CI+] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x01087c4f, "[LTC] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x01097c4f, "[LT+] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x010a7c4f, "[LTM] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x010b7c4f, "[PGO] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x010c7c4f, "[PG+] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x010d7c4f, "[POC] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },
	{ 0x010e7c4f, "[PO+] VS2022 v17.4.0 pre 2.0 build 31823 (*)" },

	// MSVS2022 v17.4.0-pre.1.0
	{ 0x01047be9, "[ C ] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01037be9, "[ASM] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01057be9, "[C++] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x00ff7be9, "[RES] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01027be9, "[LNK] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01007be9, "[EXP] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01017be9, "[IMP] VS2022 v17.4.0 pre 1.0 build 31721" },
	{ 0x01067be9, "[CIL] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x01077be9, "[CI+] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x01087be9, "[LTC] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x01097be9, "[LT+] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x010a7be9, "[LTM] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x010b7be9, "[PGO] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x010c7be9, "[PG+] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x010d7be9, "[POC] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },
	{ 0x010e7be9, "[PO+] VS2022 v17.4.0 pre 1.0 build 31721 (*)" },

	// MSVS2022 v17.3.0 (also 17.3.0 pre 5.0)
	{ 0x01047b8d, "[ C ] VS2022 v17.3.0 build 31629" },
	{ 0x01037b8d, "[ASM] VS2022 v17.3.0 build 31629" },
	{ 0x01057b8d, "[C++] VS2022 v17.3.0 build 31629" },
	{ 0x00ff7b8d, "[RES] VS2022 v17.3.0 build 31629" },
	{ 0x01027b8d, "[LNK] VS2022 v17.3.0 build 31629" },
	{ 0x01007b8d, "[EXP] VS2022 v17.3.0 build 31629" },
	{ 0x01017b8d, "[IMP] VS2022 v17.3.0 build 31629" },
	{ 0x01067b8d, "[CIL] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x01077b8d, "[CI+] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x01087b8d, "[LTC] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x01097b8d, "[LT+] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x010a7b8d, "[LTM] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x010b7b8d, "[PGO] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x010c7b8d, "[PG+] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x010d7b8d, "[POC] VS2022 v17.3.0 build 31629 (*)" },
	{ 0x010e7b8d, "[PO+] VS2022 v17.3.0 build 31629 (*)" },

	// MSVS2022 v17.3.0-pre.4.0
	{ 0x01047b8c, "[ C ] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01037b8c, "[ASM] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01057b8c, "[C++] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x00ff7b8c, "[RES] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01027b8c, "[LNK] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01007b8c, "[EXP] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01017b8c, "[IMP] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01067b8c, "[CIL] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01077b8c, "[CI+] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01087b8c, "[LTC] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x01097b8c, "[LT+] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x010a7b8c, "[LTM] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x010b7b8c, "[PGO] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x010c7b8c, "[PG+] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x010d7b8c, "[POC] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },
	{ 0x010e7b8c, "[PO+] VS2022 v17.3.0 pre 4.0 build 31628 (*)" },

	// MSVS2022 v17.3.0-pre.3.0
	{ 0x01047b8b, "[ C ] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01037b8b, "[ASM] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01057b8b, "[C++] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x00ff7b8b, "[RES] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01027b8b, "[LNK] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01007b8b, "[EXP] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01017b8b, "[IMP] VS2022 v17.3.0 pre 3.0 build 31627" },
	{ 0x01067b8b, "[CIL] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x01077b8b, "[CI+] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x01087b8b, "[LTC] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x01097b8b, "[LT+] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x010a7b8b, "[LTM] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x010b7b8b, "[PGO] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x010c7b8b, "[PG+] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x010d7b8b, "[POC] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },
	{ 0x010e7b8b, "[PO+] VS2022 v17.3.0 pre 3.0 build 31627 (*)" },

	// MSVS2022 v17.3.0-pre.2.0
	{ 0x01047b1d, "[ C ] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01037b1d, "[ASM] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01057b1d, "[C++] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x00ff7b1d, "[RES] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01027b1d, "[LNK] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01007b1d, "[EXP] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01017b1d, "[IMP] VS2022 v17.3.0 pre 2.0 build 31517" },
	{ 0x01067b1d, "[CIL] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x01077b1d, "[CI+] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x01087b1d, "[LTC] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x01097b1d, "[LT+] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x010a7b1d, "[LTM] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x010b7b1d, "[PGO] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x010c7b1d, "[PG+] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x010d7b1d, "[POC] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },
	{ 0x010e7b1d, "[PO+] VS2022 v17.3.0 pre 2.0 build 31517 (*)" },

	// MSVS2022 v17.3.0-pre.1.0
	{ 0x01047ac0, "[ C ] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01037ac0, "[ASM] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01057ac0, "[C++] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x00ff7ac0, "[RES] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01027ac0, "[LNK] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01007ac0, "[EXP] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01017ac0, "[IMP] VS2022 v17.3.0 pre 1.0 build 31424" },
	{ 0x01067ac0, "[CIL] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x01077ac0, "[CI+] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x01087ac0, "[LTC] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x01097ac0, "[LT+] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x010a7ac0, "[LTM] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x010b7ac0, "[PGO] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x010c7ac0, "[PG+] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x010d7ac0, "[POC] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },
	{ 0x010e7ac0, "[PO+] VS2022 v17.3.0 pre 1.0 build 31424 (*)" },

	// MSVS2022 v17.2.0 (also v17.2.0-pre.5.0)
	{ 0x01047a60, "[ C ] VS2022 v17.2.0 build 31328" },
	{ 0x01037a60, "[ASM] VS2022 v17.2.0 build 31328" },
	{ 0x01057a60, "[C++] VS2022 v17.2.0 build 31328" },
	{ 0x00ff7a60, "[RES] VS2022 v17.2.0 build 31328" },
	{ 0x01027a60, "[LNK] VS2022 v17.2.0 build 31328" },
	{ 0x01007a60, "[EXP] VS2022 v17.2.0 build 31328" },
	{ 0x01017a60, "[IMP] VS2022 v17.2.0 build 31328" },
	{ 0x01067a60, "[CIL] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x01077a60, "[CI+] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x01087a60, "[LTC] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x01097a60, "[LT+] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x010a7a60, "[LTM] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x010b7a60, "[PGO] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x010c7a60, "[PG+] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x010d7a60, "[POC] VS2022 v17.2.0 build 31328 (*)" },
	{ 0x010e7a60, "[PO+] VS2022 v17.2.0 build 31328 (*)" },

	// MSVS2022 v17.2.0-pre.3.0
	{ 0x01047a5e, "[ C ] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01037a5e, "[ASM] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01057a5e, "[C++] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x00ff7a5e, "[RES] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01027a5e, "[LNK] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01007a5e, "[EXP] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01017a5e, "[IMP] VS2022 v17.2.0 pre 3.0 build 31326" },
	{ 0x01067a5e, "[CIL] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x01077a5e, "[CI+] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x01087a5e, "[LTC] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x01097a5e, "[LT+] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x010a7a5e, "[LTM] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x010b7a5e, "[PGO] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x010c7a5e, "[PG+] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x010d7a5e, "[POC] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },
	{ 0x010e7a5e, "[PO+] VS2022 v17.2.0 pre 3.0 build 31326 (*)" },

	// MSVS2022 v17.2.0-pre.2.1
	{ 0x01047a46, "[ C ] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01037a46, "[ASM] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01057a46, "[C++] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x00ff7a46, "[RES] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01027a46, "[LNK] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01007a46, "[EXP] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01017a46, "[IMP] VS2022 v17.2.0 pre 2.1 build 31302" },
	{ 0x01067a46, "[CIL] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x01077a46, "[CI+] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x01087a46, "[LTC] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x01097a46, "[LT+] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x010a7a46, "[LTM] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x010b7a46, "[PGO] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x010c7a46, "[PG+] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x010d7a46, "[POC] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },
	{ 0x010e7a46, "[PO+] VS2022 v17.2.0 pre 2.1 build 31302 (*)" },

	// MSVS2022 v17.2.0-pre.1.0
	{ 0x0104798a, "[ C ] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0103798a, "[ASM] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0105798a, "[C++] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x00ff798a, "[RES] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0102798a, "[LNK] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0100798a, "[EXP] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0101798a, "[IMP] VS2022 v17.2.0 pre 1.0 build 31114" },
	{ 0x0106798a, "[CIL] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x0107798a, "[CI+] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x0108798a, "[LTC] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x0109798a, "[LT+] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x010a798a, "[LTM] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x010b798a, "[PGO] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x010c798a, "[PG+] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x010d798a, "[POC] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },
	{ 0x010e798a, "[PO+] VS2022 v17.2.0 pre 1.0 build 31114 (*)" },

	// MSVS2022 v17.1.0-pre.5.0
	{ 0x01047980, "[ C ] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01037980, "[ASM] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01057980, "[C++] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x00ff7980, "[RES] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01027980, "[LNK] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01007980, "[EXP] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01017980, "[IMP] VS2022 v17.1.0 pre 5.0 build 31104" },
	{ 0x01067980, "[CIL] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x01077980, "[CI+] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x01087980, "[LTC] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x01097980, "[LT+] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x010a7980, "[LTM] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x010b7980, "[PGO] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x010c7980, "[PG+] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x010d7980, "[POC] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },
	{ 0x010e7980, "[PO+] VS2022 v17.1.0 pre 5.0 build 31104 (*)" },

	// MSVS2022 v17.1.0-pre.3.0
	{ 0x0104797f, "[ C ] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0103797f, "[ASM] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0105797f, "[C++] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x00ff797f, "[RES] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0102797f, "[LNK] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0100797f, "[EXP] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0101797f, "[IMP] VS2022 v17.1.0 pre 3.0 build 31103" },
	{ 0x0106797f, "[CIL] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x0107797f, "[CI+] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x0108797f, "[LTC] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x0109797f, "[LT+] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x010a797f, "[LTM] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x010b797f, "[PGO] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x010c797f, "[PG+] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x010d797f, "[POC] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },
	{ 0x010e797f, "[PO+] VS2022 v17.1.0 pre 3.0 build 31103 (*)" },

	// MSVS2022 v17.1.0-pre.2.0
	{ 0x010478c7, "[ C ] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010378c7, "[ASM] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010578c7, "[C++] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x00ff78c7, "[RES] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010278c7, "[LNK] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010078c7, "[EXP] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010178c7, "[IMP] VS2022 v17.1.0 pre 2.0 build 30919" },
	{ 0x010678c7, "[CIL] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010778c7, "[CI+] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010878c7, "[LTC] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010978c7, "[LT+] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010a78c7, "[LTM] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010b78c7, "[PGO] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010c78c7, "[PG+] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010d78c7, "[POC] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },
	{ 0x010e78c7, "[PO+] VS2022 v17.1.0 pre 2.0 build 30919 (*)" },

	// MSVS2022 v17.1.0-pre.1.0
	{ 0x01047862, "[ C ] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01037862, "[ASM] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01057862, "[C++] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x00ff7862, "[RES] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01027862, "[LNK] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01007862, "[EXP] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01017862, "[IMP] VS2022 v17.1.0 pre 1.0 build 30818" },
	{ 0x01067862, "[CIL] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x01077862, "[CI+] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x01087862, "[LTC] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x01097862, "[LT+] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x010a7862, "[LTM] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x010b7862, "[PGO] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x010c7862, "[PG+] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x010d7862, "[POC] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },
	{ 0x010e7862, "[PO+] VS2022 v17.1.0 pre 1.0 build 30818 (*)" },

	// MSVS2022 v17.0.0-pre.7.0
	{ 0x010477f1, "[ C ] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010377f1, "[ASM] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010577f1, "[C++] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x00ff77f1, "[RES] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010277f1, "[LNK] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010077f1, "[EXP] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010177f1, "[IMP] VS2022 v17.0.0 pre 7.0 build 30705" },
	{ 0x010677f1, "[CIL] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010777f1, "[CI+] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010877f1, "[LTC] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010977f1, "[LT+] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010a77f1, "[LTM] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010b77f1, "[PGO] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010c77f1, "[PG+] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010d77f1, "[POC] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },
	{ 0x010e77f1, "[PO+] VS2022 v17.0.0 pre 7.0 build 30705 (*)" },

	// MSVS2022 v17.0.0-pre.5.0
	{ 0x010477f0, "[ C ] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010377f0, "[ASM] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010577f0, "[C++] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x00ff77f0, "[RES] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010277f0, "[LNK] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010077f0, "[EXP] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010177f0, "[IMP] VS2022 v17.0.0 pre 5.0 build 30704" },
	{ 0x010677f0, "[CIL] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010777f0, "[CI+] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010877f0, "[LTC] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010977f0, "[LT+] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010a77f0, "[LTM] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010b77f0, "[PGO] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010c77f0, "[PG+] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010d77f0, "[POC] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },
	{ 0x010e77f0, "[PO+] VS2022 v17.0.0 pre 5.0 build 30704 (*)" },

	// MSVS2022 v17.0.0-pre.4.0
	{ 0x01047740, "[ C ] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01037740, "[ASM] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01057740, "[C++] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x00ff7740, "[RES] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01027740, "[LNK] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01007740, "[EXP] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01017740, "[IMP] VS2022 v17.0.0 pre 4.0 build 30528" },
	{ 0x01067740, "[CIL] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x01077740, "[CI+] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x01087740, "[LTC] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x01097740, "[LT+] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x010a7740, "[LTM] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x010b7740, "[PGO] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x010c7740, "[PG+] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x010d7740, "[POC] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },
	{ 0x010e7740, "[PO+] VS2022 v17.0.0 pre 4.0 build 30528 (*)" },

	// MSVS2022 v17.0.0-pre-3.1
	{ 0x010476d7, "[ C ] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010376d7, "[ASM] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010576d7, "[C++] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x00ff76d7, "[RES] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010276d7, "[LNK] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010076d7, "[EXP] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010176d7, "[IMP] VS2022 v17.0.0 pre 3.1 build 30423" },
	{ 0x010676d7, "[CIL] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010776d7, "[CI+] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010876d7, "[LTC] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010976d7, "[LT+] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010a76d7, "[LTM] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010b76d7, "[PGO] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010c76d7, "[PG+] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010d76d7, "[POC] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },
	{ 0x010e76d7, "[PO+] VS2022 v17.0.0 pre 3.1 build 30423 (*)" },

	// MSVS2022 v17.0.0-preview2
	{ 0x010476c1, "[ C ] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010376c1, "[ASM] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010576c1, "[C++] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x00ff76c1, "[RES] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010276c1, "[LNK] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010076c1, "[EXP] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010176c1, "[IMP] VS2022 v17.0.0 preview2 build 30401" },
	{ 0x010676c1, "[CIL] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010776c1, "[CI+] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010876c1, "[LTC] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010976c1, "[LT+] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010a76c1, "[LTM] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010b76c1, "[PGO] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010c76c1, "[PG+] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010d76c1, "[POC] VS2022 v17.0.0 preview2 build 30401 (*)" },
	{ 0x010e76c1, "[PO+] VS2022 v17.0.0 preview2 build 30401 (*)" },

	// MSVS2019 v16.11.45
	// MSVS2019 v16.11.46
	// MSVS2019 v16.11.47
	// MSVS2019 v16.11.48
	// MSVS2019 v16.11.49
	// MSVS2019 v16.11.50
	// MSVS2019 v16.11.51
	// MSVS2019 v16.11.52
	// MSVS2019 v16.11.53
	// MSVS2019 v16.11.54
	// MSVS2019 v16.11.55
	{ 0x010475cf, "[ C ] VS2019 v16.11.45 build 30159" },
	{ 0x010375cf, "[ASM] VS2019 v16.11.45 build 30159" },
	{ 0x010575cf, "[C++] VS2019 v16.11.45 build 30159" },
	{ 0x00ff75cf, "[RES] VS2019 v16.11.45 build 30159" },
	{ 0x010275cf, "[LNK] VS2019 v16.11.45 build 30159" },
	{ 0x010075cf, "[EXP] VS2019 v16.11.45 build 30159" },
	{ 0x010175cf, "[IMP] VS2019 v16.11.45 build 30159" },
	{ 0x010875cf, "[LTC] VS2019 v16.11.45 build 30159" },
	{ 0x010975cf, "[LT+] VS2019 v16.11.45 build 30159" },
	{ 0x010b75cf, "[PGO] VS2019 v16.11.45 build 30159" },
	{ 0x010c75cf, "[PG+] VS2019 v16.11.45 build 30159" },
	{ 0x010675cf, "[CIL] VS2019 v16.11.45 build 30159 (*)" },
	{ 0x010775cf, "[CI+] VS2019 v16.11.45 build 30159 (*)" },
	{ 0x010a75cf, "[LTM] VS2019 v16.11.45 build 30159 (*)" },
	{ 0x010d75cf, "[POC] VS2019 v16.11.45 build 30159 (*)" },
	{ 0x010e75cf, "[PO+] VS2019 v16.11.45 build 30159 (*)" },

	// MSVS2019 v16.11.43
	// MSVS2019 v16.11.44
	{ 0x010475ce, "[ C ] VS2019 v16.11.43 build 30158" },
	{ 0x010375ce, "[ASM] VS2019 v16.11.43 build 30158" },
	{ 0x010575ce, "[C++] VS2019 v16.11.43 build 30158" },
	{ 0x00ff75ce, "[RES] VS2019 v16.11.43 build 30158" },
	{ 0x010275ce, "[LNK] VS2019 v16.11.43 build 30158" },
	{ 0x010075ce, "[EXP] VS2019 v16.11.43 build 30158" },
	{ 0x010175ce, "[IMP] VS2019 v16.11.43 build 30158" },
	{ 0x010875ce, "[LTC] VS2019 v16.11.43 build 30158" },
	{ 0x010975ce, "[LT+] VS2019 v16.11.43 build 30158" },
	{ 0x010b75ce, "[PGO] VS2019 v16.11.43 build 30158" },
	{ 0x010c75ce, "[PG+] VS2019 v16.11.43 build 30158" },
	{ 0x010675ce, "[CIL] VS2019 v16.11.43 build 30158 (*)" },
	{ 0x010775ce, "[CI+] VS2019 v16.11.43 build 30158 (*)" },
	{ 0x010a75ce, "[LTM] VS2019 v16.11.43 build 30158 (*)" },
	{ 0x010d75ce, "[POC] VS2019 v16.11.43 build 30158 (*)" },
	{ 0x010e75ce, "[PO+] VS2019 v16.11.43 build 30158 (*)" },

	// MSVS2019 v16.11.42
	{ 0x010475cd, "[ C ] VS2019 v16.11.42 build 30157" },
	{ 0x010375cd, "[ASM] VS2019 v16.11.42 build 30157" },
	{ 0x010575cd, "[C++] VS2019 v16.11.42 build 30157" },
	{ 0x00ff75cd, "[RES] VS2019 v16.11.42 build 30157" },
	{ 0x010275cd, "[LNK] VS2019 v16.11.42 build 30157" },
	{ 0x010075cd, "[EXP] VS2019 v16.11.42 build 30157" },
	{ 0x010175cd, "[IMP] VS2019 v16.11.42 build 30157" },
	{ 0x010875cd, "[LTC] VS2019 v16.11.42 build 30157" },
	{ 0x010975cd, "[LT+] VS2019 v16.11.42 build 30157" },
	{ 0x010b75cd, "[PGO] VS2019 v16.11.42 build 30157" },
	{ 0x010c75cd, "[PG+] VS2019 v16.11.42 build 30157" },
	{ 0x010675cd, "[CIL] VS2019 v16.11.42 build 30157 (*)" },
	{ 0x010775cd, "[CI+] VS2019 v16.11.42 build 30157 (*)" },
	{ 0x010a75cd, "[LTM] VS2019 v16.11.42 build 30157 (*)" },
	{ 0x010d75cd, "[POC] VS2019 v16.11.42 build 30157 (*)" },
	{ 0x010e75cd, "[PO+] VS2019 v16.11.42 build 30157 (*)" },

	// MSVS2019 v16.11.41
	{ 0x010475cc, "[ C ] VS2019 v16.11.41 build 30156" },
	{ 0x010375cc, "[ASM] VS2019 v16.11.41 build 30156" },
	{ 0x010575cc, "[C++] VS2019 v16.11.41 build 30156" },
	{ 0x00ff75cc, "[RES] VS2019 v16.11.41 build 30156" },
	{ 0x010275cc, "[LNK] VS2019 v16.11.41 build 30156" },
	{ 0x010075cc, "[EXP] VS2019 v16.11.41 build 30156" },
	{ 0x010175cc, "[IMP] VS2019 v16.11.41 build 30156" },
	{ 0x010875cc, "[LTC] VS2019 v16.11.41 build 30156" },
	{ 0x010975cc, "[LT+] VS2019 v16.11.41 build 30156" },
	{ 0x010b75cc, "[PGO] VS2019 v16.11.41 build 30156" },
	{ 0x010c75cc, "[PG+] VS2019 v16.11.41 build 30156" },
	{ 0x010675cc, "[CIL] VS2019 v16.11.41 build 30156 (*)" },
	{ 0x010775cc, "[CI+] VS2019 v16.11.41 build 30156 (*)" },
	{ 0x010a75cc, "[LTM] VS2019 v16.11.41 build 30156 (*)" },
	{ 0x010d75cc, "[POC] VS2019 v16.11.41 build 30156 (*)" },
	{ 0x010e75cc, "[PO+] VS2019 v16.11.41 build 30156 (*)" },

	// MSVS2019 v16.11.34
	// MSVS2019 v16.11.35
	// MSVS2019 v16.11.36
	// MSVS2019 v16.11.37
	// MSVS2019 v16.11.38
	// MSVS2019 v16.11.39
	// MSVS2019 v16.11.40
	{ 0x010475ca, "[ C ] VS2019 v16.11.34 build 30154" },
	{ 0x010375ca, "[ASM] VS2019 v16.11.34 build 30154" },
	{ 0x010575ca, "[C++] VS2019 v16.11.34 build 30154" },
	{ 0x00ff75ca, "[RES] VS2019 v16.11.34 build 30154" },
	{ 0x010275ca, "[LNK] VS2019 v16.11.34 build 30154" },
	{ 0x010075ca, "[EXP] VS2019 v16.11.34 build 30154" },
	{ 0x010175ca, "[IMP] VS2019 v16.11.34 build 30154" },
	{ 0x010875ca, "[LTC] VS2019 v16.11.34 build 30154" },
	{ 0x010975ca, "[LT+] VS2019 v16.11.34 build 30154" },
	{ 0x010b75ca, "[PGO] VS2019 v16.11.34 build 30154" },
	{ 0x010c75ca, "[PG+] VS2019 v16.11.34 build 30154" },
	{ 0x010675ca, "[CIL] VS2019 v16.11.34 build 30154 (*)" },
	{ 0x010775ca, "[CI+] VS2019 v16.11.34 build 30154 (*)" },
	{ 0x010a75ca, "[LTM] VS2019 v16.11.34 build 30154 (*)" },
	{ 0x010d75ca, "[POC] VS2019 v16.11.34 build 30154 (*)" },
	{ 0x010e75ca, "[PO+] VS2019 v16.11.34 build 30154 (*)" },

	// MSVS2019 v16.11.32
	// MSVS2019 v16.11.33
	{ 0x010475c9, "[ C ] VS2019 v16.11.32 build 30153" },
	{ 0x010375c9, "[ASM] VS2019 v16.11.32 build 30153" },
	{ 0x010575c9, "[C++] VS2019 v16.11.32 build 30153" },
	{ 0x00ff75c9, "[RES] VS2019 v16.11.32 build 30153" },
	{ 0x010275c9, "[LNK] VS2019 v16.11.32 build 30153" },
	{ 0x010075c9, "[EXP] VS2019 v16.11.32 build 30153" },
	{ 0x010175c9, "[IMP] VS2019 v16.11.32 build 30153" },
	{ 0x010875c9, "[LTC] VS2019 v16.11.32 build 30153" },
	{ 0x010975c9, "[LT+] VS2019 v16.11.32 build 30153" },
	{ 0x010b75c9, "[PGO] VS2019 v16.11.32 build 30153" },
	{ 0x010c75c9, "[PG+] VS2019 v16.11.32 build 30153" },
	{ 0x010675c9, "[CIL] VS2019 v16.11.32 build 30153 (*)" },
	{ 0x010775c9, "[CI+] VS2019 v16.11.32 build 30153 (*)" },
	{ 0x010a75c9, "[LTM] VS2019 v16.11.32 build 30153 (*)" },
	{ 0x010d75c9, "[POC] VS2019 v16.11.32 build 30153 (*)" },
	{ 0x010e75c9, "[PO+] VS2019 v16.11.32 build 30153 (*)" },

	// MSVS2019 v16.11.30
	// MSVS2019 v16.11.31
	{ 0x010475c8, "[ C ] VS2019 v16.11.30 build 30152" },
	{ 0x010375c8, "[ASM] VS2019 v16.11.30 build 30152" },
	{ 0x010575c8, "[C++] VS2019 v16.11.30 build 30152" },
	{ 0x00ff75c8, "[RES] VS2019 v16.11.30 build 30152" },
	{ 0x010275c8, "[LNK] VS2019 v16.11.30 build 30152" },
	{ 0x010075c8, "[EXP] VS2019 v16.11.30 build 30152" },
	{ 0x010175c8, "[IMP] VS2019 v16.11.30 build 30152" },
	{ 0x010875c8, "[LTC] VS2019 v16.11.30 build 30152" },
	{ 0x010975c8, "[LT+] VS2019 v16.11.30 build 30152" },
	{ 0x010b75c8, "[PGO] VS2019 v16.11.30 build 30152" },
	{ 0x010c75c8, "[PG+] VS2019 v16.11.30 build 30152" },
	{ 0x010675c8, "[CIL] VS2019 v16.11.30 build 30152 (*)" },
	{ 0x010775c8, "[CI+] VS2019 v16.11.30 build 30152 (*)" },
	{ 0x010a75c8, "[LTM] VS2019 v16.11.30 build 30152 (*)" },
	{ 0x010d75c8, "[POC] VS2019 v16.11.30 build 30152 (*)" },
	{ 0x010e75c8, "[PO+] VS2019 v16.11.30 build 30152 (*)" },

	// MSVS2019 v16.11.27
	// MSVS2019 v16.11.28
	// MSVS2019 v16.11.29
	{ 0x010475c7, "[ C ] VS2019 v16.11.27 build 30151" },
	{ 0x010375c7, "[ASM] VS2019 v16.11.27 build 30151" },
	{ 0x010575c7, "[C++] VS2019 v16.11.27 build 30151" },
	{ 0x00ff75c7, "[RES] VS2019 v16.11.27 build 30151" },
	{ 0x010275c7, "[LNK] VS2019 v16.11.27 build 30151" },
	{ 0x010075c7, "[EXP] VS2019 v16.11.27 build 30151" },
	{ 0x010175c7, "[IMP] VS2019 v16.11.27 build 30151" },
	{ 0x010875c7, "[LTC] VS2019 v16.11.27 build 30151" },
	{ 0x010975c7, "[LT+] VS2019 v16.11.27 build 30151" },
	{ 0x010b75c7, "[PGO] VS2019 v16.11.27 build 30151" },
	{ 0x010c75c7, "[PG+] VS2019 v16.11.27 build 30151" },
	{ 0x010675c7, "[CIL] VS2019 v16.11.27 build 30151 (*)" },
	{ 0x010775c7, "[CI+] VS2019 v16.11.27 build 30151 (*)" },
	{ 0x010a75c7, "[LTM] VS2019 v16.11.27 build 30151 (*)" },
	{ 0x010d75c7, "[POC] VS2019 v16.11.27 build 30151 (*)" },
	{ 0x010e75c7, "[PO+] VS2019 v16.11.27 build 30151 (*)" },

	// MSVS2019 v16.11.24
	// MSVS2019 v16.11.25
	// MSVS2019 v16.11.26
	{ 0x010475c4, "[ C ] VS2019 v16.11.24 build 30148" },
	{ 0x010375c4, "[ASM] VS2019 v16.11.24 build 30148" },
	{ 0x010575c4, "[C++] VS2019 v16.11.24 build 30148" },
	{ 0x00ff75c4, "[RES] VS2019 v16.11.24 build 30148" },
	{ 0x010275c4, "[LNK] VS2019 v16.11.24 build 30148" },
	{ 0x010075c4, "[EXP] VS2019 v16.11.24 build 30148" },
	{ 0x010175c4, "[IMP] VS2019 v16.11.24 build 30148" },
	{ 0x010875c4, "[LTC] VS2019 v16.11.24 build 30148" },
	{ 0x010975c4, "[LT+] VS2019 v16.11.24 build 30148" },
	{ 0x010b75c4, "[PGO] VS2019 v16.11.24 build 30148" },
	{ 0x010c75c4, "[PG+] VS2019 v16.11.24 build 30148" },
	{ 0x010675c4, "[CIL] VS2019 v16.11.24 build 30148 (*)" },
	{ 0x010775c4, "[CI+] VS2019 v16.11.24 build 30148 (*)" },
	{ 0x010a75c4, "[LTM] VS2019 v16.11.24 build 30148 (*)" },
	{ 0x010d75c4, "[POC] VS2019 v16.11.24 build 30148 (*)" },
	{ 0x010e75c4, "[PO+] VS2019 v16.11.24 build 30148 (*)" },

	// MSVS2019 v16.11.21
	{ 0x010475c3, "[ C ] VS2019 v16.11.21 build 30147" },
	{ 0x010375c3, "[ASM] VS2019 v16.11.21 build 30147" },
	{ 0x010575c3, "[C++] VS2019 v16.11.21 build 30147" },
	{ 0x00ff75c3, "[RES] VS2019 v16.11.21 build 30147" },
	{ 0x010275c3, "[LNK] VS2019 v16.11.21 build 30147" },
	{ 0x010075c3, "[EXP] VS2019 v16.11.21 build 30147" },
	{ 0x010175c3, "[IMP] VS2019 v16.11.21 build 30147" },
	{ 0x010675c3, "[CIL] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010775c3, "[CI+] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010875c3, "[LTC] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010975c3, "[LT+] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010a75c3, "[LTM] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010b75c3, "[PGO] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010c75c3, "[PG+] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010d75c3, "[POC] VS2019 v16.11.21 build 30147 (*)" },
	{ 0x010e75c3, "[PO+] VS2019 v16.11.21 build 30147 (*)" },

	// MSVS2019 v16.11.17
	{ 0x010475c2, "[ C ] VS2019 v16.11.17 build 30146" },
	{ 0x010375c2, "[ASM] VS2019 v16.11.17 build 30146" },
	{ 0x010575c2, "[C++] VS2019 v16.11.17 build 30146" },
	{ 0x00ff75c2, "[RES] VS2019 v16.11.17 build 30146" },
	{ 0x010275c2, "[LNK] VS2019 v16.11.17 build 30146" },
	{ 0x010075c2, "[EXP] VS2019 v16.11.17 build 30146" },
	{ 0x010175c2, "[IMP] VS2019 v16.11.17 build 30146" },
	{ 0x010675c2, "[CIL] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010775c2, "[CI+] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010875c2, "[LTC] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010975c2, "[LT+] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010a75c2, "[LTM] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010b75c2, "[PGO] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010c75c2, "[PG+] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010d75c2, "[POC] VS2019 v16.11.17 build 30146 (*)" },
	{ 0x010e75c2, "[PO+] VS2019 v16.11.17 build 30146 (*)" },

	// MSVS2019 v16.11.15
	{ 0x010475c1, "[ C ] VS2019 v16.11.15 build 30145" },
	{ 0x010375c1, "[ASM] VS2019 v16.11.15 build 30145" },
	{ 0x010575c1, "[C++] VS2019 v16.11.15 build 30145" },
	{ 0x00ff75c1, "[RES] VS2019 v16.11.15 build 30145" },
	{ 0x010275c1, "[LNK] VS2019 v16.11.15 build 30145" },
	{ 0x010075c1, "[EXP] VS2019 v16.11.15 build 30145" },
	{ 0x010175c1, "[IMP] VS2019 v16.11.15 build 30145" },
	{ 0x010675c1, "[CIL] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010775c1, "[CI+] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010875c1, "[LTC] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010975c1, "[LT+] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010a75c1, "[LTM] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010b75c1, "[PGO] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010c75c1, "[PG+] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010d75c1, "[POC] VS2019 v16.11.15 build 30145 (*)" },
	{ 0x010e75c1, "[PO+] VS2019 v16.11.15 build 30145 (*)" },

	// MSVS2019 v16.11.14
	// from https://walbourn.github.io/vs-2019-update-11/
	{ 0x010475c0, "[ C ] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010375c0, "[ASM] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010575c0, "[C++] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x00ff75c0, "[RES] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010275c0, "[LNK] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010075c0, "[EXP] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010175c0, "[IMP] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010675c0, "[CIL] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010775c0, "[CI+] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010875c0, "[LTC] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010975c0, "[LT+] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010a75c0, "[LTM] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010b75c0, "[PGO] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010c75c0, "[PG+] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010d75c0, "[POC] VS2019 v16.11.14 build 30144 (*)" },
	{ 0x010e75c0, "[PO+] VS2019 v16.11.14 build 30144 (*)" },

	// MSVS2019 v16.11.13
	{ 0x010475bf, "[ C ] VS2019 v16.11.13 build 30143" },
	{ 0x010375bf, "[ASM] VS2019 v16.11.13 build 30143" },
	{ 0x010575bf, "[C++] VS2019 v16.11.13 build 30143" },
	{ 0x00ff75bf, "[RES] VS2019 v16.11.13 build 30143" },
	{ 0x010275bf, "[LNK] VS2019 v16.11.13 build 30143" },
	{ 0x010075bf, "[EXP] VS2019 v16.11.13 build 30143" },
	{ 0x010175bf, "[IMP] VS2019 v16.11.13 build 30143" },
	{ 0x010675bf, "[CIL] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010775bf, "[CI+] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010875bf, "[LTC] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010975bf, "[LT+] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010a75bf, "[LTM] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010b75bf, "[PGO] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010c75bf, "[PG+] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010d75bf, "[POC] VS2019 v16.11.13 build 30143 (*)" },
	{ 0x010e75bf, "[PO+] VS2019 v16.11.13 build 30143 (*)" },

	// MSVS2019 v16.11.12
	// from https://walbourn.github.io/vs-2019-update-11/
	{ 0x010475be, "[ C ] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010375be, "[ASM] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010575be, "[C++] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x00ff75be, "[RES] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010275be, "[LNK] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010075be, "[EXP] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010175be, "[IMP] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010675be, "[CIL] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010775be, "[CI+] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010875be, "[LTC] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010975be, "[LT+] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010a75be, "[LTM] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010b75be, "[PGO] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010c75be, "[PG+] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010d75be, "[POC] VS2019 v16.11.12 build 30142 (*)" },
	{ 0x010e75be, "[PO+] VS2019 v16.11.12 build 30142 (*)" },

	// MSVS2019 v16.11.11
	// from https://walbourn.github.io/vs-2019-update-11/
	{ 0x010475bd, "[ C ] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010375bd, "[ASM] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010575bd, "[C++] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x00ff75bd, "[RES] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010275bd, "[LNK] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010075bd, "[EXP] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010175bd, "[IMP] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010675bd, "[CIL] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010775bd, "[CI+] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010875bd, "[LTC] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010975bd, "[LT+] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010a75bd, "[LTM] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010b75bd, "[PGO] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010c75bd, "[PG+] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010d75bd, "[POC] VS2019 v16.11.11 build 30141 (*)" },
	{ 0x010e75bd, "[PO+] VS2019 v16.11.11 build 30141 (*)" },

	// MSVS2019 v16.11.10
	{ 0x010475bc, "[ C ] VS2019 v16.11.10 build 30140" },
	{ 0x010375bc, "[ASM] VS2019 v16.11.10 build 30140" },
	{ 0x010575bc, "[C++] VS2019 v16.11.10 build 30140" },
	{ 0x00ff75bc, "[RES] VS2019 v16.11.10 build 30140" },
	{ 0x010275bc, "[LNK] VS2019 v16.11.10 build 30140" },
	{ 0x010075bc, "[EXP] VS2019 v16.11.10 build 30140" },
	{ 0x010175bc, "[IMP] VS2019 v16.11.10 build 30140" },
	{ 0x010675bc, "[CIL] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010775bc, "[CI+] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010875bc, "[LTC] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010975bc, "[LT+] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010a75bc, "[LTM] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010b75bc, "[PGO] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010c75bc, "[PG+] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010d75bc, "[POC] VS2019 v16.11.10 build 30140 (*)" },
	{ 0x010e75bc, "[PO+] VS2019 v16.11.10 build 30140 (*)" },

	// MSVS2019 v16.11.9
	{ 0x010475bb, "[ C ] VS2019 v16.11.9 build 30139" },
	{ 0x010375bb, "[ASM] VS2019 v16.11.9 build 30139" },
	{ 0x010575bb, "[C++] VS2019 v16.11.9 build 30139" },
	{ 0x00ff75bb, "[RES] VS2019 v16.11.9 build 30139" },
	{ 0x010275bb, "[LNK] VS2019 v16.11.9 build 30139" },
	{ 0x010075bb, "[EXP] VS2019 v16.11.9 build 30139" },
	{ 0x010175bb, "[IMP] VS2019 v16.11.9 build 30139" },
	{ 0x010675bb, "[CIL] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010775bb, "[CI+] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010875bb, "[LTC] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010975bb, "[LT+] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010a75bb, "[LTM] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010b75bb, "[PGO] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010c75bb, "[PG+] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010d75bb, "[POC] VS2019 v16.11.9 build 30139 (*)" },
	{ 0x010e75bb, "[PO+] VS2019 v16.11.9 build 30139 (*)" },

	// MSVS2019 v16.11.8
	{ 0x010475ba, "[ C ] VS2019 v16.11.8 build 30138" },
	{ 0x010375ba, "[ASM] VS2019 v16.11.8 build 30138" },
	{ 0x010575ba, "[C++] VS2019 v16.11.8 build 30138" },
	{ 0x00ff75ba, "[RES] VS2019 v16.11.8 build 30138" },
	{ 0x010275ba, "[LNK] VS2019 v16.11.8 build 30138" },
	{ 0x010075ba, "[EXP] VS2019 v16.11.8 build 30138" },
	{ 0x010175ba, "[IMP] VS2019 v16.11.8 build 30138" },
	{ 0x010675ba, "[CIL] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010775ba, "[CI+] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010875ba, "[LTC] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010975ba, "[LT+] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010a75ba, "[LTM] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010b75ba, "[PGO] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010c75ba, "[PG+] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010d75ba, "[POC] VS2019 v16.11.8 build 30138 (*)" },
	{ 0x010e75ba, "[PO+] VS2019 v16.11.8 build 30138 (*)" },

	// MSVS2019 v16.11.6
	{ 0x010475b9, "[ C ] VS2019 v16.11.6 build 30137" },
	{ 0x010375b9, "[ASM] VS2019 v16.11.6 build 30137" },
	{ 0x010575b9, "[C++] VS2019 v16.11.6 build 30137" },
	{ 0x00ff75b9, "[RES] VS2019 v16.11.6 build 30137" },
	{ 0x010275b9, "[LNK] VS2019 v16.11.6 build 30137" },
	{ 0x010075b9, "[EXP] VS2019 v16.11.6 build 30137" },
	{ 0x010175b9, "[IMP] VS2019 v16.11.6 build 30137" },
	{ 0x010675b9, "[CIL] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010775b9, "[CI+] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010875b9, "[LTC] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010975b9, "[LT+] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010a75b9, "[LTM] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010b75b9, "[PGO] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010c75b9, "[PG+] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010d75b9, "[POC] VS2019 v16.11.6 build 30137 (*)" },
	{ 0x010e75b9, "[PO+] VS2019 v16.11.6 build 30137 (*)" },

	// MSVS2019 v16.11.5
	{ 0x010475b8, "[ C ] VS2019 v16.11.5 build 30136" },
	{ 0x010375b8, "[ASM] VS2019 v16.11.5 build 30136" },
	{ 0x010575b8, "[C++] VS2019 v16.11.5 build 30136" },
	{ 0x00ff75b8, "[RES] VS2019 v16.11.5 build 30136" },
	{ 0x010275b8, "[LNK] VS2019 v16.11.5 build 30136" },
	{ 0x010075b8, "[EXP] VS2019 v16.11.5 build 30136" },
	{ 0x010175b8, "[IMP] VS2019 v16.11.5 build 30136" },
	{ 0x010675b8, "[CIL] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010775b8, "[CI+] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010875b8, "[LTC] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010975b8, "[LT+] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010a75b8, "[LTM] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010b75b8, "[PGO] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010c75b8, "[PG+] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010d75b8, "[POC] VS2019 v16.11.5 build 30136 (*)" },
	{ 0x010e75b8, "[PO+] VS2019 v16.11.5 build 30136 (*)" },

	// MSVS2019 v16.11.1
	{ 0x010475b5, "[ C ] VS2019 v16.11.1 build 30133" },
	{ 0x010375b5, "[ASM] VS2019 v16.11.1 build 30133" },
	{ 0x010575b5, "[C++] VS2019 v16.11.1 build 30133" },
	{ 0x00ff75b5, "[RES] VS2019 v16.11.1 build 30133" },
	{ 0x010275b5, "[LNK] VS2019 v16.11.1 build 30133" },
	{ 0x010075b5, "[EXP] VS2019 v16.11.1 build 30133" },
	{ 0x010175b5, "[IMP] VS2019 v16.11.1 build 30133" },
	{ 0x010675b5, "[CIL] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010775b5, "[CI+] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010875b5, "[LTC] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010975b5, "[LT+] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010a75b5, "[LTM] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010b75b5, "[PGO] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010c75b5, "[PG+] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010d75b5, "[POC] VS2019 v16.11.1 build 30133 (*)" },
	{ 0x010e75b5, "[PO+] VS2019 v16.11.1 build 30133 (*)" },

	// MSVS2019 v16.10.4
	{ 0x01047558, "[ C ] VS2019 v16.10.4 build 30040" },
	{ 0x01037558, "[ASM] VS2019 v16.10.4 build 30040" },
	{ 0x01057558, "[C++] VS2019 v16.10.4 build 30040" },
	{ 0x00ff7558, "[RES] VS2019 v16.10.4 build 30040" },
	{ 0x01027558, "[LNK] VS2019 v16.10.4 build 30040" },
	{ 0x01007558, "[EXP] VS2019 v16.10.4 build 30040" },
	{ 0x01017558, "[IMP] VS2019 v16.10.4 build 30040" },
	{ 0x01067558, "[CIL] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x01077558, "[CI+] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x01087558, "[LTC] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x01097558, "[LT+] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x010a7558, "[LTM] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x010b7558, "[PGO] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x010c7558, "[PG+] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x010d7558, "[POC] VS2019 v16.10.4 build 30040 (*)" },
	{ 0x010e7558, "[PO+] VS2019 v16.10.4 build 30040 (*)" },

	// MSVS2019 v16.10.3
	{ 0x01047556, "[ C ] VS2019 v16.10.3 build 30038" },
	{ 0x01037556, "[ASM] VS2019 v16.10.3 build 30038" },
	{ 0x01057556, "[C++] VS2019 v16.10.3 build 30038" },
	{ 0x00ff7556, "[RES] VS2019 v16.10.3 build 30038" },
	{ 0x01027556, "[LNK] VS2019 v16.10.3 build 30038" },
	{ 0x01007556, "[EXP] VS2019 v16.10.3 build 30038" },
	{ 0x01017556, "[IMP] VS2019 v16.10.3 build 30038" },
	{ 0x01067556, "[CIL] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x01077556, "[CI+] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x01087556, "[LTC] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x01097556, "[LT+] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x010a7556, "[LTM] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x010b7556, "[PGO] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x010c7556, "[PG+] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x010d7556, "[POC] VS2019 v16.10.3 build 30038 (*)" },
	{ 0x010e7556, "[PO+] VS2019 v16.10.3 build 30038 (*)" },

	// MSVS2019 v16.10.0
	{ 0x01047555, "[ C ] VS2019 v16.10.0 build 30037" },
	{ 0x01037555, "[ASM] VS2019 v16.10.0 build 30037" },
	{ 0x01057555, "[C++] VS2019 v16.10.0 build 30037" },
	{ 0x00ff7555, "[RES] VS2019 v16.10.0 build 30037" },
	{ 0x01027555, "[LNK] VS2019 v16.10.0 build 30037" },
	{ 0x01007555, "[EXP] VS2019 v16.10.0 build 30037" },
	{ 0x01017555, "[IMP] VS2019 v16.10.0 build 30037" },
	{ 0x01067555, "[CIL] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x01077555, "[CI+] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x01087555, "[LTC] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x01097555, "[LT+] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x010a7555, "[LTM] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x010b7555, "[PGO] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x010c7555, "[PG+] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x010d7555, "[POC] VS2019 v16.10.0 build 30037 (*)" },
	{ 0x010e7555, "[PO+] VS2019 v16.10.0 build 30037 (*)" },

	// MSVS2019 v16.9.5
	{ 0x010474db, "[ C ] VS2019 v16.9.5 build 29915" },
	{ 0x010374db, "[ASM] VS2019 v16.9.5 build 29915" },
	{ 0x010574db, "[C++] VS2019 v16.9.5 build 29915" },
	{ 0x00ff74db, "[RES] VS2019 v16.9.5 build 29915" },
	{ 0x010274db, "[LNK] VS2019 v16.9.5 build 29915" },
	{ 0x010074db, "[EXP] VS2019 v16.9.5 build 29915" },
	{ 0x010174db, "[IMP] VS2019 v16.9.5 build 29915" },
	{ 0x010674db, "[CIL] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010774db, "[CI+] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010874db, "[LTC] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010974db, "[LT+] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010a74db, "[LTM] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010b74db, "[PGO] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010c74db, "[PG+] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010d74db, "[POC] VS2019 v16.9.5 build 29915 (*)" },
	{ 0x010e74db, "[PO+] VS2019 v16.9.5 build 29915 (*)" },

	// MSVS2019 v16.9.4
	{ 0x010474da, "[ C ] VS2019 v16.9.4 build 29914" },
	{ 0x010374da, "[ASM] VS2019 v16.9.4 build 29914" },
	{ 0x010574da, "[C++] VS2019 v16.9.4 build 29914" },
	{ 0x00ff74da, "[RES] VS2019 v16.9.4 build 29914" },
	{ 0x010274da, "[LNK] VS2019 v16.9.4 build 29914" },
	{ 0x010074da, "[EXP] VS2019 v16.9.4 build 29914" },
	{ 0x010174da, "[IMP] VS2019 v16.9.4 build 29914" },
	{ 0x010674da, "[CIL] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010774da, "[CI+] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010874da, "[LTC] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010974da, "[LT+] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010a74da, "[LTM] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010b74da, "[PGO] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010c74da, "[PG+] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010d74da, "[POC] VS2019 v16.9.4 build 29914 (*)" },
	{ 0x010e74da, "[PO+] VS2019 v16.9.4 build 29914 (*)" },

	// MSVS2019 v16.9.2
	{ 0x010474d9, "[ C ] VS2019 v16.9.2 build 29913" },
	{ 0x010374d9, "[ASM] VS2019 v16.9.2 build 29913" },
	{ 0x010574d9, "[C++] VS2019 v16.9.2 build 29913" },
	{ 0x00ff74d9, "[RES] VS2019 v16.9.2 build 29913" },
	{ 0x010274d9, "[LNK] VS2019 v16.9.2 build 29913" },
	{ 0x010074d9, "[EXP] VS2019 v16.9.2 build 29913" },
	{ 0x010174d9, "[IMP] VS2019 v16.9.2 build 29913" },
	{ 0x010674d9, "[CIL] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010774d9, "[CI+] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010874d9, "[LTC] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010974d9, "[LT+] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010a74d9, "[LTM] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010b74d9, "[PGO] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010c74d9, "[PG+] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010d74d9, "[POC] VS2019 v16.9.2 build 29913 (*)" },
	{ 0x010e74d9, "[PO+] VS2019 v16.9.2 build 29913 (*)" },

	// MSVS2019 v16.9.0
	// from https://walbourn.github.io/vs-2019-update-9/
	{ 0x010474d6, "[ C ] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010374d6, "[ASM] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010574d6, "[C++] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x00ff74d6, "[RES] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010274d6, "[LNK] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010074d6, "[EXP] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010174d6, "[IMP] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010674d6, "[CIL] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010774d6, "[CI+] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010874d6, "[LTC] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010974d6, "[LT+] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010a74d6, "[LTM] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010b74d6, "[PGO] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010c74d6, "[PG+] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010d74d6, "[POC] VS2019 v16.9.0 build 29910 (*)" },
	{ 0x010e74d6, "[PO+] VS2019 v16.9.0 build 29910 (*)" },

	// MSVS2019 v16.8.5
	{ 0x01047299, "[ C ] VS2019 v16.8.5 build 29337" },
	{ 0x01037299, "[ASM] VS2019 v16.8.5 build 29337" },
	{ 0x01057299, "[C++] VS2019 v16.8.5 build 29337" },
	{ 0x00ff7299, "[RES] VS2019 v16.8.5 build 29337" },
	{ 0x01027299, "[LNK] VS2019 v16.8.5 build 29337" },
	{ 0x01007299, "[EXP] VS2019 v16.8.5 build 29337" },
	{ 0x01017299, "[IMP] VS2019 v16.8.5 build 29337" },
	{ 0x01067299, "[CIL] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x01077299, "[CI+] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x01087299, "[LTC] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x01097299, "[LT+] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x010a7299, "[LTM] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x010b7299, "[PGO] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x010c7299, "[PG+] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x010d7299, "[POC] VS2019 v16.8.5 build 29337 (*)" },
	{ 0x010e7299, "[PO+] VS2019 v16.8.5 build 29337 (*)" },

	// MSVS2019 v16.8.4
	{ 0x01047298, "[ C ] VS2019 v16.8.4 build 29336" },
	{ 0x01037298, "[ASM] VS2019 v16.8.4 build 29336" },
	{ 0x01057298, "[C++] VS2019 v16.8.4 build 29336" },
	{ 0x00ff7298, "[RES] VS2019 v16.8.4 build 29336" },
	{ 0x01027298, "[LNK] VS2019 v16.8.4 build 29336" },
	{ 0x01007298, "[EXP] VS2019 v16.8.4 build 29336" },
	{ 0x01017298, "[IMP] VS2019 v16.8.4 build 29336" },
	{ 0x01067298, "[CIL] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x01077298, "[CI+] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x01087298, "[LTC] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x01097298, "[LT+] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x010a7298, "[LTM] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x010b7298, "[PGO] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x010c7298, "[PG+] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x010d7298, "[POC] VS2019 v16.8.4 build 29336 (*)" },
	{ 0x010e7298, "[PO+] VS2019 v16.8.4 build 29336 (*)" },

	// MSVS2019 v16.8.3
	{ 0x01047297, "[ C ] VS2019 v16.8.3 build 29335" },
	{ 0x01037297, "[ASM] VS2019 v16.8.3 build 29335" },
	{ 0x01057297, "[C++] VS2019 v16.8.3 build 29335" },
	{ 0x00ff7297, "[RES] VS2019 v16.8.3 build 29335" },
	{ 0x01027297, "[LNK] VS2019 v16.8.3 build 29335" },
	{ 0x01007297, "[EXP] VS2019 v16.8.3 build 29335" },
	{ 0x01017297, "[IMP] VS2019 v16.8.3 build 29335" },
	{ 0x01067297, "[CIL] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x01077297, "[CI+] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x01087297, "[LTC] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x01097297, "[LT+] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x010a7297, "[LTM] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x010b7297, "[PGO] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x010c7297, "[PG+] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x010d7297, "[POC] VS2019 v16.8.3 build 29335 (*)" },
	{ 0x010e7297, "[PO+] VS2019 v16.8.3 build 29335 (*)" },

	// MSVS2019 v16.8.2
	{ 0x01047296, "[ C ] VS2019 v16.8.2 build 29334" },
	{ 0x01037296, "[ASM] VS2019 v16.8.2 build 29334" },
	{ 0x01057296, "[C++] VS2019 v16.8.2 build 29334" },
	{ 0x00ff7296, "[RES] VS2019 v16.8.2 build 29334" },
	{ 0x01027296, "[LNK] VS2019 v16.8.2 build 29334" },
	{ 0x01007296, "[EXP] VS2019 v16.8.2 build 29334" },
	{ 0x01017296, "[IMP] VS2019 v16.8.2 build 29334" },
	{ 0x01067296, "[CIL] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x01077296, "[CI+] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x01087296, "[LTC] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x01097296, "[LT+] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x010a7296, "[LTM] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x010b7296, "[PGO] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x010c7296, "[PG+] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x010d7296, "[POC] VS2019 v16.8.2 build 29334 (*)" },
	{ 0x010e7296, "[PO+] VS2019 v16.8.2 build 29334 (*)" },

	// MSVS2019 v16.8.0
	// from https://walbourn.github.io/vs-2019-update-8/
	{ 0x01047295, "[ C ] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01037295, "[ASM] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01057295, "[C++] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x00ff7295, "[RES] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01027295, "[LNK] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01007295, "[EXP] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01017295, "[IMP] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01067295, "[CIL] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01077295, "[CI+] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01087295, "[LTC] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x01097295, "[LT+] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x010a7295, "[LTM] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x010b7295, "[PGO] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x010c7295, "[PG+] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x010d7295, "[POC] VS2019 v16.8.0 build 29333 (*)" },
	{ 0x010e7295, "[PO+] VS2019 v16.8.0 build 29333 (*)" },

	// MSVS2019 v16.7.5
	{ 0x010471b8, "[ C ] VS2019 v16.7.5 build 29112" },
	{ 0x010371b8, "[ASM] VS2019 v16.7.5 build 29112" },
	{ 0x010571b8, "[C++] VS2019 v16.7.5 build 29112" },
	{ 0x00ff71b8, "[RES] VS2019 v16.7.5 build 29112" },
	{ 0x010271b8, "[LNK] VS2019 v16.7.5 build 29112" },
	{ 0x010071b8, "[EXP] VS2019 v16.7.5 build 29112" },
	{ 0x010171b8, "[IMP] VS2019 v16.7.5 build 29112" },
	{ 0x010671b8, "[CIL] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010771b8, "[CI+] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010871b8, "[LTC] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010971b8, "[LT+] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010a71b8, "[LTM] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010b71b8, "[PGO] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010c71b8, "[PG+] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010d71b8, "[POC] VS2019 v16.7.5 build 29112 (*)" },
	{ 0x010e71b8, "[PO+] VS2019 v16.7.5 build 29112 (*)" },

	// MSVS2019 v16.7.1 .. 16.7.4
	{ 0x010471b7, "[ C ] VS2019 v16.7.1 build 29111" },
	{ 0x010371b7, "[ASM] VS2019 v16.7.1 build 29111" },
	{ 0x010571b7, "[C++] VS2019 v16.7.1 build 29111" },
	{ 0x00ff71b7, "[RES] VS2019 v16.7.1 build 29111" },
	{ 0x010271b7, "[LNK] VS2019 v16.7.1 build 29111" },
	{ 0x010071b7, "[EXP] VS2019 v16.7.1 build 29111" },
	{ 0x010171b7, "[IMP] VS2019 v16.7.1 build 29111" },
	{ 0x010671b7, "[CIL] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010771b7, "[CI+] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010871b7, "[LTC] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010971b7, "[LT+] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010a71b7, "[LTM] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010b71b7, "[PGO] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010c71b7, "[PG+] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010d71b7, "[POC] VS2019 v16.7.1 build 29111 (*)" },
	{ 0x010e71b7, "[PO+] VS2019 v16.7.1 build 29111 (*)" },

	// MSVS2019 v16.7.0
	{ 0x010471b6, "[ C ] VS2019 v16.7.0 build 29110" },
	{ 0x010371b6, "[ASM] VS2019 v16.7.0 build 29110" },
	{ 0x010571b6, "[C++] VS2019 v16.7.0 build 29110" },
	{ 0x00ff71b6, "[RES] VS2019 v16.7.0 build 29110" },
	{ 0x010271b6, "[LNK] VS2019 v16.7.0 build 29110" },
	{ 0x010071b6, "[EXP] VS2019 v16.7.0 build 29110" },
	{ 0x010171b6, "[IMP] VS2019 v16.7.0 build 29110" },
	{ 0x010671b6, "[CIL] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010771b6, "[CI+] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010871b6, "[LTC] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010971b6, "[LT+] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010a71b6, "[LTM] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010b71b6, "[PGO] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010c71b6, "[PG+] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010d71b6, "[POC] VS2019 v16.7.0 build 29110 (*)" },
	{ 0x010e71b6, "[PO+] VS2019 v16.7.0 build 29110 (*)" },

	// MSVS2019 v16.6.2 ... 16.6.5
	{ 0x01047086, "[ C ] VS2019 v16.6.2 build 28806" },
	{ 0x01037086, "[ASM] VS2019 v16.6.2 build 28806" },
	{ 0x01057086, "[C++] VS2019 v16.6.2 build 28806" },
	{ 0x00ff7086, "[RES] VS2019 v16.6.2 build 28806" },
	{ 0x01027086, "[LNK] VS2019 v16.6.2 build 28806" },
	{ 0x01007086, "[EXP] VS2019 v16.6.2 build 28806" },
	{ 0x01017086, "[IMP] VS2019 v16.6.2 build 28806" },
	{ 0x01067086, "[CIL] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x01077086, "[CI+] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x01087086, "[LTC] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x01097086, "[LT+] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x010a7086, "[LTM] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x010b7086, "[PGO] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x010c7086, "[PG+] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x010d7086, "[POC] VS2019 v16.6.2 build 28806 (*)" },
	{ 0x010e7086, "[PO+] VS2019 v16.6.2 build 28806 (*)" },

	// MSVS2019 v16.6.0
	{ 0x01047085, "[ C ] VS2019 v16.6.0 build 28805" },
	{ 0x01037085, "[ASM] VS2019 v16.6.0 build 28805" },
	{ 0x01057085, "[C++] VS2019 v16.6.0 build 28805" },
	{ 0x00ff7085, "[RES] VS2019 v16.6.0 build 28805" },
	{ 0x01027085, "[LNK] VS2019 v16.6.0 build 28805" },
	{ 0x01007085, "[EXP] VS2019 v16.6.0 build 28805" },
	{ 0x01017085, "[IMP] VS2019 v16.6.0 build 28805" },
	{ 0x01067085, "[CIL] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x01077085, "[CI+] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x01087085, "[LTC] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x01097085, "[LT+] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x010a7085, "[LTM] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x010b7085, "[PGO] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x010c7085, "[PG+] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x010d7085, "[POC] VS2019 v16.6.0 build 28805 (*)" },
	{ 0x010e7085, "[PO+] VS2019 v16.6.0 build 28805 (*)" },

	// MSVS2019 v16.5.5 (also 16.5.4)
	{ 0x01046fc6, "[ C ] VS2019 v16.5.5 build 28614" },
	{ 0x01036fc6, "[ASM] VS2019 v16.5.5 build 28614" },
	{ 0x01056fc6, "[C++] VS2019 v16.5.5 build 28614" },
	{ 0x00ff6fc6, "[RES] VS2019 v16.5.5 build 28614" },
	{ 0x01026fc6, "[LNK] VS2019 v16.5.5 build 28614" },
	{ 0x01006fc6, "[EXP] VS2019 v16.5.5 build 28614" },
	{ 0x01016fc6, "[IMP] VS2019 v16.5.5 build 28614" },
	{ 0x01066fc6, "[CIL] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x01076fc6, "[CI+] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x01086fc6, "[LTC] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x01096fc6, "[LT+] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x010a6fc6, "[LTM] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x010b6fc6, "[PGO] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x010c6fc6, "[PG+] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x010d6fc6, "[POC] VS2019 v16.5.5 build 28614 (*)" },
	{ 0x010e6fc6, "[PO+] VS2019 v16.5.5 build 28614 (*)" },

	// Visual Studio 2019 version 16.5.2 (values are interpolated)
	// source: https://walbourn.github.io/vs-2019-update-5/
	{ 0x01046fc4, "[ C ] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01036fc4, "[ASM] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01056fc4, "[C++] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x00ff6fc4, "[RES] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01026fc4, "[LNK] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01016fc4, "[IMP] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01006fc4, "[EXP] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01066fc4, "[CIL] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01076fc4, "[CI+] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01086fc4, "[LTC] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x01096fc4, "[LT+] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x010a6fc4, "[LTM] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x010b6fc4, "[PGO] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x010c6fc4, "[PG+] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x010d6fc4, "[POC] VS2019 v16.5.2 build 28612 (*)" },
	{ 0x010e6fc4, "[PO+] VS2019 v16.5.2 build 28612 (*)" },

	// Visual Studio 2019 version 16.5.1 (values are interpolated)
	{ 0x01046fc3, "[ C ] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01036fc3, "[ASM] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01056fc3, "[C++] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x00ff6fc3, "[RES] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01026fc3, "[LNK] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01016fc3, "[IMP] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01006fc3, "[EXP] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01066fc3, "[CIL] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01076fc3, "[CI+] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01086fc3, "[LTC] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x01096fc3, "[LT+] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x010a6fc3, "[LTM] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x010b6fc3, "[PGO] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x010c6fc3, "[PG+] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x010d6fc3, "[POC] VS2019 v16.5.1 build 28611 (*)" },
	{ 0x010e6fc3, "[PO+] VS2019 v16.5.1 build 28611 (*)" },

	// Visual Studio 2019 version 16.5.0 (values are interpolated)
	// source: https://walbourn.github.io/vs-2019-update-5/
	{ 0x01046fc2, "[ C ] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01036fc2, "[ASM] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01056fc2, "[C++] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x00ff6fc2, "[RES] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01026fc2, "[LNK] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01016fc2, "[IMP] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01006fc2, "[EXP] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01066fc2, "[CIL] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01076fc2, "[CI+] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01086fc2, "[LTC] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x01096fc2, "[LT+] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x010a6fc2, "[LTM] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x010b6fc2, "[PGO] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x010c6fc2, "[PG+] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x010d6fc2, "[POC] VS2019 v16.5.0 build 28610 (*)" },
	{ 0x010e6fc2, "[PO+] VS2019 v16.5.0 build 28610 (*)" },

	// MSVS2019 v16.4.6 (values are interpolated)
	// source: https://walbourn.github.io/vs-2019-update-4/
	{ 0x01046e9f, "[ C ] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01036e9f, "[ASM] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01056e9f, "[C++] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x00ff6e9f, "[RES] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01026e9f, "[LNK] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01006e9f, "[EXP] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01016e9f, "[IMP] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01066e9f, "[CIL] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01076e9f, "[CI+] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01086e9f, "[LTC] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x01096e9f, "[LT+] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x010a6e9f, "[LTM] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x010b6e9f, "[PGO] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x010c6e9f, "[PG+] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x010d6e9f, "[POC] VS2019 v16.4.6 build 28319 (*)" },
	{ 0x010e6e9f, "[PO+] VS2019 v16.4.6 build 28319 (*)" },

	// MSVS2019 v16.4.4 (values are interpolated)
	// source: https://walbourn.github.io/vs-2019-update-4/
	{ 0x01046e9c, "[ C ] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01036e9c, "[ASM] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01056e9c, "[C++] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x00ff6e9c, "[RES] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01026e9c, "[LNK] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01006e9c, "[EXP] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01016e9c, "[IMP] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01066e9c, "[CIL] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01076e9c, "[CI+] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01086e9c, "[LTC] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x01096e9c, "[LT+] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x010a6e9c, "[LTM] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x010b6e9c, "[PGO] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x010c6e9c, "[PG+] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x010d6e9c, "[POC] VS2019 v16.4.4 build 28316 (*)" },
	{ 0x010e6e9c, "[PO+] VS2019 v16.4.4 build 28316 (*)" },

	// MSVS2019 v16.4.3
	{ 0x01046e9b, "[ C ] VS2019 v16.4.3 build 28315" },
	{ 0x01036e9b, "[ASM] VS2019 v16.4.3 build 28315" },
	{ 0x01056e9b, "[C++] VS2019 v16.4.3 build 28315" },
	{ 0x00ff6e9b, "[RES] VS2019 v16.4.3 build 28315" },
	{ 0x01026e9b, "[LNK] VS2019 v16.4.3 build 28315" },
	{ 0x01006e9b, "[EXP] VS2019 v16.4.3 build 28315" },
	{ 0x01016e9b, "[IMP] VS2019 v16.4.3 build 28315" },
	{ 0x01066e9b, "[CIL] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x01076e9b, "[CI+] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x01086e9b, "[LTC] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x01096e9b, "[LT+] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x010a6e9b, "[LTM] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x010b6e9b, "[PGO] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x010c6e9b, "[PG+] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x010d6e9b, "[POC] VS2019 v16.4.3 build 28315 (*)" },
	{ 0x010e6e9b, "[PO+] VS2019 v16.4.3 build 28315 (*)" },

	// Visual Studio 2019 version 16.4.0 (values are interpolated)
	{ 0x01046e9a, "[ C ] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01036e9a, "[ASM] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01056e9a, "[C++] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x00ff6e9a, "[RES] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01026e9a, "[LNK] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01016e9a, "[IMP] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01006e9a, "[EXP] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01066e9a, "[CIL] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01076e9a, "[CI+] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01086e9a, "[LTC] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x01096e9a, "[LT+] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x010a6e9a, "[LTM] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x010b6e9a, "[PGO] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x010c6e9a, "[PG+] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x010d6e9a, "[POC] VS2019 v16.4.0 build 28314 (*)" },
	{ 0x010e6e9a, "[PO+] VS2019 v16.4.0 build 28314 (*)" },

	// Visual Studio 2019 version 16.3.2 (values are interpolated)
	{ 0x01046dc9, "[ C ] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01036dc9, "[ASM] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01056dc9, "[C++] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x00ff6dc9, "[RES] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01026dc9, "[LNK] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01016dc9, "[IMP] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01006dc9, "[EXP] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01066dc9, "[CIL] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01076dc9, "[CI+] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01086dc9, "[LTC] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x01096dc9, "[LT+] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x010a6dc9, "[LTM] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x010b6dc9, "[PGO] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x010c6dc9, "[PG+] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x010d6dc9, "[POC] VS2019 v16.3.2 build 28105 (*)" },
	{ 0x010e6dc9, "[PO+] VS2019 v16.3.2 build 28105 (*)" },

	// Visual Studio 2019 version 16.2.3 (values are interpolated)
	{ 0x01046d01, "[ C ] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01036d01, "[ASM] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01056d01, "[C++] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x00ff6d01, "[RES] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01026d01, "[LNK] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01016d01, "[IMP] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01006d01, "[EXP] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01066d01, "[CIL] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01076d01, "[CI+] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01086d01, "[LTC] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x01096d01, "[LT+] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x010a6d01, "[LTM] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x010b6d01, "[PGO] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x010c6d01, "[PG+] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x010d6d01, "[POC] VS2019 v16.2.3 build 27905 (*)" },
	{ 0x010e6d01, "[PO+] VS2019 v16.2.3 build 27905 (*)" },

	// Visual Studio 2019 version 16.1.2 (values are interpolated)
	{ 0x01046c36, "[ C ] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01036c36, "[ASM] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01056c36, "[C++] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x00ff6c36, "[RES] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01026c36, "[LNK] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01016c36, "[IMP] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01006c36, "[EXP] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01066c36, "[CIL] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01076c36, "[CI+] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01086c36, "[LTC] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x01096c36, "[LT+] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x010a6c36, "[LTM] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x010b6c36, "[PGO] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x010c6c36, "[PG+] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x010d6c36, "[POC] VS2019 v16.1.2 build 27702 (*)" },
	{ 0x010e6c36, "[PO+] VS2019 v16.1.2 build 27702 (*)" },

	// MSVS2019 v16.0.0
	{ 0x01046b74, "[ C ] VS2019 v16.0.0 build 27508" },
	{ 0x01036b74, "[ASM] VS2019 v16.0.0 build 27508" },
	{ 0x01056b74, "[C++] VS2019 v16.0.0 build 27508" },
	{ 0x00ff6b74, "[RES] VS2019 v16.0.0 build 27508" },
	{ 0x01026b74, "[LNK] VS2019 v16.0.0 build 27508" },
	{ 0x01006b74, "[EXP] VS2019 v16.0.0 build 27508" },
	{ 0x01016b74, "[IMP] VS2019 v16.0.0 build 27508" },
	{ 0x01066b74, "[CIL] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x01076b74, "[CI+] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x01086b74, "[LTC] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x01096b74, "[LT+] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x010a6b74, "[LTM] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x010b6b74, "[PGO] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x010c6b74, "[PG+] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x010d6b74, "[POC] VS2019 v16.0.0 build 27508 (*)" },
	{ 0x010e6b74, "[PO+] VS2019 v16.0.0 build 27508 (*)" },

	// Visual Studio 2017 version 15.9.11 (values are interpolated)
	{ 0x01046996, "[ C ] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01036996, "[ASM] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01056996, "[C++] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x00ff6996, "[RES] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01026996, "[LNK] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01016996, "[IMP] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01006996, "[EXP] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01066996, "[CIL] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01076996, "[CI+] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01086996, "[LTC] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x01096996, "[LT+] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x010a6996, "[LTM] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x010b6996, "[PGO] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x010c6996, "[PG+] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x010d6996, "[POC] VS2017 v15.9.11 build 27030 (*)" },
	{ 0x010e6996, "[PO+] VS2017 v15.9.11 build 27030 (*)" },

	// Visual Studio 2017 version 15.9.7 (values are interpolated)
	{ 0x01046993, "[ C ] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01036993, "[ASM] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01056993, "[C++] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x00ff6993, "[RES] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01026993, "[LNK] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01016993, "[IMP] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01006993, "[EXP] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01066993, "[CIL] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01076993, "[CI+] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01086993, "[LTC] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x01096993, "[LT+] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x010a6993, "[LTM] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x010b6993, "[PGO] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x010c6993, "[PG+] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x010d6993, "[POC] VS2017 v15.9.7 build 27027 (*)" },
	{ 0x010e6993, "[PO+] VS2017 v15.9.7 build 27027 (*)" },

	// Visual Studio 2017 version 15.9.5 (values are interpolated)
	{ 0x01046992, "[ C ] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01036992, "[ASM] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01056992, "[C++] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x00ff6992, "[RES] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01026992, "[LNK] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01016992, "[IMP] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01006992, "[EXP] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01066992, "[CIL] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01076992, "[CI+] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01086992, "[LTC] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x01096992, "[LT+] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x010a6992, "[LTM] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x010b6992, "[PGO] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x010c6992, "[PG+] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x010d6992, "[POC] VS2017 v15.9.5 build 27026 (*)" },
	{ 0x010e6992, "[PO+] VS2017 v15.9.5 build 27026 (*)" },

	// Visual Studio 2017 version 15.9.4 (values are interpolated)
	{ 0x01046991, "[ C ] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01036991, "[ASM] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01056991, "[C++] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x00ff6991, "[RES] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01026991, "[LNK] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01016991, "[IMP] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01006991, "[EXP] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01066991, "[CIL] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01076991, "[CI+] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01086991, "[LTC] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x01096991, "[LT+] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x010a6991, "[LTM] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x010b6991, "[PGO] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x010c6991, "[PG+] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x010d6991, "[POC] VS2017 v15.9.4 build 27025 (*)" },
	{ 0x010e6991, "[PO+] VS2017 v15.9.4 build 27025 (*)" },

	// Visual Studio 2017 version 15.9.1 (values are interpolated)
	{ 0x0104698f, "[ C ] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0103698f, "[ASM] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0105698f, "[C++] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x00ff698f, "[RES] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0102698f, "[LNK] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0101698f, "[IMP] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0100698f, "[EXP] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0106698f, "[CIL] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0107698f, "[CI+] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0108698f, "[LTC] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x0109698f, "[LT+] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x010a698f, "[LTM] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x010b698f, "[PGO] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x010c698f, "[PG+] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x010d698f, "[POC] VS2017 v15.9.1 build 27023 (*)" },
	{ 0x010e698f, "[PO+] VS2017 v15.9.1 build 27023 (*)" },

	// Visual Studio 2017 version 15.8.5 (values are interpolated)
	// source: https://walbourn.github.io/vs-2017-15-8-update/
	{ 0x0104686c, "[ C ] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0103686c, "[ASM] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0105686c, "[C++] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x00ff686c, "[RES] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0102686c, "[LNK] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0101686c, "[IMP] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0100686c, "[EXP] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0106686c, "[CIL] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0107686c, "[CI+] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0108686c, "[LTC] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x0109686c, "[LT+] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x010a686c, "[LTM] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x010b686c, "[PGO] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x010c686c, "[PG+] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x010d686c, "[POC] VS2017 v15.8.5 build 26732 (*)" },
	{ 0x010e686c, "[PO+] VS2017 v15.8.5 build 26732 (*)" },

	// Visual Studio 2017 version 15.8.9 (sic!) (values are interpolated)
	// source: https://walbourn.github.io/vs-2017-15-8-update/
	{ 0x0104686a, "[ C ] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0103686a, "[ASM] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0105686a, "[C++] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x00ff686a, "[RES] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0102686a, "[LNK] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0101686a, "[IMP] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0100686a, "[EXP] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0106686a, "[CIL] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0107686a, "[CI+] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0108686a, "[LTC] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x0109686a, "[LT+] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x010a686a, "[LTM] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x010b686a, "[PGO] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x010c686a, "[PG+] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x010d686a, "[POC] VS2017 v15.8.9? build 26730 (*)" },
	{ 0x010e686a, "[PO+] VS2017 v15.8.9? build 26730 (*)" },

	// Visual Studio 2017 version 15.8.4 (values are interpolated)
	// source: https://walbourn.github.io/vs-2017-15-8-update/
	{ 0x01046869, "[ C ] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01036869, "[ASM] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01056869, "[C++] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x00ff6869, "[RES] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01026869, "[LNK] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01016869, "[IMP] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01006869, "[EXP] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01066869, "[CIL] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01076869, "[CI+] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01086869, "[LTC] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x01096869, "[LT+] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x010a6869, "[LTM] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x010b6869, "[PGO] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x010c6869, "[PG+] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x010d6869, "[POC] VS2017 v15.8.4 build 26729 (*)" },
	{ 0x010e6869, "[PO+] VS2017 v15.8.4 build 26729 (*)" },

	// Visual Studio 2017 version 15.8.0 (values are interpolated)
	// source: https://walbourn.github.io/vs-2017-15-8-update/
	{ 0x01046866, "[ C ] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01036866, "[ASM] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01056866, "[C++] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x00ff6866, "[RES] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01026866, "[LNK] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01016866, "[IMP] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01006866, "[EXP] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01066866, "[CIL] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01076866, "[CI+] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01086866, "[LTC] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x01096866, "[LT+] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x010a6866, "[LTM] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x010b6866, "[PGO] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x010c6866, "[PG+] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x010d6866, "[POC] VS2017 v15.8.0 build 26726 (*)" },
	{ 0x010e6866, "[PO+] VS2017 v15.8.0 build 26726 (*)" },

	// Visual Studio 2017 version 15.7.5 (values are interpolated)
	{ 0x01046741, "[ C ] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01036741, "[ASM] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01056741, "[C++] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x00ff6741, "[RES] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01026741, "[LNK] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01016741, "[IMP] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01006741, "[EXP] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01066741, "[CIL] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01076741, "[CI+] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01086741, "[LTC] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x01096741, "[LT+] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x010a6741, "[LTM] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x010b6741, "[PGO] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x010c6741, "[PG+] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x010d6741, "[POC] VS2017 v15.7.5 build 26433 (*)" },
	{ 0x010e6741, "[PO+] VS2017 v15.7.5 build 26433 (*)" },

	// Visual Studio 2017 version 15.7.4 (values are interpolated)
	// source: https://walbourn.github.io/vs-2017-15-7-update/
	{ 0x0104673f, "[ C ] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0103673f, "[ASM] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0105673f, "[C++] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x00ff673f, "[RES] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0102673f, "[LNK] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0101673f, "[IMP] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0100673f, "[EXP] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0106673f, "[CIL] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0107673f, "[CI+] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0108673f, "[LTC] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x0109673f, "[LT+] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x010a673f, "[LTM] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x010b673f, "[PGO] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x010c673f, "[PG+] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x010d673f, "[POC] VS2017 v15.7.4 build 26431 (*)" },
	{ 0x010e673f, "[PO+] VS2017 v15.7.4 build 26431 (*)" },

	// Visual Studio 2017 version 15.7.3 (values are interpolated)
	{ 0x0104673e, "[ C ] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0103673e, "[ASM] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0105673e, "[C++] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x00ff673e, "[RES] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0102673e, "[LNK] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0101673e, "[IMP] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0100673e, "[EXP] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0106673e, "[CIL] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0107673e, "[CI+] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0108673e, "[LTC] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x0109673e, "[LT+] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x010a673e, "[LTM] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x010b673e, "[PGO] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x010c673e, "[PG+] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x010d673e, "[POC] VS2017 v15.7.3 build 26430 (*)" },
	{ 0x010e673e, "[PO+] VS2017 v15.7.3 build 26430 (*)" },

	// Visual Studio 2017 version 15.7.2 (values are interpolated)
	{ 0x0104673d, "[ C ] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0103673d, "[ASM] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0105673d, "[C++] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x00ff673d, "[RES] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0102673d, "[LNK] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0101673d, "[IMP] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0100673d, "[EXP] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0106673d, "[CIL] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0107673d, "[CI+] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0108673d, "[LTC] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x0109673d, "[LT+] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x010a673d, "[LTM] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x010b673d, "[PGO] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x010c673d, "[PG+] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x010d673d, "[POC] VS2017 v15.7.2 build 26429 (*)" },
	{ 0x010e673d, "[PO+] VS2017 v15.7.2 build 26429 (*)" },

	// Visual Studio 2017 version 15.7.1 (values are interpolated)
	{ 0x0104673c, "[ C ] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0103673c, "[ASM] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0105673c, "[C++] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x00ff673c, "[RES] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0102673c, "[LNK] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0101673c, "[IMP] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0100673c, "[EXP] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0106673c, "[CIL] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0107673c, "[CI+] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0108673c, "[LTC] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x0109673c, "[LT+] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x010a673c, "[LTM] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x010b673c, "[PGO] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x010c673c, "[PG+] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x010d673c, "[POC] VS2017 v15.7.1 build 26428 (*)" },
	{ 0x010e673c, "[PO+] VS2017 v15.7.1 build 26428 (*)" },

	// Visual Studio 2017 version 15.6.7 (values are interpolated)
	{ 0x01046614, "[ C ] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01036614, "[ASM] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01056614, "[C++] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x00ff6614, "[RES] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01026614, "[LNK] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01016614, "[IMP] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01006614, "[EXP] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01066614, "[CIL] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01076614, "[CI+] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01086614, "[LTC] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x01096614, "[LT+] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x010a6614, "[LTM] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x010b6614, "[PGO] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x010c6614, "[PG+] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x010d6614, "[POC] VS2017 v15.6.7 build 26132 (*)" },
	{ 0x010e6614, "[PO+] VS2017 v15.6.7 build 26132 (*)" },

	// Visual Studio 2017 version 15.6.6 (values are interpolated)
	{ 0x01046613, "[ C ] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01036613, "[ASM] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01056613, "[C++] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x00ff6613, "[RES] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01026613, "[LNK] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01016613, "[IMP] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01006613, "[EXP] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01066613, "[CIL] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01076613, "[CI+] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01086613, "[LTC] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x01096613, "[LT+] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x010a6613, "[LTM] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x010b6613, "[PGO] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x010c6613, "[PG+] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x010d6613, "[POC] VS2017 v15.6.6 build 26131 (*)" },
	{ 0x010e6613, "[PO+] VS2017 v15.6.6 build 26131 (*)" },

	// Visual Studio 2017 version 15.6.4 has the same build number
	// Visual Studio 2017 version 15.6.3 (values are interpolated)
	{ 0x01046611, "[ C ] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01036611, "[ASM] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01056611, "[C++] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x00ff6611, "[RES] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01026611, "[LNK] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01016611, "[IMP] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01006611, "[EXP] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01066611, "[CIL] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01076611, "[CI+] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01086611, "[LTC] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x01096611, "[LT+] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x010a6611, "[LTM] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x010b6611, "[PGO] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x010c6611, "[PG+] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x010d6611, "[POC] VS2017 v15.6.3 build 26129 (*)" },
	{ 0x010e6611, "[PO+] VS2017 v15.6.3 build 26129 (*)" },

	// Visual Studio 2017 version 15.6.2 has the same build number
	// Visual Studio 2017 version 15.6.1 has the same build number
	// Visual Studio 2017 version 15.6.0 (values are interpolated)
	{ 0x01046610, "[ C ] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01036610, "[ASM] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01056610, "[C++] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x00ff6610, "[RES] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01026610, "[LNK] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01016610, "[IMP] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01006610, "[EXP] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01066610, "[CIL] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01076610, "[CI+] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01086610, "[LTC] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x01096610, "[LT+] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x010a6610, "[LTM] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x010b6610, "[PGO] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x010c6610, "[PG+] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x010d6610, "[POC] VS2017 v15.6.0 build 26128 (*)" },
	{ 0x010e6610, "[PO+] VS2017 v15.6.0 build 26128 (*)" },

	// Visual Studio 2017 version 15.5.7 has the same build number
	// Visual Studio 2017 version 15.5.6 (values are interpolated)
	{ 0x010464eb, "[ C ] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010364eb, "[ASM] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010564eb, "[C++] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x00ff64eb, "[RES] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010264eb, "[LNK] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010164eb, "[IMP] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010064eb, "[EXP] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010664eb, "[CIL] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010764eb, "[CI+] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010864eb, "[LTC] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010964eb, "[LT+] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010a64eb, "[LTM] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010b64eb, "[PGO] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010c64eb, "[PG+] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010d64eb, "[POC] VS2017 v15.5.6 build 25835 (*)" },
	{ 0x010e64eb, "[PO+] VS2017 v15.5.6 build 25835 (*)" },

	// MSVS2017 v15.5.4 (15.5.3 has the same build number)
	{ 0x010464ea, "[ C ] VS2017 v15.5.4 build 25834" },
	{ 0x010364ea, "[ASM] VS2017 v15.5.4 build 25834" },
	{ 0x010564ea, "[C++] VS2017 v15.5.4 build 25834" },
	{ 0x00ff64ea, "[RES] VS2017 v15.5.4 build 25834" },
	{ 0x010264ea, "[LNK] VS2017 v15.5.4 build 25834" },
	{ 0x010064ea, "[EXP] VS2017 v15.5.4 build 25834" },
	{ 0x010164ea, "[IMP] VS2017 v15.5.4 build 25834" },
	{ 0x010664ea, "[CIL] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010764ea, "[CI+] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010864ea, "[LTC] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010964ea, "[LT+] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010a64ea, "[LTM] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010b64ea, "[PGO] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010c64ea, "[PG+] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010d64ea, "[POC] VS2017 v15.5.4 build 25834 (*)" },
	{ 0x010e64ea, "[PO+] VS2017 v15.5.4 build 25834 (*)" },

	// Visual Studio 2017 version 15.5.2 (values are interpolated)
	{ 0x010464e7, "[ C ] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010364e7, "[ASM] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010564e7, "[C++] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x00ff64e7, "[RES] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010264e7, "[LNK] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010164e7, "[IMP] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010064e7, "[EXP] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010664e7, "[CIL] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010764e7, "[CI+] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010864e7, "[LTC] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010964e7, "[LT+] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010a64e7, "[LTM] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010b64e7, "[PGO] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010c64e7, "[PG+] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010d64e7, "[POC] VS2017 v15.5.2 build 25831 (*)" },
	{ 0x010e64e7, "[PO+] VS2017 v15.5.2 build 25831 (*)" },

	// Visual Studio 2017 version 15.4.5 (values are interpolated)
	{ 0x010463cb, "[ C ] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010363cb, "[ASM] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010563cb, "[C++] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x00ff63cb, "[RES] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010263cb, "[LNK] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010163cb, "[IMP] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010063cb, "[EXP] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010663cb, "[CIL] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010763cb, "[CI+] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010863cb, "[LTC] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010963cb, "[LT+] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010a63cb, "[LTM] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010b63cb, "[PGO] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010c63cb, "[PG+] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010d63cb, "[POC] VS2017 v15.4.5 build 25547 (*)" },
	{ 0x010e63cb, "[PO+] VS2017 v15.4.5 build 25547 (*)" },

	// Visual Studio 2017 version 15.4.4 (values are interpolated)
	{ 0x010463c6, "[ C ] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010363c6, "[ASM] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010563c6, "[C++] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x00ff63c6, "[RES] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010263c6, "[LNK] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010163c6, "[IMP] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010063c6, "[EXP] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010663c6, "[CIL] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010763c6, "[CI+] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010863c6, "[LTC] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010963c6, "[LT+] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010a63c6, "[LTM] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010b63c6, "[PGO] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010c63c6, "[PG+] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010d63c6, "[POC] VS2017 v15.4.4 build 25542 (*)" },
	{ 0x010e63c6, "[PO+] VS2017 v15.4.4 build 25542 (*)" },

	// Visual Studio 2017 version 15.3.3 (values are interpolated)
	{ 0x010463a3, "[ C ] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010363a3, "[ASM] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010563a3, "[C++] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x00ff63a3, "[RES] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010263a3, "[LNK] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010163a3, "[IMP] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010063a3, "[EXP] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010663a3, "[CIL] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010763a3, "[CI+] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010863a3, "[LTC] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010963a3, "[LT+] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010a63a3, "[LTM] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010b63a3, "[PGO] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010c63a3, "[PG+] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010d63a3, "[POC] VS2017 v15.3.3 build 25507 (*)" },
	{ 0x010e63a3, "[PO+] VS2017 v15.3.3 build 25507 (*)" },

	// Visual Studio 2017 version 15.3 (values are interpolated)
	// source: https://twitter.com/visualc/status/897853176002433024
	{ 0x010463a2, "[ C ] VS2017 v15.3 build 25506 (*)" },
	{ 0x010363a2, "[ASM] VS2017 v15.3 build 25506 (*)" },
	{ 0x010563a2, "[C++] VS2017 v15.3 build 25506 (*)" },
	{ 0x00ff63a2, "[RES] VS2017 v15.3 build 25506 (*)" },
	{ 0x010263a2, "[LNK] VS2017 v15.3 build 25506 (*)" },
	{ 0x010163a2, "[IMP] VS2017 v15.3 build 25506 (*)" },
	{ 0x010063a2, "[EXP] VS2017 v15.3 build 25506 (*)" },
	{ 0x010663a2, "[CIL] VS2017 v15.3 build 25506 (*)" },
	{ 0x010763a2, "[CI+] VS2017 v15.3 build 25506 (*)" },
	{ 0x010863a2, "[LTC] VS2017 v15.3 build 25506 (*)" },
	{ 0x010963a2, "[LT+] VS2017 v15.3 build 25506 (*)" },
	{ 0x010a63a2, "[LTM] VS2017 v15.3 build 25506 (*)" },
	{ 0x010b63a2, "[PGO] VS2017 v15.3 build 25506 (*)" },
	{ 0x010c63a2, "[PG+] VS2017 v15.3 build 25506 (*)" },
	{ 0x010d63a2, "[POC] VS2017 v15.3 build 25506 (*)" },
	{ 0x010e63a2, "[PO+] VS2017 v15.3 build 25506 (*)" },

	// Visual Studio 2017 version 15.2 has the same build number
	// Visual Studio 2017 version 15.1 has the same build number
	// Visual Studio 2017 version 15.0 (values are interpolated)
	{ 0x010461b9, "[ C ] VS2017 v15.0 build 25017 (*)" },
	{ 0x010361b9, "[ASM] VS2017 v15.0 build 25017 (*)" },
	{ 0x010561b9, "[C++] VS2017 v15.0 build 25017 (*)" },
	{ 0x00ff61b9, "[RES] VS2017 v15.0 build 25017 (*)" },
	{ 0x010261b9, "[LNK] VS2017 v15.0 build 25017 (*)" },
	{ 0x010161b9, "[IMP] VS2017 v15.0 build 25017 (*)" },
	{ 0x010061b9, "[EXP] VS2017 v15.0 build 25017 (*)" },
	{ 0x010661b9, "[CIL] VS2017 v15.0 build 25017 (*)" },
	{ 0x010761b9, "[CI+] VS2017 v15.0 build 25017 (*)" },
	{ 0x010861b9, "[LTC] VS2017 v15.0 build 25017 (*)" },
	{ 0x010961b9, "[LT+] VS2017 v15.0 build 25017 (*)" },
	{ 0x010a61b9, "[LTM] VS2017 v15.0 build 25017 (*)" },
	{ 0x010b61b9, "[PGO] VS2017 v15.0 build 25017 (*)" },
	{ 0x010c61b9, "[PG+] VS2017 v15.0 build 25017 (*)" },
	{ 0x010d61b9, "[POC] VS2017 v15.0 build 25017 (*)" },
	{ 0x010e61b9, "[PO+] VS2017 v15.0 build 25017 (*)" },

	// MSVS Community 2015 UPD3.1 (cl version 19.00.24215.1) - some IDs are interpolated
	// [ASM] is the same as in UPD3 build 24213
	{ 0x01045e97, "[ C ] VS2015 UPD3.1 build 24215" },
	{ 0x01055e97, "[C++] VS2015 UPD3.1 build 24215" },
	{ 0x01025e97, "[LNK] VS2015 UPD3.1 build 24215" },
	{ 0x01005e97, "[EXP] VS2015 UPD3.1 build 24215" },
	{ 0x01015e97, "[IMP] VS2015 UPD3.1 build 24215" },
	{ 0x00ff5e97, "[RES] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x01035e97, "[ASM] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x01065e97, "[CIL] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x01075e97, "[CI+] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x01085e97, "[LTC] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x01095e97, "[LT+] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x010a5e97, "[LTM] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x010b5e97, "[PGO] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x010c5e97, "[PG+] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x010d5e97, "[POC] VS2015 UPD3.1 build 24215 (*)" },
	{ 0x010e5e97, "[PO+] VS2015 UPD3.1 build 24215 (*)" },

	// MSVS Community 2015 UPD3 (cl version 19.00.24213.1)
	{ 0x01045e95, "[ C ] VS2015 UPD3 build 24213" },
	{ 0x01055e95, "[C++] VS2015 UPD3 build 24213" },
	// asm and cvtres are from previous build smh
	{ 0x01035e92, "[ASM] VS2015 UPD3 build 24210" },
	{ 0x00ff5e92, "[RES] VS2015 UPD3 build 24210" },
	{ 0x01025e95, "[LNK] VS2015 UPD3 build 24213" },
	{ 0x01005e95, "[EXP] VS2015 UPD3 build 24213" },
	{ 0x01015e95, "[IMP] VS2015 UPD3 build 24213" },
	{ 0x01065e95, "[CIL] VS2015 UPD3 build 24213 (*)" },
	{ 0x01075e95, "[CI+] VS2015 UPD3 build 24213 (*)" },
	{ 0x01085e95, "[LTC] VS2015 UPD3 build 24213 (*)" },
	{ 0x01095e95, "[LT+] VS2015 UPD3 build 24213 (*)" },
	{ 0x010a5e95, "[LTM] VS2015 UPD3 build 24213 (*)" },
	{ 0x010b5e95, "[PGO] VS2015 UPD3 build 24213 (*)" },
	{ 0x010c5e95, "[PG+] VS2015 UPD3 build 24213 (*)" },
	{ 0x010d5e95, "[POC] VS2015 UPD3 build 24213 (*)" },
	{ 0x010e5e95, "[PO+] VS2015 UPD3 build 24213 (*)" },

	// Visual Studio 2015 Update 3 [14.0] (values are interpolated)
	{ 0x01045e92, "[ C ] VS2015 Update 3 [14.0] build 24210 (*)" },
	// 01035e92 [ASM] VS2015 Update 3 [14.0] build 24210 (*)
	{ 0x01055e92, "[C++] VS2015 Update 3 [14.0] build 24210 (*)" },
	// 00ff5e92 [RES] VS2015 Update 3 [14.0] build 24210 (*)
	{ 0x01025e92, "[LNK] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01015e92, "[IMP] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01005e92, "[EXP] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01065e92, "[CIL] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01075e92, "[CI+] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01085e92, "[LTC] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x01095e92, "[LT+] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x010a5e92, "[LTM] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x010b5e92, "[PGO] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x010c5e92, "[PG+] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x010d5e92, "[POC] VS2015 Update 3 [14.0] build 24210 (*)" },
	{ 0x010e5e92, "[PO+] VS2015 Update 3 [14.0] build 24210 (*)" },

	// MSVS Community 2015 UPD2 (14.0.25123.0?)
	{ 0x01045d6e, "[ C ] VS2015 UPD2 build 23918" },
	{ 0x01035d6e, "[ASM] VS2015 UPD2 build 23918" },
	{ 0x01055d6e, "[C++] VS2015 UPD2 build 23918" },
	{ 0x00ff5d6e, "[RES] VS2015 UPD2 build 23918" },
	{ 0x01025d6e, "[LNK] VS2015 UPD2 build 23918" },
	{ 0x01005d6e, "[EXP] VS2015 UPD2 build 23918" },
	{ 0x01015d6e, "[IMP] VS2015 UPD2 build 23918" },
	{ 0x01065d6e, "[CIL] VS2015 UPD2 build 23918 (*)" },
	{ 0x01075d6e, "[CI+] VS2015 UPD2 build 23918 (*)" },
	{ 0x01085d6e, "[LTC] VS2015 UPD2 build 23918 (*)" },
	{ 0x01095d6e, "[LT+] VS2015 UPD2 build 23918 (*)" },
	{ 0x010a5d6e, "[LTM] VS2015 UPD2 build 23918 (*)" },
	{ 0x010b5d6e, "[PGO] VS2015 UPD2 build 23918 (*)" },
	{ 0x010c5d6e, "[PG+] VS2015 UPD2 build 23918 (*)" },
	{ 0x010d5d6e, "[POC] VS2015 UPD2 build 23918 (*)" },
	{ 0x010e5d6e, "[PO+] VS2015 UPD2 build 23918 (*)" },

	// MSVS Community 2015 14.0.24728.2 (UPD 1) 14.0.24720.0 D14REL
	{ 0x01045bd2, "[ C ] VS2015 UPD1 build 23506" },
	{ 0x01035bd2, "[ASM] VS2015 UPD1 build 23506" },
	{ 0x01055bd2, "[C++] VS2015 UPD1 build 23506" },
	{ 0x00ff5bd2, "[RES] VS2015 UPD1 build 23506" },
	{ 0x01025bd2, "[LNK] VS2015 UPD1 build 23506" },
	{ 0x01005bd2, "[EXP] VS2015 UPD1 build 23506" },
	{ 0x01015bd2, "[IMP] VS2015 UPD1 build 23506" },
	{ 0x01065bd2, "[CIL] VS2015 UPD1 build 23506 (*)" },
	{ 0x01075bd2, "[CI+] VS2015 UPD1 build 23506 (*)" },
	{ 0x01085bd2, "[LTC] VS2015 UPD1 build 23506 (*)" },
	{ 0x01095bd2, "[LT+] VS2015 UPD1 build 23506 (*)" },
	{ 0x010a5bd2, "[LTM] VS2015 UPD1 build 23506 (*)" },
	{ 0x010b5bd2, "[PGO] VS2015 UPD1 build 23506 (*)" },
	{ 0x010c5bd2, "[PG+] VS2015 UPD1 build 23506 (*)" },
	{ 0x010d5bd2, "[POC] VS2015 UPD1 build 23506 (*)" },
	{ 0x010e5bd2, "[PO+] VS2015 UPD1 build 23506 (*)" },

	// MSVS Community 2015 [14.0]
	{ 0x010459f2, "[ C ] VS2015 [14.0] build 23026" },
	{ 0x010359f2, "[ASM] VS2015 [14.0] build 23026" },
	{ 0x010559f2, "[C++] VS2015 [14.0] build 23026" },
	{ 0x00ff59f2, "[RES] VS2015 [14.0] build 23026" },
	{ 0x010259f2, "[LNK] VS2015 [14.0] build 23026" },
	{ 0x010059f2, "[EXP] VS2015 [14.0] build 23026" },
	{ 0x010159f2, "[IMP] VS2015 [14.0] build 23026" },
	{ 0x010659f2, "[CIL] VS2015 [14.0] build 23026 (*)" },
	{ 0x010759f2, "[CI+] VS2015 [14.0] build 23026 (*)" },
	{ 0x010859f2, "[LTC] VS2015 [14.0] build 23026 (*)" },
	{ 0x010959f2, "[LT+] VS2015 [14.0] build 23026 (*)" },
	{ 0x010a59f2, "[LTM] VS2015 [14.0] build 23026 (*)" },
	{ 0x010b59f2, "[PGO] VS2015 [14.0] build 23026 (*)" },
	{ 0x010c59f2, "[PG+] VS2015 [14.0] build 23026 (*)" },
	{ 0x010d59f2, "[POC] VS2015 [14.0] build 23026 (*)" },
	{ 0x010e59f2, "[PO+] VS2015 [14.0] build 23026 (*)" },

	// Visual Studio 2013 November CTP [12.0] (values are interpolated)
	{ 0x00e0527a, "[ C ] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00df527a, "[ASM] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00e1527a, "[C++] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00db527a, "[RES] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00de527a, "[LNK] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00dd527a, "[IMP] VS2013 November CTP [12.0] build 21114 (*)" },
	{ 0x00dc527a, "[EXP] VS2013 November CTP [12.0] build 21114 (*)" },

	// MSVS2013 12.0.40629.00 Update 5
	{ 0x00e09eb5, "[ C ] VS2013 UPD5 build 40629" },
	{ 0x00e19eb5, "[C++] VS2013 UPD5 build 40629" },
	// cvtres not updated since RTM version, so add interpolated one
	{ 0x00db9eb5, "[RES] VS2013 Update 5 [12.0] build 40629 (*)" },
	{ 0x00de9eb5, "[LNK] VS2013 UPD5 build 40629" },
	{ 0x00dc9eb5, "[EXP] VS2013 UPD5 build 40629" },
	{ 0x00dd9eb5, "[IMP] VS2013 UPD5 build 40629" },
	{ 0x00df9eb5, "[ASM] VS2013 UPD5 build 40629" },

	// MSVS2013 12.0.31101.00 Update 4 - not attested in real world, @comp.id is
	// calculated.
	{ 0x00e0797d, "[ C ] VS2013 UPD4 build 31101 (*)" },
	{ 0x00e1797d, "[C++] VS2013 UPD4 build 31101 (*)" },
	{ 0x00db797d, "[RES] VS2013 UPD4 build 31101 (*)" },
	{ 0x00de797d, "[LNK] VS2013 UPD4 build 31101 (*)" },
	{ 0x00dc797d, "[EXP] VS2013 UPD4 build 31101 (*)" },
	{ 0x00dd797d, "[IMP] VS2013 UPD4 build 31101 (*)" },
	{ 0x00df797d, "[ASM] VS2013 UPD4 build 31101 (*)" },

	// MSVS2013 12.0.30723.00 Update 3 - not attested in real world, @comp.id is
	// calculated.
	{ 0x00e07803, "[ C ] VS2013 UPD3 build 30723 (*)" },
	{ 0x00e17803, "[C++] VS2013 UPD3 build 30723 (*)" },
	{ 0x00db7803, "[RES] VS2013 UPD3 build 30723 (*)" },
	{ 0x00de7803, "[LNK] VS2013 UPD3 build 30723 (*)" },
	{ 0x00dc7803, "[EXP] VS2013 UPD3 build 30723 (*)" },
	{ 0x00dd7803, "[IMP] VS2013 UPD3 build 30723 (*)" },
	{ 0x00df7803, "[ASM] VS2013 UPD3 build 30723 (*)" },

	// MSVS2013 12.0.30501.00 Update 2 - not attested in real world, @comp.id is
	// calculated.
	{ 0x00e07725, "[ C ] VS2013 UPD2 build 30501" },
	{ 0x00e17725, "[C++] VS2013 UPD2 build 30501" },
	// cvtres not updated since RTM version, so add interpolated one
	{ 0x00db7725, "[RES] VS2013 Update 2 [12.0] build 30501 (*)" },
	{ 0x00de7725, "[LNK] VS2013 UPD2 build 30501" },
	{ 0x00dc7725, "[EXP] VS2013 UPD2 build 30501" },
	{ 0x00dd7725, "[IMP] VS2013 UPD2 build 30501" },
	{ 0x00df7725, "[ASM] VS2013 UPD2 build 30501" },

	// Visual Studio 2013 Update2 RC [12.0] (values are interpolated)
	{ 0x00e07674, "[ C ] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00df7674, "[ASM] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00e17674, "[C++] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00db7674, "[RES] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00de7674, "[LNK] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00dd7674, "[IMP] VS2013 Update2 RC [12.0] build 30324 (*)" },
	{ 0x00dc7674, "[EXP] VS2013 Update2 RC [12.0] build 30324 (*)" },

	// MSVS2013 RTM
	// Looks like it doesn't always dump linker's comp.id
	// Visual Studio 2013 Update 1 [12.0] also has this build number
	{ 0x00e0520d, "[ C ] VS2013 build 21005" },
	{ 0x00e1520d, "[C++] VS2013 build 21005" },
	{ 0x00db520d, "[RES] VS2013 build 21005" },
	{ 0x00de520d, "[LNK] VS2013 build 21005" },
	{ 0x00dc520d, "[EXP] VS2013 build 21005" },
	{ 0x00dd520d, "[IMP] VS2013 build 21005" },
	{ 0x00df520d, "[ASM] VS2013 build 21005" },

	// Visual Studio 2013 RC [12.0] (values are interpolated)
	{ 0x00e0515b, "[ C ] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00df515b, "[ASM] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00e1515b, "[C++] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00db515b, "[RES] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00de515b, "[LNK] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00dd515b, "[IMP] VS2013 RC [12.0] build 20827 (*)" },
	{ 0x00dc515b, "[EXP] VS2013 RC [12.0] build 20827 (*)" },

	// Visual Studio 2013 Preview [12.0] (values are interpolated)
	{ 0x00e05089, "[ C ] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00df5089, "[ASM] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00e15089, "[C++] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00db5089, "[RES] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00de5089, "[LNK] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00dd5089, "[IMP] VS2013 Preview [12.0] build 20617 (*)" },
	{ 0x00dc5089, "[EXP] VS2013 Preview [12.0] build 20617 (*)" },

	// MSVS2012 Premium Update 4 (11.0.61030.00 Update 4)
	{ 0x00ceee66, "[ C ] VS2012 UPD4 build 61030" },
	{ 0x00cfee66, "[C++] VS2012 UPD4 build 61030" },
	{ 0x00cdee66, "[ASM] VS2012 UPD4 build 61030" },
	{ 0x00c9ee66, "[RES] VS2012 UPD4 build 61030" },
	{ 0x00ccee66, "[LNK] VS2012 UPD4 build 61030" },
	{ 0x00caee66, "[EXP] VS2012 UPD4 build 61030" },
	{ 0x00cbee66, "[IMP] VS2012 UPD4 build 61030" },

	// MSVS2012 Update 3 (17.00.60610.1 Update 3) - not attested in real world,
	// @comp.id is calculated.
	{ 0x00ceecc2, "[ C ] VS2012 UPD3 build 60610 (*)" },
	{ 0x00cfecc2, "[C++] VS2012 UPD3 build 60610 (*)" },
	{ 0x00cdecc2, "[ASM] VS2012 UPD3 build 60610 (*)" },
	{ 0x00c9ecc2, "[RES] VS2012 UPD3 build 60610 (*)" },
	{ 0x00ccecc2, "[LNK] VS2012 UPD3 build 60610 (*)" },
	{ 0x00caecc2, "[EXP] VS2012 UPD3 build 60610 (*)" },
	{ 0x00cbecc2, "[IMP] VS2012 UPD3 build 60610 (*)" },

	// MSVS2012 Update 2 (17.00.60315.1 Update 2) - not attested in real world,
	// @comp.id is calculated.
	{ 0x00ceeb9b, "[ C ] VS2012 UPD2 build 60315 (*)" },
	{ 0x00cfeb9b, "[C++] VS2012 UPD2 build 60315 (*)" },
	{ 0x00cdeb9b, "[ASM] VS2012 UPD2 build 60315 (*)" },
	{ 0x00c9eb9b, "[RES] VS2012 UPD2 build 60315 (*)" },
	{ 0x00cceb9b, "[LNK] VS2012 UPD2 build 60315 (*)" },
	{ 0x00caeb9b, "[EXP] VS2012 UPD2 build 60315 (*)" },
	{ 0x00cbeb9b, "[IMP] VS2012 UPD2 build 60315 (*)" },

	// MSVS2012 Update 1 (17.00.51106.1 Update 1) - not attested in real world,
	// @comp.id is calculated.
	{ 0x00cec7a2, "[ C ] VS2012 UPD1 build 51106 (*)" },
	{ 0x00cfc7a2, "[C++] VS2012 UPD1 build 51106 (*)" },
	{ 0x00cdc7a2, "[ASM] VS2012 UPD1 build 51106 (*)" },
	{ 0x00c9c7a2, "[RES] VS2012 UPD1 build 51106 (*)" },
	{ 0x00ccc7a2, "[LNK] VS2012 UPD1 build 51106 (*)" },
	{ 0x00cac7a2, "[EXP] VS2012 UPD1 build 51106 (*)" },
	{ 0x00cbc7a2, "[IMP] VS2012 UPD1 build 51106 (*)" },

	// Visual Studio 2012 November CTP [11.0] (values are interpolated)
	{ 0x00cec751, "[ C ] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00cdc751, "[ASM] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00cfc751, "[C++] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00c9c751, "[RES] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00ccc751, "[LNK] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00cbc751, "[IMP] VS2012 November CTP [11.0] build 51025 (*)" },
	{ 0x00cac751, "[EXP] VS2012 November CTP [11.0] build 51025 (*)" },

	// MSVS2012 Premium (11.0.50727.1 RTMREL)
	{ 0x00cec627, "[ C ] VS2012 build 50727" },
	{ 0x00cfc627, "[C++] VS2012 build 50727" },
	{ 0x00c9c627, "[RES] VS2012 build 50727" },
	{ 0x00cdc627, "[ASM] VS2012 build 50727" },
	{ 0x00cac627, "[EXP] VS2012 build 50727" },
	{ 0x00cbc627, "[IMP] VS2012 build 50727" },
	{ 0x00ccc627, "[LNK] VS2012 build 50727" },

	// MSVS2010 SP1 kb 983509 (10.0.40219.1 SP1Rel)
	{ 0x00aa9d1b, "[ C ] VS2010 SP1 build 40219" },
	{ 0x00ab9d1b, "[C++] VS2010 SP1 build 40219" },
	{ 0x009d9d1b, "[LNK] VS2010 SP1 build 40219" },
	{ 0x009a9d1b, "[RES] VS2010 SP1 build 40219" },
	{ 0x009b9d1b, "[EXP] VS2010 SP1 build 40219" },
	{ 0x009c9d1b, "[IMP] VS2010 SP1 build 40219" },
	{ 0x009e9d1b, "[ASM] VS2010 SP1 build 40219" },

	// MSVS2010 (10.0.30319.1 RTMRel)
	{ 0x00aa766f, "[ C ] VS2010 build 30319" },
	{ 0x00ab766f, "[C++] VS2010 build 30319" },
	{ 0x009d766f, "[LNK] VS2010 build 30319" },
	{ 0x009a766f, "[RES] VS2010 build 30319" },
	{ 0x009b766f, "[EXP] VS2010 build 30319" },
	{ 0x009c766f, "[IMP] VS2010 build 30319" },
	{ 0x009e766f, "[ASM] VS2010 build 30319" },

	// Visual Studio 2010 Beta 2 [10.0] (values are interpolated)
	{ 0x00aa520b, "[ C ] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x009e520b, "[ASM] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x00ab520b, "[C++] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x009a520b, "[RES] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x009d520b, "[LNK] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x009c520b, "[IMP] VS2010 Beta 2 [10.0] build 21003 (*)" },
	{ 0x009b520b, "[EXP] VS2010 Beta 2 [10.0] build 21003 (*)" },

	// Visual Studio 2010 Beta 1 [10.0] (values are interpolated)
	{ 0x00aa501a, "[ C ] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x009e501a, "[ASM] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x00ab501a, "[C++] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x009a501a, "[RES] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x009d501a, "[LNK] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x009c501a, "[IMP] VS2010 Beta 1 [10.0] build 20506 (*)" },
	{ 0x009b501a, "[EXP] VS2010 Beta 1 [10.0] build 20506 (*)" },

	// MSVS2008 SP1 (9.0.30729.1 SP)
	{ 0x00837809, "[ C ] VS2008 SP1 build 30729" },
	{ 0x00847809, "[C++] VS2008 SP1 build 30729" },
	// cvtres is the same as in VS2008, so add interpolated
	{ 0x00947809, "[RES] VS2008 SP1 [9.0] build 30729 (*)" },
	{ 0x00957809, "[ASM] VS2008 SP1 build 30729" },
	{ 0x00927809, "[EXP] VS2008 SP1 build 30729" },
	{ 0x00937809, "[IMP] VS2008 SP1 build 30729" },
	{ 0x00917809, "[LNK] VS2008 SP1 build 30729" },

	// MSVS2008 (9.0.21022.8 RTM)
	{ 0x0083521e, "[ C ] VS2008 build 21022" },
	{ 0x0084521e, "[C++] VS2008 build 21022" },
	{ 0x0091521e, "[LNK] VS2008 build 21022" },
	{ 0x0094521e, "[RES] VS2008 build 21022" },
	{ 0x0092521e, "[EXP] VS2008 build 21022" },
	{ 0x0093521e, "[IMP] VS2008 build 21022" },
	{ 0x0095521e, "[ASM] VS2008 build 21022" },

	// Visual Studio 2008 Beta 2 [9.0] (values are interpolated)
	{ 0x008350e2, "[ C ] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x009550e2, "[ASM] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x008450e2, "[C++] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x009450e2, "[RES] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x009150e2, "[LNK] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x009350e2, "[IMP] VS2008 Beta 2 [9.0] build 20706 (*)" },
	{ 0x009250e2, "[EXP] VS2008 Beta 2 [9.0] build 20706 (*)" },

	// MSVS2005 (RTM.50727-4200) cl version: 14.00.50727.42
	// MSVS2005-SP1 dumps the same comp.id's.
	// It is strange, but there exists VS2012 with the same build number:
	// 11 Build 50727.1
	{ 0x006dc627, "[ C ] VS2005 build 50727" },
	{ 0x006ec627, "[C++] VS2005 build 50727" },
	{ 0x0078c627, "[LNK] VS2005 build 50727" },
	{ 0x007cc627, "[RES] VS2005 build 50727" },
	{ 0x007ac627, "[EXP] VS2005 build 50727" },
	{ 0x007bc627, "[IMP] VS2005 build 50727" },
	{ 0x007dc627, "[ASM] VS2005 build 50727" },

	// Visual Studio 2005 [8.0] (values are interpolated)
	{ 0x006dc490, "[ C ] VS2005 [8.0] build 50320 (*)" },
	{ 0x007dc490, "[ASM] VS2005 [8.0] build 50320 (*)" },
	{ 0x006ec490, "[C++] VS2005 [8.0] build 50320 (*)" },
	{ 0x007cc490, "[RES] VS2005 [8.0] build 50320 (*)" },
	{ 0x0078c490, "[LNK] VS2005 [8.0] build 50320 (*)" },
	{ 0x007bc490, "[IMP] VS2005 [8.0] build 50320 (*)" },
	{ 0x007ac490, "[EXP] VS2005 [8.0] build 50320 (*)" },

	// Visual Studio 2005 Beta 2 [8.0] (values are interpolated)
	{ 0x006dc427, "[ C ] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x007dc427, "[ASM] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x006ec427, "[C++] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x007cc427, "[RES] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x0078c427, "[LNK] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x007bc427, "[IMP] VS2005 Beta 2 [8.0] build 50215 (*)" },
	{ 0x007ac427, "[EXP] VS2005 Beta 2 [8.0] build 50215 (*)" },

	// Visual Studio 2005 Beta 1 [8.0] (values are interpolated)
	{ 0x006d9e9f, "[ C ] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x007d9e9f, "[ASM] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x006e9e9f, "[C++] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x007c9e9f, "[RES] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x00789e9f, "[LNK] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x007b9e9f, "[IMP] VS2005 Beta 1 [8.0] build 40607 (*)" },
	{ 0x007a9e9f, "[EXP] VS2005 Beta 1 [8.0] build 40607 (*)" },

	// Windows Server 2003 SP1 DDK (for AMD64) (values are interpolated)
	{ 0x006d9d76, "[ C ] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x007d9d76, "[ASM] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x006e9d76, "[C++] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x007c9d76, "[RES] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x00789d76, "[LNK] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x007b9d76, "[IMP] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },
	{ 0x007a9d76, "[EXP] Windows Server 2003 SP1 DDK (for AMD64) build 40310 (*)" },

	// MSVS2003 (.NET) SP1 (kb918007)
	{ 0x005f178e, "[ C ] VS2003 (.NET) SP1 build 6030" },
	{ 0x0060178e, "[C++] VS2003 (.NET) SP1 build 6030" },
	{ 0x005a178e, "[LNK] VS2003 (.NET) SP1 build 6030" },
	{ 0x000f178e, "[ASM] VS2003 (.NET) SP1 build 6030" },
	// cvtres is the same version as without SP1
	{ 0x005e178e, "[RES] VS.NET 2003 SP1 [7.1] build 6030 (*)" },
	{ 0x005c178e, "[EXP] VS2003 (.NET) SP1 build 6030" },
	{ 0x005d178e, "[IMP] VS2003 (.NET) SP1 build 6030" },

	// Windows Server 2003 SP1 DDK (values are interpolated)
	{ 0x005f0fc3, "[ C ] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x000f0fc3, "[ASM] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x00600fc3, "[C++] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x005e0fc3, "[RES] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x005a0fc3, "[LNK] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x005d0fc3, "[IMP] Windows Server 2003 SP1 DDK build 4035 (*)" },
	{ 0x005c0fc3, "[EXP] Windows Server 2003 SP1 DDK build 4035 (*)" },

	// MSVS2003 (.NET) 7.0.1.3088
	{ 0x005f0c05, "[ C ] VS2003 (.NET) build 3077" },
	{ 0x00600c05, "[C++] VS2003 (.NET) build 3077" },
	{ 0x000f0c05, "[ASM] VS2003 (.NET) build 3077" },
	{ 0x005e0bec, "[RES] VS2003 (.NET) build 3052" },
	{ 0x005c0c05, "[EXP] VS2003 (.NET) build 3077" },
	{ 0x005d0c05, "[IMP] VS2003 (.NET) build 3077" },
	{ 0x005a0c05, "[LNK] VS2003 (.NET) build 3077" },
	// Visual Studio .NET 2003 [7.1] (values are interpolated)
	{ 0x005e0c05, "[RES] VS.NET 2003 [7.1] build 3077 (*)" },

	// MSVS2002 (.NET) 7.0.9466
	{ 0x001c24fa, "[ C ] VS2002 (.NET) build 9466" },
	{ 0x001d24fa, "[C++] VS2002 (.NET) build 9466" },
	{ 0x004024fa, "[ASM] VS2002 (.NET) build 9466" },
	{ 0x003d24fa, "[LNK] VS2002 (.NET) build 9466" },
	{ 0x004524fa, "[RES] VS2002 (.NET) build 9466" },
	{ 0x003f24fa, "[EXP] VS2002 (.NET) build 9466" },
	{ 0x001924fa, "[IMP] VS2002 (.NET) build 9466" },

	// Windows XP SP1 DDK (values are interpolated)
	{ 0x001c23d8, "[ C ] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x004023d8, "[ASM] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x001d23d8, "[C++] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x004523d8, "[RES] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x003d23d8, "[LNK] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x001923d8, "[IMP] Windows XP SP1 DDK build 9176 (*)" },
	{ 0x003f23d8, "[EXP] Windows XP SP1 DDK build 9176 (*)" },

	// MSVS98 6.0 SP6 (Enterprise edition)
	// Looks like linker may mix compids for C and C++ objects (why?)
	{ 0x000a2636, "[ C ] VS98 (6.0) SP6 build 8804" },
	{ 0x000b2636, "[C++] VS98 (6.0) SP6 build 8804" },

	// MSVC++ 6.0 SP5 (Enterprise edition)
	{ 0x00152306, "[ C ] VC++ 6.0 SP5 build 8804" },
	{ 0x00162306, "[C++] VC++ 6.0 SP5 build 8804" },
	{ 0x000420ff, "[LNK] VC++ 6.0 SP5 imp/exp build 8447" },
	{ 0x000606c7, "[RES] VS98 (6.0) SP6 cvtres build 1736" },

	// MSVS6.0 (no servicepacks)
	{ 0x000a1fe8, "[ C ] VS98 (6.0) build 8168" },
	{ 0x000b1fe8, "[C++] VS98 (6.0) build 8168" },
	{ 0x000606b8, "[RES] VS98 (6.0) cvtres build 1720" },
	{ 0x00041fe8, "[LNK] VS98 (6.0) imp/exp build 8168" },

	//////////////////// assorted versions (mostly VS6) by Toms (https://github.com/tomsons26)
	//Known released VS6 versions
	// 000a1fe8 [ C ] VS6 build 8168
	// 000b1fe8 [C++] VS6 build 8168
	{ 0x000a20ff, "[ C ] VS6 SP3 build 8447" },
	{ 0x000b20ff, "[C++] VS6 SP3 build 8447" },
	{ 0x000a225f, "[ C ] VS6 SP4 build 8799" },
	{ 0x000b225f, "[C++] VS6 SP4 build 8799" },
	{ 0x000a2306, "[ C ] VS6 SP5 build 8966" },
	{ 0x000b2306, "[C++] VS6 SP5 build 8966" },
	// 000a2636 [ C ] VS6 SP6 build 9782
	// 000b2636 [C++] VS6 SP6 build 9782

	//VS6 with Processor Pack
	{ 0x003022ac, "[ C ] VS6 SP4 PP Beta build 8876" },
	{ 0x003122ac, "[C++] VS6 SP4 PP Beta build 8876" },
	{ 0x003022ef, "[ C ] VS6 SP4 PP build 8943" },
	{ 0x003122ef, "[C++] VS6 SP4 PP build 8943" },
	{ 0x00302354, "[ C ] VS6 SP5 PP build 9044" },
	{ 0x00312354, "[C++] VS6 SP5 PP build 9044" },

	//VS6 pre-release versions
	{ 0x000a1fcd, "[ C ] VS6 Enterprise RC build 8141" },
	{ 0x000b1fcd, "[C++] VS6 Enterprise RC build 8141" },
	// [ C ] VS6 SP4 Beta build 8793
	// [C++] VS6 SP4 Beta build 8793

	//VS6 book versions
	{ 0x00171fe8, "[C B] VS6 build 8168" },
	{ 0x00181fe8, "[C+B] VS6 build 8168" },

	//strange VS versions, only in libs?
	{ 0x000a1f6f, "[ C ] VS6? (Likely Libs) build 8047" },
	{ 0x000b1f6f, "[C++] VS6? (Likely Libs) build 8047" },
	{ 0x000a2179, "[ C ] VS6? (Likely Libs) build 8569" },
	{ 0x000b2179, "[C++] VS6? (Likely Libs) build 8569" },
	{ 0x000a225d, "[ C ] VS6? (Likely Libs) build 8797" },
	{ 0x000b225d, "[C++] VS6? (Likely Libs) build 8797" },
	{ 0x000a225e, "[ C ] VS6? (Likely Libs) build 8798" },
	{ 0x000b225e, "[C++] VS6? (Likely Libs) build 8798" },

	{ 0x001c227e, "[ C ] VS2002 ? (Likely Libs) build 8830" },
	{ 0x001d227e, "[C++] VS2002 ? (Likely Libs) build 8830" },

	//VS2002 XP SP1 DDK version
	{ 0x001c23da, "[ C ] VS2002 XP SP1 DDK build 9178" },
	{ 0x001d23da, "[C++] VS2002 XP SP1 DDK build 9178" },

	//tools
	// 000606b8 [RES] VS6 build 1720
	// 000606c7 [RES] VS6 (SP3 or greater) build 1735

	//internal tools
	{ 0x000c1c7b, "[AOb] build 7291 (VS6 OLDNAMES.LIB)" },

	//MASM
	{ 0x000e1c83, "[ASM] MASM 6.13 build 7299" },
	{ 0x001220fc, "[ASM] MASM 6.14 build 8444" },
	{ 0x002a2263, "[ASM] MASM 6.15 build 8803" },

	//VS6 Linker
	// 00041fe8 [LNK] VS6 build 8168
	// 000420ff [LNK] VS6 (SP3 or greater) build 8447
	{ 0x000520ff, "[OMF] VS6 (SP3 or greater) build 8447" },

	//VS Linkers only in libs?

	{ 0x00131f56, "[LNK] 5.12 build 8022 (Likely Libs) (OLEAUT32.LIB)" },
	{ 0x00131f62, "[LNK] 5.12 build 8034 (Likely Libs)" },
	{ 0x00132359, "[LNK] 5.12 build 9049 (Likely Libs)" },

	{ 0x00041f6f, "[LNK] VS6 build 8047 (Likely Libs)" },
	{ 0x00042179, "[LNK] VS6 ? build 8569 (Likely Libs)" },
	{ 0x00042636, "[LNK] VS6 SP6 build 9782 (Likely Libs)" },

	{ 0x00252233, "[LNK] 6.20 build 8755 (Likely Libs)" },

	{ 0x001923fa, "[IMP] VS2002 build 9210 (Import library)" },

	////////////// end assorted versions

	// MSVS97 5.0 Enterprise Edition (cl 11.00.7022, link 5.00.7022)
	// Does NOT generate any @comp.id records, nor Rich headers.
	// SP3 added Rich-generating linker (albeit it doesn't identify itself),
	// and CVTRES and LIB(?) utilities that generate @comp.id records. There is no
	// distinction between import and export records yet. I marked the records as
	// [IMP] because VS98 linker seems to omit export records from the header; VS97
	// linker might do the same.
	{ 0x00060684, "[RES] VS97 (5.0) SP3 cvtres 5.00.1668" },
	{ 0x00021c87, "[IMP] VS97 (5.0) SP3 link 5.10.7303" }
};

// Generic product ids (extracted from VS2019's msobj140-msvcrt.lib).

//0000 [---] Unknown                // prodidUnknown
//0001 [IMP] Import0                // prodidImport0
//010e [PO+] VS2015+ (14.0+)        // prodidUtc1900_POGO_O_CPP
//
//0002 [LNK] VS97 (5.10)            // prodidLinker510
//0003 [OMF] VS97 (5.10)            // prodidCvtomf510
//0004 [LNK] VS98 (6.0)             // prodidLinker600
//0005 [OMF] VS98 (6.0)             // prodidCvtomf600
//0006 [RES] VS97 (5.0)             // prodidCvtres500
//0007 [BSC] VS97 (5.0)             // prodidUtc11_Basic
//0008 [ C ] VS97 (5.0)             // prodidUtc11_C
//0009 [BSC] VS98 (6.0)             // prodidUtc12_Basic
//000a [ C ] VS98 (6.0)             // prodidUtc12_C
//000b [CPP] VS98 (6.0)             // prodidUtc12_CPP
//000c [AOb] VS98 (6.0)             // prodidAliasObj60
//000d [BSC] VS98 (6.0)             // prodidVisualBasic60
//000e [ASM] VS98 (6.13)            // prodidMasm613
//000f [ASM] VS2003 (7.10)          // prodidMasm710
//0010 [LNK] VS97 (5.11)            // prodidLinker511
//0011 [OMF] VS97 (5.11)            // prodidCvtomf511
//0012 [ASM] VS98 (6.14)            // prodidMasm614
//0013 [LNK] VS97 (5.12)            // prodidLinker512
//0014 [OMF] VS97 (5.12)            // prodidCvtomf512
//0015 [C S] VS98 (6.0)             // prodidUtc12_C_Std
//0016 [C+S] VS98 (6.0)             // prodidUtc12_CPP_Std
//0017 [C B] VS98 (6.0)             // prodidUtc12_C_Book
//0018 [C+B] VS98 (6.0)             // prodidUtc12_CPP_Book
//0019 [IMP] VS2002 (7.0)           // prodidImplib700
//001a [OMF] VS2002 (7.0)           // prodidCvtomf700
//001b [BSC] VS2002 (7.0)           // prodidUtc13_Basic
//001c [ C ] VS2002 (7.0)           // prodidUtc13_C
//001d [CPP] VS2002 (7.0)           // prodidUtc13_CPP
//001e [LNK] VS98 (6.10)            // prodidLinker610
//001f [OMF] VS98 (6.10)            // prodidCvtomf610
//0020 [LNK] VS98 (6.01)            // prodidLinker601
//0021 [OMF] VS98 (6.01)            // prodidCvtomf601
//0022 [BSC] VS98 (6.10)            // prodidUtc12_1_Basic
//0023 [ C ] VS98 (6.10)            // prodidUtc12_1_C
//0024 [CPP] VS98 (6.10)            // prodidUtc12_1_CPP
//0025 [LNK] VS98 (6.02)            // prodidLinker620
//0026 [OMF] VS98 (6.02)            // prodidCvtomf620
//0027 [AOb] VS2002 (7.0)           // prodidAliasObj70
//0028 [LNK] VS98 (6.21)            // prodidLinker621
//0029 [OMF] VS98 (6.21)            // prodidCvtomf621
//002a [ASM] VS98 (6.15)            // prodidMasm615
//002b [LTC] VS2002 (7.0)           // prodidUtc13_LTCG_C
//002c [LT+] VS2002 (7.0)           // prodidUtc13_LTCG_CPP
//002d [ASM] VS98 (6.20)            // prodidMasm620
//002e [ILA] VS98 (6.20)            // prodidILAsm100
//002f [BSC] VS98 (6.20)            // prodidUtc12_2_Basic
//0030 [ C ] VS98 (6.20)            // prodidUtc12_2_C
//0031 [CPP] VS98 (6.20)            // prodidUtc12_2_CPP
//0032 [C S] VS98 (6.20)            // prodidUtc12_2_C_Std
//0033 [C+S] VS98 (6.20)            // prodidUtc12_2_CPP_Std
//0034 [C B] VS98 (6.20)            // prodidUtc12_2_C_Book
//0035 [C+B] VS98 (6.20)            // prodidUtc12_2_CPP_Book
//0036 [IMP] VS98 (6.22)            // prodidImplib622
//0037 [OMF] VS98 (6.22)            // prodidCvtomf622
//0038 [RES] VS97 (5.01)            // prodidCvtres501
//0039 [C S] VS2002 (7.0)           // prodidUtc13_C_Std
//003a [C+S] VS2002 (7.0)           // prodidUtc13_CPP_Std
//003b [PGD] VS2002 (7.0)           // prodidCvtpgd1300
//003c [LNK] VS98 (6.22)            // prodidLinker622
//003d [LNK] VS2002 (7.0)           // prodidLinker700
//003e [EXP] VS98 (6.22)            // prodidExport622
//003f [EXP] VS2002 (7.0)           // prodidExport700
//0040 [ASM] VS2002 (7.0)           // prodidMasm700
//0041 [PGO] VS2002 (7.0)           // prodidUtc13_POGO_I_C
//0042 [PG+] VS2002 (7.0)           // prodidUtc13_POGO_I_CPP
//0043 [POC] VS2002 (7.0)           // prodidUtc13_POGO_O_C
//0044 [PO+] VS2002 (7.0)           // prodidUtc13_POGO_O_CPP
//0045 [RES] VS2002 (7.0)           // prodidCvtres700
//0046 [RES] VS2003 (7.10p)         // prodidCvtres710p
//0047 [LNK] VS2003 (7.10p)         // prodidLinker710p
//0048 [OMF] VS2003 (7.10p)         // prodidCvtomf710p
//0049 [EXP] VS2003 (7.10p)         // prodidExport710p
//004a [IMP] VS2003 (7.10p)         // prodidImplib710p
//004b [ASM] VS2003 (7.10p)         // prodidMasm710p
//004c [ C ] VS2003 (7.10p)         // prodidUtc1310p_C
//004d [CPP] VS2003 (7.10p)         // prodidUtc1310p_CPP
//004e [C S] VS2003 (7.10p)         // prodidUtc1310p_C_Std
//004f [C+S] VS2003 (7.10p)         // prodidUtc1310p_CPP_Std
//0050 [LTC] VS2003 (7.10p)         // prodidUtc1310p_LTCG_C
//0051 [LT+] VS2003 (7.10p)         // prodidUtc1310p_LTCG_CPP
//0052 [PGO] VS2003 (7.10p)         // prodidUtc1310p_POGO_I_C
//0053 [PG+] VS2003 (7.10p)         // prodidUtc1310p_POGO_I_CPP
//0054 [POC] VS2003 (7.10p)         // prodidUtc1310p_POGO_O_C
//0055 [PO+] VS2003 (7.10p)         // prodidUtc1310p_POGO_O_CPP
//0056 [LNK] VS98 (6.24)            // prodidLinker624
//0057 [OMF] VS98 (6.24)            // prodidCvtomf624
//0058 [EXP] VS98 (6.24)            // prodidExport624
//0059 [IMP] VS98 (6.24)            // prodidImplib624
//005a [LNK] VS2003 (7.10)          // prodidLinker710
//005b [OMF] VS2003 (7.10)          // prodidCvtomf710
//005c [EXP] VS2003 (7.10)          // prodidExport710
//005d [IMP] VS2003 (7.10)          // prodidImplib710
//005e [RES] VS2003 (7.10)          // prodidCvtres710
//005f [ C ] VS2003 (7.10)          // prodidUtc1310_C
//0060 [CPP] VS2003 (7.10)          // prodidUtc1310_CPP
//0061 [C S] VS2003 (7.10)          // prodidUtc1310_C_Std
//0062 [C+S] VS2003 (7.10)          // prodidUtc1310_CPP_Std
//0063 [LTC] VS2003 (7.10)          // prodidUtc1310_LTCG_C
//0064 [LT+] VS2003 (7.10)          // prodidUtc1310_LTCG_CPP
//0065 [PGO] VS2003 (7.10)          // prodidUtc1310_POGO_I_C
//0066 [PG+] VS2003 (7.10)          // prodidUtc1310_POGO_I_CPP
//0067 [POC] VS2003 (7.10)          // prodidUtc1310_POGO_O_C
//0068 [PO+] VS2003 (7.10)          // prodidUtc1310_POGO_O_CPP
//0069 [AOb] VS2003 (7.10)          // prodidAliasObj710
//006a [AOb] VS2003 (7.10p)         // prodidAliasObj710p
//006b [PGD] VS2003 (7.10)          // prodidCvtpgd1310
//006c [PGD] VS2003 (7.10p)         // prodidCvtpgd1310p
//006d [ C ] VS2005 (8.0)           // prodidUtc1400_C
//006e [CPP] VS2005 (8.0)           // prodidUtc1400_CPP
//006f [C S] VS2005 (8.0)           // prodidUtc1400_C_Std
//0070 [C+S] VS2005 (8.0)           // prodidUtc1400_CPP_Std
//0071 [LTC] VS2005 (8.0)           // prodidUtc1400_LTCG_C
//0072 [LT+] VS2005 (8.0)           // prodidUtc1400_LTCG_CPP
//0073 [PGO] VS2005 (8.0)           // prodidUtc1400_POGO_I_C
//0074 [PG+] VS2005 (8.0)           // prodidUtc1400_POGO_I_CPP
//0075 [POC] VS2005 (8.0)           // prodidUtc1400_POGO_O_C
//0076 [PO+] VS2005 (8.0)           // prodidUtc1400_POGO_O_CPP
//0077 [PGD] VS2005 (8.0)           // prodidCvtpgd1400
//0078 [LNK] VS2005 (8.0)           // prodidLinker800
//0079 [OMF] VS2005 (8.0)           // prodidCvtomf800
//007a [EXP] VS2005 (8.0)           // prodidExport800
//007b [IMP] VS2005 (8.0)           // prodidImplib800
//007c [RES] VS2005 (8.0)           // prodidCvtres800
//007d [ASM] VS2005 (8.0)           // prodidMasm800
//007e [AOb] VS2005 (8.0)           // prodidAliasObj800
//007f [---] Phoenix Prerelease     // prodidPhoenixPrerelease
//0080 [CIL] VS2005 (8.0)           // prodidUtc1400_CVTCIL_C
//0081 [CI+] VS2005 (8.0)           // prodidUtc1400_CVTCIL_CPP
//0082 [LTM] VS2005 (8.0)           // prodidUtc1400_LTCG_MSIL
//0083 [ C ] VS2008 (9.0)           // prodidUtc1500_C
//0084 [CPP] VS2008 (9.0)           // prodidUtc1500_CPP
//0085 [C S] VS2008 (9.0)           // prodidUtc1500_C_Std
//0086 [C+S] VS2008 (9.0)           // prodidUtc1500_CPP_Std
//0087 [CIL] VS2008 (9.0)           // prodidUtc1500_CVTCIL_C
//0088 [CI+] VS2008 (9.0)           // prodidUtc1500_CVTCIL_CPP
//0089 [LTC] VS2008 (9.0)           // prodidUtc1500_LTCG_C
//008a [LT+] VS2008 (9.0)           // prodidUtc1500_LTCG_CPP
//008b [LTM] VS2008 (9.0)           // prodidUtc1500_LTCG_MSIL
//008c [PGO] VS2008 (9.0)           // prodidUtc1500_POGO_I_C
//008d [PG+] VS2008 (9.0)           // prodidUtc1500_POGO_I_CPP
//008e [POC] VS2008 (9.0)           // prodidUtc1500_POGO_O_C
//008f [PO+] VS2008 (9.0)           // prodidUtc1500_POGO_O_CPP
//0090 [PGD] VS2008 (9.0)           // prodidCvtpgd1500
//0091 [LNK] VS2008 (9.0)           // prodidLinker900
//0092 [EXP] VS2008 (9.0)           // prodidExport900
//0093 [IMP] VS2008 (9.0)           // prodidImplib900
//0094 [RES] VS2008 (9.0)           // prodidCvtres900
//0095 [ASM] VS2008 (9.0)           // prodidMasm900
//0096 [AOb] VS2008 (9.0)           // prodidAliasObj900
//0097 [---] Resource               // prodidResource
//0098 [AOb] VS2010 (10.0)          // prodidAliasObj1000
//0099 [PGD] VS2010 (10.0)          // prodidCvtpgd1600
//009a [RES] VS2010 (10.0)          // prodidCvtres1000
//009b [EXP] VS2010 (10.0)          // prodidExport1000
//009c [IMP] VS2010 (10.0)          // prodidImplib1000
//009d [LNK] VS2010 (10.0)          // prodidLinker1000
//009e [ASM] VS2010 (10.0)          // prodidMasm1000
//009f [ C ] Phoenix (10.0)         // prodidPhx1600_C
//00a0 [CPP] Phoenix (10.0)         // prodidPhx1600_CPP
//00a1 [CIL] Phoenix (10.0)         // prodidPhx1600_CVTCIL_C
//00a2 [CI+] Phoenix (10.0)         // prodidPhx1600_CVTCIL_CPP
//00a3 [LTC] Phoenix (10.0)         // prodidPhx1600_LTCG_C
//00a4 [LT+] Phoenix (10.0)         // prodidPhx1600_LTCG_CPP
//00a5 [LTM] Phoenix (10.0)         // prodidPhx1600_LTCG_MSIL
//00a6 [PGO] Phoenix (10.0)         // prodidPhx1600_POGO_I_C
//00a7 [PG+] Phoenix (10.0)         // prodidPhx1600_POGO_I_CPP
//00a8 [POC] Phoenix (10.0)         // prodidPhx1600_POGO_O_C
//00a9 [PO+] Phoenix (10.0)         // prodidPhx1600_POGO_O_CPP
//00aa [ C ] VS2010 (10.0)          // prodidUtc1600_C
//00ab [CPP] VS2010 (10.0)          // prodidUtc1600_CPP
//00ac [CIL] VS2010 (10.0)          // prodidUtc1600_CVTCIL_C
//00ad [CI+] VS2010 (10.0)          // prodidUtc1600_CVTCIL_CPP
//00ae [LTC] VS2010 (10.0)          // prodidUtc1600_LTCG_C
//00af [LT+] VS2010 (10.0)          // prodidUtc1600_LTCG_CPP
//00b0 [LTM] VS2010 (10.0)          // prodidUtc1600_LTCG_MSIL
//00b1 [PGO] VS2010 (10.0)          // prodidUtc1600_POGO_I_C
//00b2 [PG+] VS2010 (10.0)          // prodidUtc1600_POGO_I_CPP
//00b3 [POC] VS2010 (10.0)          // prodidUtc1600_POGO_O_C
//00b4 [PO+] VS2010 (10.0)          // prodidUtc1600_POGO_O_CPP
//00b5 [AOb] VS2010 (10.10)         // prodidAliasObj1010
//00b6 [PGD] VS2010 (10.10)         // prodidCvtpgd1610
//00b7 [RES] VS2010 (10.10)         // prodidCvtres1010
//00b8 [EXP] VS2010 (10.10)         // prodidExport1010
//00b9 [IMP] VS2010 (10.10)         // prodidImplib1010
//00ba [LNK] VS2010 (10.10)         // prodidLinker1010
//00bb [ASM] VS2010 (10.10)         // prodidMasm1010
//00bc [ C ] VS2010 (10.10)         // prodidUtc1610_C
//00bd [CPP] VS2010 (10.10)         // prodidUtc1610_CPP
//00be [CIL] VS2010 (10.10)         // prodidUtc1610_CVTCIL_C
//00bf [CI+] VS2010 (10.10)         // prodidUtc1610_CVTCIL_CPP
//00c0 [LTC] VS2010 (10.10)         // prodidUtc1610_LTCG_C
//00c1 [LT+] VS2010 (10.10)         // prodidUtc1610_LTCG_CPP
//00c2 [LTM] VS2010 (10.10)         // prodidUtc1610_LTCG_MSIL
//00c3 [PGO] VS2010 (10.10)         // prodidUtc1610_POGO_I_C
//00c4 [PG+] VS2010 (10.10)         // prodidUtc1610_POGO_I_CPP
//00c5 [POC] VS2010 (10.10)         // prodidUtc1610_POGO_O_C
//00c6 [PO+] VS2010 (10.10)         // prodidUtc1610_POGO_O_CPP
//00c7 [AOb] VS2012 (11.0)          // prodidAliasObj1100
//00c8 [PGD] VS2012 (11.0)          // prodidCvtpgd1700
//00c9 [RES] VS2012 (11.0)          // prodidCvtres1100
//00ca [EXP] VS2012 (11.0)          // prodidExport1100
//00cb [IMP] VS2012 (11.0)          // prodidImplib1100
//00cc [LNK] VS2012 (11.0)          // prodidLinker1100
//00cd [ASM] VS2012 (11.0)          // prodidMasm1100
//00ce [ C ] VS2012 (11.0)          // prodidUtc1700_C
//00cf [CPP] VS2012 (11.0)          // prodidUtc1700_CPP
//00d0 [CIL] VS2012 (11.0)          // prodidUtc1700_CVTCIL_C
//00d1 [CI+] VS2012 (11.0)          // prodidUtc1700_CVTCIL_CPP
//00d2 [LTC] VS2012 (11.0)          // prodidUtc1700_LTCG_C
//00d3 [LT+] VS2012 (11.0)          // prodidUtc1700_LTCG_CPP
//00d4 [LTM] VS2012 (11.0)          // prodidUtc1700_LTCG_MSIL
//00d5 [PGO] VS2012 (11.0)          // prodidUtc1700_POGO_I_C
//00d6 [PG+] VS2012 (11.0)          // prodidUtc1700_POGO_I_CPP
//00d7 [POC] VS2012 (11.0)          // prodidUtc1700_POGO_O_C
//00d8 [PO+] VS2012 (11.0)          // prodidUtc1700_POGO_O_CPP
//00d9 [AOb] VS2013 (12.0)          // prodidAliasObj1200
//00da [PGD] VS2013 (12.0)          // prodidCvtpgd1800
//00db [RES] VS2013 (12.0)          // prodidCvtres1200
//00dc [EXP] VS2013 (12.0)          // prodidExport1200
//00dd [IMP] VS2013 (12.0)          // prodidImplib1200
//00de [LNK] VS2013 (12.0)          // prodidLinker1200
//00df [ASM] VS2013 (12.0)          // prodidMasm1200
//00e0 [ C ] VS2013 (12.0)          // prodidUtc1800_C
//00e1 [CPP] VS2013 (12.0)          // prodidUtc1800_CPP
//00e2 [CIL] VS2013 (12.0)          // prodidUtc1800_CVTCIL_C
//00e3 [CI+] VS2013 (12.0)          // prodidUtc1800_CVTCIL_CPP
//00e4 [LTC] VS2013 (12.0)          // prodidUtc1800_LTCG_C
//00e5 [LT+] VS2013 (12.0)          // prodidUtc1800_LTCG_CPP
//00e6 [LTM] VS2013 (12.0)          // prodidUtc1800_LTCG_MSIL
//00e7 [PGO] VS2013 (12.0)          // prodidUtc1800_POGO_I_C
//00e8 [PG+] VS2013 (12.0)          // prodidUtc1800_POGO_I_CPP
//00e9 [POC] VS2013 (12.0)          // prodidUtc1800_POGO_O_C
//00ea [PO+] VS2013 (12.0)          // prodidUtc1800_POGO_O_CPP
//00eb [AOb] VS2013 (12.10)         // prodidAliasObj1210
//00ec [PGD] VS2013 (12.10)         // prodidCvtpgd1810
//00ed [RES] VS2013 (12.10)         // prodidCvtres1210
//00ee [EXP] VS2013 (12.10)         // prodidExport1210
//00ef [IMP] VS2013 (12.10)         // prodidImplib1210
//00f0 [LNK] VS2013 (12.10)         // prodidLinker1210
//00f1 [ASM] VS2013 (12.10)         // prodidMasm1210
//00f2 [ C ] VS2013 (12.10)         // prodidUtc1810_C
//00f3 [CPP] VS2013 (12.10)         // prodidUtc1810_CPP
//00f4 [CIL] VS2013 (12.10)         // prodidUtc1810_CVTCIL_C
//00f5 [CI+] VS2013 (12.10)         // prodidUtc1810_CVTCIL_CPP
//00f6 [LTC] VS2013 (12.10)         // prodidUtc1810_LTCG_C
//00f7 [LT+] VS2013 (12.10)         // prodidUtc1810_LTCG_CPP
//00f8 [LTM] VS2013 (12.10)         // prodidUtc1810_LTCG_MSIL
//00f9 [PGO] VS2013 (12.10)         // prodidUtc1810_POGO_I_C
//00fa [PG+] VS2013 (12.10)         // prodidUtc1810_POGO_I_CPP
//00fb [POC] VS2013 (12.10)         // prodidUtc1810_POGO_O_C
//00fc [PO+] VS2013 (12.10)         // prodidUtc1810_POGO_O_CPP
//00fd [AOb] VS2015+ (14.0+)        // prodidAliasObj1400
//00fe [PGD] VS2015+ (14.0+)        // prodidCvtpgd1900
//00ff [RES] VS2015+ (14.0+)        // prodidCvtres1400
//0100 [EXP] VS2015+ (14.0+)        // prodidExport1400
//0101 [IMP] VS2015+ (14.0+)        // prodidImplib1400
//0102 [LNK] VS2015+ (14.0+)        // prodidLinker1400
//0103 [ASM] VS2015+ (14.0+)        // prodidMasm1400
//0104 [ C ] VS2015+ (14.0+)        // prodidUtc1900_C
//0105 [CPP] VS2015+ (14.0+)        // prodidUtc1900_CPP
//0106 [CIL] VS2015+ (14.0+)        // prodidUtc1900_CVTCIL_C
//0107 [CI+] VS2015+ (14.0+)        // prodidUtc1900_CVTCIL_CPP
//0108 [LTC] VS2015+ (14.0+)        // prodidUtc1900_LTCG_C
//0109 [LT+] VS2015+ (14.0+)        // prodidUtc1900_LTCG_CPP
//010a [LTM] VS2015+ (14.0+)        // prodidUtc1900_LTCG_MSIL
//010b [PGO] VS2015+ (14.0+)        // prodidUtc1900_POGO_I_C
//010c [PG+] VS2015+ (14.0+)        // prodidUtc1900_POGO_I_CPP
//010d [POC] VS2015+ (14.0+)        // prodidUtc1900_POGO_O_C