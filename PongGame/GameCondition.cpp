#include "pch.h"
#include "GameCondition.h"


void GameCondition::start() {
	int count = 0;
	while (count < 50)
	{
		//call isCollision here
		if (isCollieded()) {
			m_paddle.paddleBounce(m_ball);
		}

		m_ball.updatePosition();
		std::cout << m_ball.displayCords() << "\t" << m_paddle.displayCords() << std::endl;
		count++;
	}
}

bool GameCondition::isCollieded()
{
	for (int i = 0; i < m_paddle.getSize(); i++) {
		if (m_ball.getX() == m_paddle.getX() && m_ball.getY() == m_paddle.getY() + i) {
			return true;
		}
	}
	return false;
}



GameCondition::GameCondition() : m_screen(50, 50), m_paddle(5, 21, 5, m_screen), m_ball(23, 23, -1, 0, m_screen)
{

}


GameCondition::~GameCondition()
{
}
