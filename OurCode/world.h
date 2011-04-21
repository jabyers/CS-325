#ifndef WORLD_H
#define WORLD_H

#include <vector>
using namespace std;

class World
{
private:
	vector<object> objectList;
	int xFieldMin;
	int yFieldMin;
	int xFieldMax;
	int yFieldMax;

public:
	bool spawnObject();
	bool killObject();
	void tick();
	object detectCollision(object caller);
};
#endif