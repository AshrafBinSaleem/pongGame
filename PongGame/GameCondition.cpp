#include "pch.h"
#include "GameCondition.h"
#include <chrono>
#include <thread>
#include <windows.h>
void GameCondition::start() {

	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds

	int count = 0;
	while (count < 600)
	{
	

		if (GetAsyncKeyState(VK_DOWN) && m_paddle2.getY() < (m_screen.getLength() - m_paddle2.getSize() - 1))
		{

			m_paddle2.moveUp();
		}

		if (GetAsyncKeyState(VK_UP) && m_paddle2.getY() > 1 )
		{
			m_paddle2.moveDown();
			
		}
		//This is w
		if (GetAsyncKeyState(0x53) && m_paddle1.getY() < (m_screen.getLength() - m_paddle1.getSize() - 1))
		{
			m_paddle1.moveUp();
		}
		//This is s
		if (GetAsyncKeyState(0x57) && m_paddle1.getY() > 1)
		{
			m_paddle1.moveDown();

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



GameCondition::GameCondition() : m_screen(50, 50), 	m_paddle1(5, 21, 5, m_screen), m_paddle2(45, 21, 5, m_screen), m_ball(23, 23, -1, 0, m_screen)
{
 
}


GameCondition::~GameCondition()
{
}
