#include <Engine/Core/Logger.h>
#include <iostream>

Engine::Logger::Logger(LogLevel LogLevel): m_LogLevel(LogLevel)
{
}

void Engine::Logger::Log(LogLevel Level, const char* msg) const
{
	const char* LogStr = "Unknown";
		
    switch (Level)
    {
    case LogLevel::Error:
    {
        ++m_errorCount;
        LogStr = "Error";
        break;
    };

    case LogLevel::Warning:
    {
        ++m_warningCount;
        LogStr = "Warning";
        break;
    };

    case LogLevel::Info:
    {
        ++m_infoCount;
        LogStr = "Info";
        break;
    };

    default:
    {
        LogStr = "Unknown";
        break;
    };
    };

	if (Level > m_LogLevel) return;

	auto Stamp = "[WoofEngine " + std::string(LogStr) + "]: ";

	std::clog << Stamp << msg << std::endl;
}
