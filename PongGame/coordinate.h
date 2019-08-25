#pragma once
#include <iostream>
#include <sstream>
#include "velocity.h"

class coordinate
{
protected:
	int x;
	int y;
	int width;
	int lenght;

public:
	void moveUp();
	void moveDown();
	void checkBoundary();
	void checkBoundaryBounce(velocity& c);
	coordinate();
	coordinate(int _x, int _y, int w, int l);
	~coordinate();
	
	int getX() { return x; }
	int getY() { return y; }

	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	//c represents speed and dt represents data time.
	void changePosition(velocity& c, int dt);

	std::string displayCords();
};

