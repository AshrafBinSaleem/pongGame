#include "pch.h"
#include "GameCondition.h"
#include <chrono>
#include <thread>
#include <windows.h>
#include <iostream>
void GameCondition::start() {

	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds
	int p1Score = 0;
	int p2Score = 0;
	int count = 0;
	while (true)
	{
	

		if (GetAsyncKeyState(VK_DOWN) && m_paddle2.getY() < (m_screen.getLength() - m_paddle2.getSize() - 1))
		{

			m_paddle2.moveDown();
		}

		if (GetAsyncKeyState(VK_UP) && m_paddle2.getY() > 1 )
		{
			m_paddle2.moveUp();
			
		}
		//This is w
		if (GetAsyncKeyState(0x53) && m_paddle1.getY() < (m_screen.getLength() - m_paddle1.getSize() - 1))
		{
			m_paddle1.moveDown();
		}
		//This is s
		if (GetAsyncKeyState(0x57) && m_paddle1.getY() > 1)
		{
			m_paddle1.moveUp();

		}
	//	//call isCollision here
		if (isCollieded()) {
			m_paddle1.paddleBounce(m_ball);
		}

		else if (isCollieded()) {
			m_paddle2.paddleBounce(m_ball);
		}
	//	m_ball.updatePosition();
	//	std::cout << m_ball.displayCords() << "\t" << m_paddle.displayCords() << std::endl;
		
		m_screen.draw(m_ball, m_paddle1, m_paddle2);
		if (m_ball.getX() == 0) {
			p2Score++;
			gameReset(1);
		}
		if (m_ball.getX() == 49) {
			p1Score++;
			gameReset(-1);
		}
		if (p1Score == m_settings.gameRounds || p2Score == m_settings.gameRounds) {
			if (p1Score == m_settings.gameRounds) {
				std::cout << "Congrats Player 1, you have won the game !" << std::endl;
			}
			if (p2Score == m_settings.gameRounds) {
				std::cout << "Congrats Player 2, you have won the game !" << std::endl;
			}
			std::cout << "Press Q to quit the game Or Press R to reset the game" << std::endl;
			char in = getchar();
			if (in == 'q' || in == 'Q') {
				exit(0);
			}
			if (in == 'r' || in == 'R') {
				gameReset(-1);
				p1Score = 0;
				p2Score = 0;
			}
			
		}
		std::cout << " " << std::endl;
		std::cout << p1Score << " : " << p2Score << std::endl;
		m_ball.updatePosition();

		sleep_for(nanoseconds(100000000));

		count++;
	}
}

bool GameCondition::isCollieded()
{
	for (int i = 0; i < m_paddle1.getSize(); i++) {
		if (m_ball.getX() == m_paddle1.getX() && m_ball.getY() == m_paddle1.getY() + i) {
			return true;
		}
	}

	for (int i = 0; i < m_paddle2.getSize(); i++) {
		if (m_ball.getX() == m_paddle2.getX() && m_ball.getY() == m_paddle2.getY() + i) {
			return true;
		}
	}
	return false;
}

void GameCondition::gameReset(int vx) {
	m_paddle1.setY(21);
	m_paddle2.setY(21);
	m_ball.setY(23);
	m_ball.setX(23);
	m_ball.v.setVX(vx);
	m_ball.v.setVY(0);
}
GameCondition::GameCondition() :
	m_settings(5, 50, 5, '*'),
	m_screen(m_settings.screenSize, m_settings.screenSize), 
	m_paddle1(5, m_settings.screenSize/2 - m_settings.paddleSize, m_settings.paddleSize, m_screen), 
	m_paddle2(45, m_settings.screenSize / 2 - m_settings.paddleSize, m_settings.paddleSize, m_screen),
	m_ball(m_settings.screenSize /2 , m_settings.screenSize /2, -1, 0, m_screen)
{
	
}


GameCondition::~GameCondition()
{
}
