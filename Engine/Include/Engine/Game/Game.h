#pragma once
#include <Engine/Core/Base.h>
#include <Engine/Graphics/GraphicsEngine.h>
#include <Engine/Core/Logger.h>
#include <Engine/Window/Window.h>
#include <memory>
#include <Windows.h>

namespace Engine
{
	class Game: public Base
	{
	public:
		Game(int WindowHeight = 720, int WindowWidth = 1280, const wchar_t* WindowTitle = L"WoofEngine");
		virtual ~Game() override;

		virtual void Run() final;
	private:
		std::unique_ptr<Logger> m_loggerPtr{};
		std::unique_ptr<GraphicsEngine> m_graphicsEngine{};
		std::unique_ptr<Window> m_display{};
		bool m_isRunning{ false };
	};
}
