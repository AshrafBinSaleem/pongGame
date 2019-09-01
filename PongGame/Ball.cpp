#include "pch.h"
#include "Ball.h"


Ball::Ball() 
{
	v.setVX(1);
	v.setVY(1);
}

Ball::Ball(int x, int y, int vx, int vy, Screen sn) : coordinate(x, y, sn.getWidth(), sn.getLength())
{
	v.setVX(vx);
	v.setVY(vy);
}

Ball::~Ball()
{
}


