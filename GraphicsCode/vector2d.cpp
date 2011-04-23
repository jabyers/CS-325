/**
 * file: Vector2D.h
 * version: 0.91
 * author: djb
 * date 23Nov07
 */

/* fixed normalization problem in setters */
/* still need to eat characters on string set */
/* need to implement the setAngle and getAngle methods */

// not done:
// eat the characters read in setFromString

#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D(void)
{
	x = 1.0;
	y = 0.0;
}

Vector2D::Vector2D(const Vector2D &v)
{
	this->x = v.x;
	this->y = v.y;
	normalize();
}

Vector2D::Vector2D(float x, float y)
{
	this->x = x;
	this->y = y;
	normalize();
}

void Vector2D::setXY(float x, float y)
{
	this->x = x;
	this->y = y;
	normalize();
}

float Vector2D::getX()
{
	return x;
}

float Vector2D::getY()
{
	return y;
}

void Vector2D::rotate(float angle)
{
	setAngle(atan2(x, y)+angle);
}

void Vector2D::setAngle(float angle)
{
	x = cos(angle);
	y = sin(angle);
}


float Vector2D::getAngle()
{
	return atan2(y, x);
}

void Vector2D::normalize()
{
	double d;

	d = sqrt(x*x+y*y);
	x /= d;
	y /= d;
}

const int BUFF_SIZE = 51;

std::string Vector2D::toString()
{
	char buff[BUFF_SIZE+1];

	sprintf_s(buff, BUFF_SIZE, "x:%g,y:%g", x, y);
	std::string s(buff);
	
	return s;
}

void Vector2D::setFromString(std::string &s)
{
	char buff[BUFF_SIZE+1];
	int numCharRead;

	strcpy_s(buff, BUFF_SIZE, s.c_str());
	numCharRead = sscanf_s(buff, "x:%g,y:%g", &x, &y);
	normalize();

	//eat the characters read

}

float Vector2D::dotProduct(Vector2D &v)
{
	return x * v.getX() + y * v.getY();
}
