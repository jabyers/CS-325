/**
 * file: Point2D.cpp
 * version: 0.91
 * author: djb
 * date 28Nov07
 */

/* removed limits on x and y values */
/* still need to eat characters from string input */

// not done:
// modify the setFromString parameter

#include "Point2D.h"

Point2D::Point2D(void)
{
	x = 0.0;
	y = 0.0;
}

Point2D::Point2D(const Point2D &p)
{
	x = p.x;
	y = p.y;
}

Point2D::Point2D(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Point2D::setX(float x)
{
	this->x = x;
}

void Point2D::setY(float y)
{
	this->y = y;
}

void Point2D::setXY(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point2D::getX()
{
	return x;
}

float Point2D::getY()
{
	return y;
}

const int BUFF_SIZE = 51;

string Point2D::toString()
{
	char buff[BUFF_SIZE+1];

	sprintf_s(buff, BUFF_SIZE, "x:%g,y:%g", x, y);
	string s(buff);
	
	return s;
}

void Point2D::setFromString(string &s)
{
	char buff[BUFF_SIZE+1];
	int numCharRead;

	strcpy_s(buff, BUFF_SIZE, s.c_str());
	numCharRead = sscanf_s(buff, "x:%g,y:%g", &x, &y);
	//eat the characters read

}