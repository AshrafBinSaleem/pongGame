#include "pch.h"
#include "Paddle.h"


Paddle::Paddle() : coordinate()
{
	size = 1;
	name = "paddle";
	pattern = '|';
}

Paddle::Paddle(int _x, int _y, Screen sn) : coordinate(_x, _y, sn.getWidth(), sn.getLength())
{
	size = 1;
	name = "paddle";
	pattern = '|';
}


Paddle::~Paddle()
{
}

std::string Paddle::displayCords() {
	std::stringstream tmp;
	tmp << "( " << x << " , " << y << " )" << std::endl;;
	return tmp.str();
}

