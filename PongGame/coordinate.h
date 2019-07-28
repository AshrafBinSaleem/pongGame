#pragma once
#include "velocity.h"

class coordinate
{
public:
	int x;
	int y;
	coordinate();
	~coordinate();

	//c represents speed and dt represents data time.
	void changePosition(velocity c, int dt);
};

