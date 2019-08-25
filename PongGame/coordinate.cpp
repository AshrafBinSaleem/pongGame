#include "pch.h"
#include "coordinate.h"


coordinate::coordinate(): x(0), y(0)
{
}

coordinate::coordinate(int _x, int _y, int w, int l) : x(_x), y(_y), width(w), lenght(l){

}
coordinate::~coordinate()
{
}

void coordinate::checkBoundaryBounce(velocity& c) {
	if(x >= width) {
		x = width - 1;
		c.setVX(c.getVX() * -1);
	}

	if (y >= lenght) {
		y = width - 1;
		c.setVY(c.getVY() * -1);

	}

	if (x < 0) {
		x = 0;
		c.setVX(c.getVX() * -1);

	}

	if (y < 0) {
		y = 0;
		c.setVY(c.getVY() * -1);

	}
}

void coordinate::checkBoundary() {
	if (x >= width) {
		x = width - 1;
	}

	if (y >= lenght) {
		y = width - 1;
	}

	if (x < 0) {
		x = 0;
	}

	if (y < 0) {
		y = 0;
	}
}

void coordinate::changePosition(velocity& c, int dt)
{
	x = x + c.getVX() * dt;
	y = y + c.getVY() * dt;
	checkBoundaryBounce(c);
	
}

void coordinate::moveUp() {
	y--;
	checkBoundary();
}
void coordinate::moveDown() {
	y++;
	checkBoundary();
}

std::string coordinate::displayCords() {
	std::stringstream tmp;
	tmp << "( " << x << " , " << y << " )" ;
	return tmp.str();
}
