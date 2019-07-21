#pragma once
#include <iostream>
#include <sstream>

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
	Paddle();
	Paddle(int x, int y);
	~Paddle();

	int getX() { return x; }
	int getY() { return y; }
	int getSize() { return size; }
	std::string getName() { return name; }
	char getPattern() { return pattern; }

	std::string displayCords();

	void moveUp();
	void moveDown();

	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	void setSize(int _size) { size = _size; }
	void setName(std::string _name) { name = _name; }
	void setPattern(char _pattern) { pattern = _pattern; }


};

