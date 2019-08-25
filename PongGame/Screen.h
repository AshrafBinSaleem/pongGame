#pragma once
class Screen
{
public:
	Screen();
	size_t width;
	size_t length;

	void draw() {};

	Screen(size_t w, size_t l);

	int getWidth() { return width; }
	int getLength() { return length;}

	void setWidth(size_t w) { width = w; }
	void setLength(size_t l) { length = l; }
	~Screen();

	void draw()
};
