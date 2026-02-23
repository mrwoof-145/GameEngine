//Window.h
#pragma once
#include <Engine/Core/Base.h>
#include <stdexcept>
#include <Windows.h>

namespace Engine
{
	class Window: public Base
	{
	public:
		Window(int height = 720, int width = 1280, const wchar_t* title = L"WoofEngine");
		virtual ~Window() override;

	private:
		void* m_handle{};
	};
}
