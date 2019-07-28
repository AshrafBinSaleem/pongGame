#pragma once
#include "coordinate.h"
#include "velocity.h"
#include <iostream>
#include <sstream>

class Ball
{
	coordinate coor;
	velocity v;
public:
	Ball();
	~Ball();
	
	void updatePosition() {
		coor.changePosition(v, 1);
	}

	std::string displayCords();
};

