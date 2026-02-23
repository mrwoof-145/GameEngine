#pragma once
#include <Engine/Core/Base.h>
#include <Engine/Graphics/RenderSystem.h>

namespace Engine
{
	class GraphicsEngine final: public Base
	{
	public:
		GraphicsEngine();
		virtual ~GraphicsEngine();
	private:
		std::unique_ptr<RenderSystem> m_renderSystem{};
	};
}
