#include "pch.h"
#include "Paddle.h"


Paddle::Paddle()
{
	x = 0;
	y = 0;
	size = 1;
	name = "paddle";
	pattern = '|';
}

Paddle::Paddle(int _x, int _y) : Paddle()
{
	x = _x;
	y = _y;
}


Paddle::~Paddle()
{
}

std::string Paddle::displayCords() {
	std::stringstream tmp;
	tmp << "( " << x << " , " << y << " )" << std::endl;;
	return tmp.str();
}

void Paddle::moveUp() {
	y--;
}
void Paddle::moveDown() {
	y++;
}