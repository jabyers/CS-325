#include <iostream>
#include <vector>
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

bool World::spawnObject()
{
	Object* newObj = new Object();
	objectList.push_back(newObj);
}

bool World::killObject(Object* kill)
{
	for (vector<Object*>::iterator i = objectList.begin(); i < objectList.end(); i++)
	{
		if (*i == kill)
		{
			objectList.erase(i);
			return true;
		}
	}
	return false;
}

void World::tick()
{

}

Object World::detectCollision(Object& caller)
{
		caller.getX();
		caller.getY();
//		caller.getHeight();
//		caller.getWidth();

	for (vector<Object*>::iterator i = objectList.begin(); i < objectList.end(); i++)
	{
		
	}
}