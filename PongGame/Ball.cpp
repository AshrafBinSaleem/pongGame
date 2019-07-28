#include "pch.h"
#include "Ball.h"


Ball::Ball()
{
	v.setVX(1);
	v.setVY(1);
}


Ball::~Ball()
{
}

std::string Ball::displayCords() {
	std::stringstream tmp;
	tmp << "( " << coor.x << " , " << coor.y << " )" << std::endl;;
	return tmp.str();
}
