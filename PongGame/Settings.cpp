#include "pch.h"
#include "Settings.h"

Settings::Settings(int game_Rounds, int screen_Size, int paddle_Size, char paddle_Pattern)
{
	gameRounds = game_Rounds;
	screenSize = screen_Size;
	paddleSize = paddle_Size;
	paddlePattern = paddle_Pattern;
}

Settings::~Settings()
{
}
