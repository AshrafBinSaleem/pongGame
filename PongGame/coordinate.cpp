#include "pch.h"
#include "coordinate.h"


coordinate::coordinate(): x(0), y(0)
{
}


coordinate::~coordinate()
{
}

void coordinate::changePosition(velocity c, int dt)
{
	x = x + c.getVX() * dt;
	y = y + c.getVY() * dt;
}
