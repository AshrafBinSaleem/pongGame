#pragma once
#include "coordinate.h"
#include "velocity.h"
#include <iostream>
#include <sstream>
#include "Screen.h"

class Ball : public coordinate
{
	velocity v;
public:
	Ball();
	
	Ball(int x,int y, int vx, int vy, Screen sn);

	~Ball();
	
	void updatePosition() {
		changePosition(v, 1);
	}

	std::string displayCords();
};

