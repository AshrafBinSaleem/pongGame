#pragma once
#include <iostream>
class Paddle
{
	//Position (X,Y)
	int x;
	int y;
	//Size (optional)
	int size;
	//Paddle
	std::string name;
	//Pattern as in design of paddle
	char pattern;
public:
	Paddle() 
	{
		x = 0;
		y = 0;
		size = 0;
		name = "test pong";
		pattern = 'U';
	}
	~Paddle();
};

