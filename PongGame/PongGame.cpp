// PongGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Paddle.h"
#include <string>

int main()
{
	
	Paddle paddle(0,3);
	std::cout << paddle.displayCords();

	while (true)
	{
		std::string userInput;
		std::cin >> userInput;
		if (userInput == "w") {
			
			paddle.moveUp();
		}
		else if (userInput == "s") {
			paddle.moveDown();
		}
		else {
			std::cout << "Wrong input" << std::endl;
		}
		std::cout << paddle.displayCords();
	}
}

