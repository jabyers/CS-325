/**
 * file: Point2D.h
 * version: 1.0
 * author: djb
 * date 23Nov07
 */

#pragma once

#include <string>
using namespace std;

/**
 * this class is used in the graphics portion of the tank project
 */

class Point2D
{
private:
	float x;
	float y;

public:
	Point2D(void);
	Point2D(const Point2D &p);
	Point2D(float x, float y);
	void setX(float x);
	void setY(float y);
	void setXY(float x, float y);
	float getX();
	float getY();
	string toString();

	/**
     * read the first part of a string to set the value, and modify the string removing the 
     * value read.
     * @param s - the string to read
     */
	void setFromString(string &s);
};
