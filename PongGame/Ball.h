#ifndef BALL_H
#define BALL_H

#include "coordinate.h"
#include "velocity.h"
#include <iostream>
#include <sstream>
#include "Screen.h"

class Screen;

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

#endif