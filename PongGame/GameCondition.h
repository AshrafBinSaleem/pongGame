#include <string>
#include <conio.h>

#include "Paddle.h"
#include "Ball.h"
#include "Screen.h"

class GameCondition
{
public:
	GameCondition();
	~GameCondition();
	
	//Starting Game 
	void start();

	//Method For Collision System Check
	bool isCollieded();

	//Propertise 
	Screen m_screen;
	Paddle m_paddle1;
	Paddle m_paddle2;
	Ball m_ball;
	
};

