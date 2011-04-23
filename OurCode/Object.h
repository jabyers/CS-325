#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include "Object.h"
#include "..\GraphicsCode\vector2d.h"
#include "..\GraphicsCode\point2d.h"
using namespace std;

class Object 
{
public:
	// List of class variables
	int speed;
	int maxSpeed;
//	double xcoord;
//	double ycoord;
	Point2D location;
	Vector2D direction;
	int height;
	int width;
	int length;
	bool alive;
	bool isKillable;
		
	// List of Methods
	Object();
	Object(Object& copyObject);
	Object(int dSpeed, Vector2D dDirection, Point2D dLocation, bool dKillable, 
		int dmaxSpeed, int dHeight, int dWidth, int dLength, bool dAlive);
	~Object();

	int getSpeed();
	bool setSpeed(int newSpeed);



	Point2D getLocation();
	bool setLocation(float newX, float newY);
	bool setLocation(Point2D newLocation);

	Vector2D getDirection();
	bool setDirection(Vector2D newDirection);

	int getHeight();
	bool setHeight(int newHeight);

	int getWidth();
	bool setWidth(int newWidth);

	int getLength();
	bool setLength(int newLength);


	void move();
	void shoot();
	bool die();
};
#endif