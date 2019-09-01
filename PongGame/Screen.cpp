#include "pch.h"
#include "Screen.h"
#include <string>
#include <stdlib.h> 

void Screen::printDisplay()
{
	for (int i = 0; i < length; i++) {
		std::cout << display[i] << std::endl;

	}
}


Screen::Screen() : width(0), length(0) {}

Screen::Screen(size_t w, size_t l) : width(w), length(l), display(l, std::string(w, ' ')) {
	//Assigning the top and bottom border
	for (int i = 0; i < width; i++) {
		display[0][i] = '#';
		display[length - 1][i] = '#';
	}
}

Screen::~Screen()
{
}

void Screen::draw(coordinate ball, Paddle paddle1, Paddle paddle2) {
	system("CLS");

	std::string temp(width, ' ');
	temp[0] = '#';
	temp[width - 1] = '#';

	for (int i = 1; i < length-1; i++) {
		display[i] = temp;
	}

	//Printing ball
	display[ball.getY()][ball.getX()] = 'O';

	//Printing paddles
	for (int i = 0; i < paddle1.getSize(); i++) {
		display[paddle1.getY() + i][paddle1.getX()] = '|';
		display[paddle2.getY() + i][paddle2.getX()] = '|';
	}
	
	printDisplay();
}

