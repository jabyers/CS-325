/**
 * file: Vector3D.h
 * version: 1.0
 * author: djb
 * date 14 April 2011
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <string>
using namespace std;

/**
 * This is an unNormalized 3D vector of floats
 * used in graphics for CS325
 */

class Vector3D
{
private:
	float x;
	float y;
	float z;

public:
	Vector3D(void);
	Vector3D(const Vector3D &p);
	Vector3D(float x, float y, float z);
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void setXYZ(float x, float y, float z);
	float getX();
	float getY();
	float getZ();
	string toString();
};

#endif