#include <Engine/Game/Game.h>
#include <Engine/Core/Logger.h>
#include <Engine/Graphics/GraphicsEngine.h>
#include <Engine/Window/Window.h>

Engine::Game::Game(int WindowHeight, int WindowWidth, const wchar_t* WindowTitle)
{
	m_loggerPtr = std::make_unique<Logger>(Engine::Logger::LogLevel::Info);
	m_graphicsEngine = std::make_unique<GraphicsEngine>();
	m_display = std::make_unique<Window>(WindowHeight, WindowWidth, WindowTitle);

	m_loggerPtr->Log(Engine::Logger::LogLevel::Info, "Pener");
}

Engine::Game::~Game()
{
}
