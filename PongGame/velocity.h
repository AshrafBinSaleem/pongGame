#pragma once
class velocity
{
private:
	int vx;//Represents X direction velocity
	int vy;//Represents y direction velocity
public:
	int getVX(){
		return vx;
	}
	int getVY() {
		return vy;
	}


	void setVY(int _setVY) { vy = _setVY; }
	void setVX(int _setVX) { vx = _setVX; }

	velocity();
	~velocity();
};

