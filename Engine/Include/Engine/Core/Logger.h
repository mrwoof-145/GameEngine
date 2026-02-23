#pragma once

namespace Engine
{
	class Logger
	{
		
	public:
		enum class LogLevel
		{
			Error = 0,
			Warning,
			Info
		};
		explicit Logger(LogLevel LogLevel = LogLevel::Error);
		void Log(LogLevel Level, const char* msg) const;
	private:
		LogLevel m_LogLevel = LogLevel::Error;
		mutable int m_warningCount{0};
		mutable int m_errorCount{0};
		mutable int m_infoCount{0};
	};
}
