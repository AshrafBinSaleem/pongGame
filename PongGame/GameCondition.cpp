#include "pch.h"
#include "GameCondition.h"
#include <chrono>
#include <thread>

void GameCondition::start() {

	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds

	int count = 0;
	while (count < 200)
	{
	//	//call isCollision here
		if (isCollieded()) {
			m_paddle1.paddleBounce(m_ball);
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
	return false;
}



GameCondition::GameCondition() : m_screen(50, 50), 	m_paddle1(5, 21, 5, m_screen), m_paddle2(45, 21, 5, m_screen), m_ball(23, 23, -1, 0, m_screen)
{

}


GameCondition::~GameCondition()
{
}
