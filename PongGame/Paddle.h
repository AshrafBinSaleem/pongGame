#pragma once
#include <iostream>
#include <sstream>
#include "coordinate.h"
#include "Screen.h"
#include "Ball.h"

class Paddle : public coordinate
{
	//Size (optional)
	int m_size;
	//Paddle
	std::string m_name;
	//Pattern as in design of paddle
	char m_pattern;
public:
	Paddle();
	Paddle(int x, int y, int size, Screen sn);
	~Paddle();
	
	int getSize() { return m_size; }
	std::string getName() { return m_name; }
	char getPattern() { return m_pattern; }
	
	void paddleBounce(Ball &ball);

	void setSize(int _size) { m_size = _size; }
	void setName(std::string _name) { m_name = _name; }
	void setPattern(char _pattern) { m_pattern = _pattern; }


};

