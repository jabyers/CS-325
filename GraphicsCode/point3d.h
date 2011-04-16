/**
 * file: Point3D.h
 * version: 1.0
 * author: djb
 * date 14 April 2012
 */

#ifndef POINT3D_H
#define POINT3D_H

#include <string>
#include "vector3d.h"
using namespace std;

/**
 * this class is used in the graphics portion of the tank project
 */

class Point3D
{
private:
	float x;
	float y;
	float z;

public:
	Point3D(void);
	Point3D(const Point3D &p);
	Point3D(float x, float y, float z);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void setXYZ(float x, float y, float z);
	float getX();
	float getY();
	float getZ();
	void translate(Vector3D vector);
	string toString();
};

#endif