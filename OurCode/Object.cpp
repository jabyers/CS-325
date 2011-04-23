#include <iostream>
#include "Object.h"
#include "..\GraphicsCode\vector2d.h"
#include "..\GraphicsCode\point2d.h"

using namespace std;

	/**
	 *	Default Constructor.
	 */
	Object::Object()
	{

	}

	/**
	 *	Copy Constructor.
	 */
	Object::Object(Object& copyObject)
	{
		speed = copyObject.speed;
		maxSpeed = copyObject.maxSpeed;
		location = copyObject.location;
		direction = copyObject.direction;
		height = copyObject.height;
		width = copyObject.width;
		length = copyObject.length;
		alive = copyObject.alive;
		isKillable = copyObject.isKillable;
	}

	/**
	 *	Initializing Constructor.
	 */
	Object::Object(int dSpeed, Vector2D dDirection, Point2D dLocation, bool dKillable, 
		int dMaxSpeed, int dHeight, int dWidth, int dLength, bool dAlive)
	{
		speed = dSpeed;
		maxSpeed = dMaxSpeed;
		location = dLocation;
		direction = dDirection;
		height = dHeight;
		width = dWidth;
		length = dLength;
		alive = dAlive;
		isKillable = dKillable;
	}

	/**
	*	Object destructor.
	*/
	Object::~Object()
	{
		die();
	}

	/**
	 *	Gets the speed of the Object.
	 */
	int Object::getSpeed()
	{
		return speed;
	}

	/**
	 *	Sets the speed of the Object.
	 */
	bool Object::setSpeed(int newSpeed)
	{
		if (newSpeed > maxSpeed || newSpeed < -maxSpeed)
			return false;
		speed = newSpeed;
		return true;
	}

	/**
	 *	Gets the location of the object.
	 */
	Point2D Object::getLocation()
	{
		return location;
	}

	/**
	 *	Sets the location of the object given coordinates.
	 */
	bool Object::setLocation(float newX, float newY)
	{
		location.setXY(newX, newY);
		return true;
	}

	/**
	 *	Sets the location of the object given a point.
	 */
	bool Object::setLocation(Point2D newLocation)
	{
		location = newLocation;
		return true;
	}

	/**
	 *	Gets the direction of the object.
	 */
	Vector2D Object::getDirection()
	{
		return direction;
	}

	/**
	 *	Sets the direction of the object given a vector.
	 */
	bool Object::setDirection(Vector2D newDirection)
	{
		direction = newDirection;
		return true;
	}

	/**
	 *	Gets the height of the object.
	 */
	int Object::getHeight()
	{
		return height;
	}

	/**
	 *	Sets the height of the object.
	 */
	bool Object::setHeight(int newHeight)
	{
		if (newHeight <= 0)
			return false;
		height = newHeight;
		return true;
	}

	/**
	 *	Gets the width of the object.
	 */
	int Object::getWidth()
	{
		return width;
	}

	/**
	 *	Sets the width of the object.
	 */
	bool Object::setWidth(int newWidth)
	{
		if (newWidth <= 0)
			return false;
		width = newWidth;
		return true;
	}

	/**
	 *	Gets the length of the object.
	 */
	int Object::getLength()
	{
		return length;
	}

	/**
	 *	Sets the length of the object.
	 */
	bool Object::setLength(int newLength)
	{
		if (newLength <= 0)
			return false;
		length = newLength;
		return true;
	}

	/**
	 *	Moves the object to its new location with the current speed and direction.
	 */
	void Object::move()
	{
		// need to detect collisions

		location.setXY(location.getX() + direction.getX() * speed,
					   location.getY() + direction.getY() * speed);
	}

	/**
	 *	Spawns a new bullet object with the current direction.
	 */
	void Object::shoot()
	{
		// world.createObject(blah blah)
	}

	/**
	 *	Destroyes the object.
	 */
	bool Object::die()
	{
		if (!isKillable)
			return false;
		delete this;
		return true;
	}