// PongGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Paddle.h"
#include "Ball.h"
#include <string>
#include <conio.h>
#include "Screen.h"
int main()
{
	Screen sn(5, 5);
	Paddle paddle(0,3,sn);
	//std::cout << paddle.displayCords();
	
	Ball b(2, 2, 1, 1, sn);
	int count = 0;
	while (count < 5)
	{
		//Paddle working movement code.
		//char in = ' ';
		//in = _getch();
		//if (in == 'w') {

		//	paddle.moveUp();
		//}
		//else if (in == 's') {
		//	paddle.moveDown();
		//}
		//else {
		//	std::cout << "Wrong input" << std::endl;
		//}
		//std::cout << paddle.displayCords(); 
		b.updatePosition();
		std::cout << b.displayCords();
		count++;
	}
}

