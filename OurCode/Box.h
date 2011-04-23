#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "..\GraphicsCode\point2d.h"
using namespace std;

class Box 
{
public:
	Point2D frontRight;
	Point2D frontLeft;
	Point2D backRight;
	Point2D backLeft;

	Box(Point2D inFrontRight, Point2D inFrontLeft,
		Point2D inBackRight, Point2D inBackLeft);

	bool hasCollided(Box& remoteBox);
};
#endif