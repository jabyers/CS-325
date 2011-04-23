#include <iostream>
#include "..\GraphicsCode\vector2d.h"
#include "Box.h"

using namespace std;

Box::Box(Point2D inFrontRight, Point2D inFrontLeft,
		 Point2D inBackRight, Point2D inBackLeft)
{
	frontRight = inFrontRight;
	frontLeft = inFrontLeft;
	backRight = inBackRight;
	backLeft = inBackLeft;
}

bool Box::hasCollided(Box& remoteBox)
{
	// dot product
	// if 1 is negative, then outside
	// if 1 0 then on edge
	// if all positive then inside

	Point2D currentPoint[4] = {
		remoteBox.frontRight,
		remoteBox.frontLeft,
		remoteBox.backRight,
		remoteBox.backLeft
	};

	for (int i = 0; i < 4; i++)
	{
		Vector2D rectangleVector1(frontRight.getX() - backRight.getX(), frontRight.getY() - backRight.getY());
		Vector2D rectangleVector2(frontLeft.getX() - frontRight.getX(), frontLeft.getY() - frontRight.getY());
		Vector2D rectangleVector3(backRight.getX() - backLeft.getX(), backRight.getY() - backLeft.getY());
		Vector2D rectangleVector4(backLeft.getX() - frontLeft.getX(), backLeft.getY() - frontLeft.getY());

		Vector2D pointVector1(currentPoint[i].getX() - frontRight.getX(), currentPoint[i].getY() - frontRight.getY());
		Vector2D pointVector2(currentPoint[i].getX() - frontLeft.getX(), currentPoint[i].getY() - frontLeft.getY());
		Vector2D pointVector3(currentPoint[i].getX() - backRight.getX(), currentPoint[i].getY() - backRight.getY());
		Vector2D pointVector4(currentPoint[i].getX() - backLeft.getX(), currentPoint[i].getY() - backLeft.getX());

		if (rectangleVector1.dotProduct(pointVector1) >= 0 &&
			rectangleVector2.dotProduct(pointVector2) >= 0 &&
			rectangleVector3.dotProduct(pointVector3) >= 0 &&
			rectangleVector4.dotProduct(pointVector4) >= 0)
			return true;
	}
	return false;

	/*
	frontRight.getX()
	frontRight.getY()
	frontLeft.getX()
	frontLeft.getY()
	backRight.getX()
	backRight.getY()
	backLeft.getX()
	backLeft.getY()
	*/

	//X1*Y1+X2*Y2

}