#include <iostream>
#include "Object.h"

using namespace std;

	//Default Constructor
	Object::Object()
	{
		speed = 0;
		maxSpeed = 0;
		xcoord = 0;
		ycoord = 0;
		direction = 0;
		height = 0;
		width = 0;
		alive = 0;
		isKillable = 0;
	}

	//Initializing Constructor
	Object::Object(int dSpeed, double dDirection, double dX, double dY, 
		bool dKillable, int dmaxSpeed, int dHeight, int dWeigth, bool dAlive)
	{
		speed = dSpeed;
		maxSpeed = dmaxSpeed;
		xcoord = dX;
		ycoord = dY;
		direction = dDirection;
		height = dHeight;
		width = dWeigth;
		alive = dAlive;
		isKillable = dKillable;
	}

	//Object destructor
	Object::~Object()
	{
		Die();
	}

	//Returns the speed of the Object
	int Object::getSpeed()
	{
		return speed;
	}

	//Sets the speed of the Object
	void Object::setSpeed(int newSpeed)
	{
		speed = newSpeed;
	}

	//Gets the X coordinate of the object
	double Object::getLocation()
	{
		return xcoord;
	}

	//Sets the X coordinate for the location of the object.
	void Object::setLocation(double newX, double newY)
	{
		xcoord = newX;
	}

	//Gets the direction of the Object
	double Object::getDirection()
	{
		return direction;
	}

	//Sets the direction of the Object
	void Object::setDirection(double newDirection)
	{
		direction = newDirection;
	}

	double getHeight()
	{
		return height;
	}
	void setHeight(int newHeight)
	{
		height = newHeight;
	}

	void Object::Move(int speed)
	{
		//vector * speed = vector with some length to calc new x and y
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