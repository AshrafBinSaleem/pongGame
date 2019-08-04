#pragma once
#include <iostream>
#include <sstream>
#include "coordinate.h"
#include "Screen.h"

class Paddle : public coordinate
{
	//Size (optional)
	int size;
	//Paddle
	std::string name;
	//Pattern as in design of paddle
	char pattern;
public:
	Paddle();
	Paddle(int x, int y, Screen sn);
	~Paddle();
	
	int getSize() { return size; }
	std::string getName() { return name; }
	char getPattern() { return pattern; }

	std::string displayCords();

	

	void setSize(int _size) { size = _size; }
	void setName(std::string _name) { name = _name; }
	void setPattern(char _pattern) { pattern = _pattern; }


};

