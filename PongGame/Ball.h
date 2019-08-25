#pragma once
#include "coordinate.h"
#include "velocity.h"
#include <iostream>
#include <sstream>
#include "Screen.h"

class Ball : public coordinate
{
	
public:
	Ball();
	
	Ball(int x,int y, int vx, int vy, Screen sn);

	~Ball();
	velocity v;
	void updatePosition() {
		changePosition(v, 1);
	}

};

