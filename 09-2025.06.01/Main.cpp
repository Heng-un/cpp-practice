#include <iostream>

class GameLog
{
public:
	enum  LogLevel
	{
		LevelError=0,
		LevelWarning,
		LevelInfo
	};

private:
	static LogLevel m_Loglevel;

public:
	static void SetLevel(LogLevel level)
	{
		m_Loglevel = level;
	}

	static void Error(const char* message)
	{
		if (m_Loglevel >= LevelError)
			std::cout << "[Error]: " << message << std::endl;
	}

	static void Warning(const char* message)
	{
		if (m_Loglevel >= LevelWarning)
			std::cout << "[Warning]: " << message << std::endl;
	}

	static void Info(const char* message)
	{
		if (m_Loglevel >= LevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};

GameLog::LogLevel GameLog::m_Loglevel = GameLog::LevelInfo;

int main()
{
	GameLog::SetLevel(GameLog::LevelWarning);
	GameLog::Error("Something went wrong.");
	GameLog::Warning("Be careful!");
	GameLog::Info("Everything is OK.");
	
	std::cin.get();
}
