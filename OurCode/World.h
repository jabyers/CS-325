#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include "..\GraphicsCode\vector2d.h"
#include "..\GraphicsCode\point2d.h"
using namespace std;

class World
{
private:
	vector<Object*> objectList;
	int xFieldMin;
	int yFieldMin;
	int xFieldMax;
	int yFieldMax;

public:
	bool spawnObject(int dSpeed, Vector2D dDirection, Point2D dLocation, bool dKillable, 
					 int dMaxSpeed, int dHeight, int dWidth, int dLength, bool dAlive);
	bool killObject(Object* kill);
	void tick();
	Object* detectCollision(Object* caller);
};
#endif