#pragma once
class Settings
{
public:
	Settings(int, int, int, char);
	~Settings();

	int gameRounds;
	int screenSize;
	int paddleSize;
	char paddlePattern;
};

