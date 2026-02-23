#pragma once
#include <Engine/Core/Logger.h>
#include <memory>
#include <stdexcept>

namespace Engine
{
	class Base
	{
	public:
		Base();
		virtual ~Base();
	protected:
		Base(const Base&) = delete;
		Base(Base&&) = delete;
		Base& operator = (const Base&) = delete;
		Base& operator = (Base&&) = delete;
	};
}
