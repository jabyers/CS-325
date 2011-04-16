#include <iostream>
#include "Object.h"


	
	Object::Object()
	{
	}

	Object::Object(int dSpeed, double dDirection, double dX, double dY, bool dKillable, int dmaxSpeed, int dHeight, int dWeigth, bool dAlive)
	{
		speed = dSpeed;
		direction = dDirection;
		xcoord = dX;
		ycoord = dY;
		isKillable = dKillable;
		maxSpeed = dmaxSpeed;
		height = dHeight;
		width = dWeigth;
		alive = dAlive;

	}



	//Sets the speed of the Object
	void Object::setSpeed(int newSpeed)
	{
		speed = newSpeed;
	}
	//Returns the speed of the Object
	int Object::getSpeed()
	{
		return speed;
	}
	//Sets the direction of the Object
	void Object::setDirection(double newDirection)
	{
		direction = newDirection;
	}
	//Gets the Direction of the Object
	double Object::getDirection()
	{
		return direction;
	}
	void Object::Move()
	{

	}
	void Object::Shoot()
	{
		
	}
	void Object::Die()
	{
		if(isKillable == true)
		{
		delete this;
		}
	}

	//Sets the X coordinate for the location of the object.
	void Object::setX(double newX)
	{
		xcoord = newX;
	}
	//Returns the X coordinate of the object
	double Object::getX()
	{
		return xcoord;
	}
	//Sets the Y coordinate for the location of the object
	void Object::setY(double newY)
	{
		ycoord = newY;
	}
	//Returns the X coordinate of the object.
	double Object::getY()
	{
		return ycoord;
	}

	Object::~Object()
	{
		Die();
	}