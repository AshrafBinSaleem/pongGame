#ifndef SCREEN_H
#define SCREEN_H

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "coordinate.h"
#include "Paddle.h"

class Paddle;
class Ball;

class Screen
{
private:
	std::vector<std::string> display;
public:

	Screen();
	size_t width;
	size_t length;

	Screen(size_t w, size_t l);

	int getWidth() { return width; }
	int getLength() { return length;}

	void setWidth(size_t w) { width = w; }
	void setLength(size_t l) { length = l; }
	~Screen();

	void printDisplay();
	void draw(coordinate ball, Paddle paddle1, Paddle paddle2);
};


#endif