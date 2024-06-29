#pragma once
#include <d3d9.h>

namespace gui
{
	// constan win size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;

	//winapi winvars
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	//point for window movement
	inline POINTS position = { };

	//direct x statewars
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	//handle window creation and desctruction
	void CreateHWindow(
		const char* windowname,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;

	//handle device creation and destruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	//handle imgui creaton and destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}