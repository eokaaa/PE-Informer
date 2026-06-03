#pragma once

#include "../../imgui/imgui.h"
#include "../../imgui/imgui_impl_win32.h"
#include "../../imgui/imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>

#pragma comment(lib, "d3d11.lib")

namespace GUI
{
	int InitGUI();

	inline ImFont* NunitoFont;
	inline ImFont* MaterialSymbolsFont;
}