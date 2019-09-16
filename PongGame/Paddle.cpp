#include "pch.h"
#include "Paddle.h"
#include "Screen.h"

Paddle::Paddle() : coordinate()
{
	m_size = 1;
	m_name = "paddle";
	m_pattern = '|';
}

Paddle::Paddle(int _x, int _y,int size, Screen sn) : coordinate(_x, _y, sn.getWidth(), sn.getLength()), pv()
{
	m_size = size;
	m_name = "paddle";
	m_pattern = '|';
}


Paddle::~Paddle()
{
}

void Paddle::paddleBounce(Ball &ball)
{
	int middlePointY = y + (m_size + 1) / 2;
	
	if (ball.getY() < middlePointY) { // if ball hits the top 2 
		// move up 45 degree
		ball.v.setVX(ball.v.getVX() * -1);
		ball.v.setVY(ball.v.getVY() - ball.v.getVX());
	}
	else if (ball.getY() == middlePointY) { //if else ball hit the middle move 
		ball.v.setVX(ball.v.getVX() * -1);
	}
	else if (ball.getY() > middlePointY) { // if else  ball hits bottom 2
		//	move down 45 degree
		ball.v.setVX(ball.v.getVX() * -1);
		ball.v.setVY(ball.v.getVY() + ball.v.getVX());
	}
}

void Paddle::moveUp() 
{ 
	if (pv.getVY() < 0)
		pv.setVY(0);
	
  pv.increaseSpeedVY(); 
  updatePosition(); 
  if (y <= 0) {
	  y = 3;
  }
}

void Paddle::moveDown() { 
	if (pv.getVY() > 0)
		pv.setVY(0);
	pv.decreaseSpeedVY(); 
	updatePosition(); 
	if (y > 50) {
		y = 48;
	}
}



