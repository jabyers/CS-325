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
	Object tempcallerObject = Object(*caller);

	float callerObjectLength = tempcallerObject.getLength() / 2;
	float callerObjectWidth = tempcallerObject.getWidth() / 2;
	float callerObjectX = tempcallerObject.getLocation().getX();
	float callerObjectY = tempcallerObject.getLocation().getY();

	Vector2D callerForwardVector = tempcallerObject.getDirection();

	Vector2D callerRightVector = tempcallerObject.getDirection();
	callerRightVector.rotate(90.0);

	Vector2D callerBackVector = tempcallerObject.getDirection();
	callerBackVector.rotate(180.0);

	Vector2D callerLeftVector = tempcallerObject.getDirection();
	callerLeftVector.rotate(270.0);

	float callerForwardVectorX = callerForwardVector.getX() * callerObjectLength;
	float callerForwardVectorY = callerForwardVector.getY() * callerObjectLength;

	float callerRightVectorX = callerRightVector.getX() * callerObjectWidth;
	float callerRightVectorY = callerRightVector.getY() * callerObjectWidth;

	float callerBackVectorX = callerBackVector.getX() * callerObjectLength;
	float callerBackVectorY = callerBackVector.getY() * callerObjectLength;
			
	float callerLeftVectorX = callerLeftVector.getX() * callerObjectWidth;
	float callerLeftVectorY = callerLeftVector.getY() * callerObjectWidth;

	Point2D callerFrontRight(callerObjectX + callerForwardVectorX + callerRightVectorX,
							    callerObjectY + callerForwardVectorY + callerRightVectorY);

	Point2D callerFrontLeft(callerObjectX + callerForwardVectorX + callerLeftVectorX,
							callerObjectY + callerForwardVectorY + callerLeftVectorY);

	Point2D callerBackRight(callerObjectX + callerBackVectorX + callerRightVectorX,
							callerObjectY + callerBackVectorY + callerRightVectorY);

	Point2D callerBackLeft(callerObjectX + callerBackVectorX + callerLeftVectorX,
							callerObjectY + callerBackVectorY + callerLeftVectorY);

	for (vector<Object*>::iterator i = objectList.begin(); i < objectList.end(); i++)
	{
		if (*i != caller)
		{
			Object tempRemoteObject = Object(**i);

			float remoteObjectLength = tempRemoteObject.getLength() / 2;
			float remoteObjectWidth = tempRemoteObject.getWidth() / 2;
			float remoteObjectX = tempRemoteObject.getLocation().getX();
			float remoteObjectY = tempRemoteObject.getLocation().getY();

			Vector2D remoteForwardVector = tempRemoteObject.getDirection();

			Vector2D remoteRightVector = tempRemoteObject.getDirection();
			remoteRightVector.rotate(90.0);

			Vector2D remoteBackVector = tempRemoteObject.getDirection();
			remoteBackVector.rotate(180.0);

			Vector2D remoteLeftVector = tempRemoteObject.getDirection();
			remoteLeftVector.rotate(270.0);

			float remoteForwardVectorX = remoteForwardVector.getX() * remoteObjectLength;
			float remoteForwardVectorY = remoteForwardVector.getY() * remoteObjectLength;

			float remoteRightVectorX = remoteRightVector.getX() * remoteObjectWidth;
			float remoteRightVectorY = remoteRightVector.getY() * remoteObjectWidth;

			float remoteBackVectorX = remoteBackVector.getX() * remoteObjectLength;
			float remoteBackVectorY = remoteBackVector.getY() * remoteObjectLength;
			
			float remoteLeftVectorX = remoteLeftVector.getX() * remoteObjectWidth;
			float remoteLeftVectorY = remoteLeftVector.getY() * remoteObjectWidth;

			Point2D remoteFrontRight(remoteObjectX + remoteForwardVectorX + remoteRightVectorX,
									 remoteObjectY + remoteForwardVectorY + remoteRightVectorY);

			Point2D remoteFrontLeft(remoteObjectX + remoteForwardVectorX + remoteLeftVectorX,
									remoteObjectY + remoteForwardVectorY + remoteLeftVectorY);

			Point2D remoteBackRight(remoteObjectX + remoteBackVectorX + remoteRightVectorX,
									remoteObjectY + remoteBackVectorY + remoteRightVectorY);

			Point2D remoteBackLeft(remoteObjectX + remoteBackVectorX + remoteLeftVectorX,
								   remoteObjectY + remoteBackVectorY + remoteLeftVectorY);
















		}


	}
	Object* temp = new Object();
	return temp;
}