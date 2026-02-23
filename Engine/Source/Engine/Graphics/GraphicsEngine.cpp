#include <Engine/Graphics/GraphicsEngine.h>

Engine::GraphicsEngine::GraphicsEngine()
{
	m_renderSystem = std::make_unique<RenderSystem>();
}

Engine::GraphicsEngine::~GraphicsEngine()
{
}
