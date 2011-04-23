#include <iostream>
#include <vector>
#include "..\GraphicsCode\vector2d.h"
#include "..\GraphicsCode\point2d.h"
#include "Object.h"
#include "World.h"

using namespace std;

/*
	vector<object> objectList;
	int xFieldMin;
	int yFieldMin;
	int xFieldMax;
	int yFieldMax;
*/

bool World::spawnObject(int dSpeed, Vector2D dDirection, Point2D dLocation, bool dKillable, 
						int dMaxSpeed, int dHeight, int dWidth, int dLength, bool dAlive)
{
	Object* newObj = new Object();
	if (newObj == NULL)
		return false;
	objectList.push_back(newObj);
	return true;
}

bool World::killObject(Object* kill)
{
	for (vector<Object*>::iterator i = objectList.begin(); i < objectList.end(); i++)
	{
		if (*i == kill)
		{
			if (kill->die())
			{
				objectList.erase(i);
				return true;
			}
			return false;
		}
	}
	return false;
}

void World::tick()
{

}

Object* World::detectCollision(Object* caller)
{
//		caller.getX();
//		caller.getY();
//		caller.getHeight();
//		caller.getWidth();

	for (vector<Object*>::iterator i = objectList.begin(); i < objectList.end(); i++)
	{
		if (*i != caller)
		{
			Object tempObject = Object(**i);

			float objectLength = tempObject.getLength() / 2;
			float objectWidth = tempObject.getWidth() / 2;
			float objectX = tempObject.getLocation().getX();
			float objectY = tempObject.getLocation().getY();





			Vector2D forwardVector = tempObject.getDirection();

			Point2D frontPoint(forwardVector.getX() * objectLength + objectX,
							   forwardVector.getY() * objectLength + objectY);

			Vector2D rightVector = tempObject.getDirection();
			rightVector.rotate(90.0);
			Point2D rightPoint(rightVector.getX() * objectWidth + objectX,
							   rightVector.getY() * objectWidth + objectY);

			Vector2D backVector = tempObject.getDirection();
			backVector.rotate(180.0);
			Point2D backPoint(backVector.getX() * objectLength + objectX,
							  backVector.getY() * objectLength + objectY);

			Vector2D leftVector = tempObject.getDirection();
			leftVector.rotate(270.0);
			Point2D leftPoint(leftVector.getX() * objectWidth + objectX,
							  leftVector.getY() * objectWidth + objectY);





			/*
			Point2D objectLocation = (**i).getLocation();
			Vector2D objectDirection
			float objectX = objectLocation.getX();
			float objectY = objectLocation.getY();
			float objectWidth = (**i).getWidth() / 2.0;
			float objectLength = (**i).getLength() / 2.0;

			Point2D objectFrontLeft(objectX - objectWidth, objectY + objectLength);
			Point2D objectFrontRight(objectX + objectWidth, objectY + objectLength);
			Point2D objectBackLeft(objectX - objectWidth, objectY - objectLength);
			Point2D objectBackRight(objectX - objectWidth, objectY - objectLength);
			*/






//			float
		}


	}
	Object* temp = new Object();
	return temp;
}