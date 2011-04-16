/**
 * file: vector3D.cpp
 * version: 1.0
 * author: djb
 * date 14 April 2011
 */


#include "vector3d.h"

Vector3D::Vector3D(void)
{
	setXYZ(0, 0, 0);
}

Vector3D::Vector3D(const Vector3D &p)
{
	x = p.x;
	y = p.y;
	z = p.z;
}

Vector3D::Vector3D(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3D::setXYZ(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3D::setZ(float z)
{
	this->z = z;
}

void Vector3D::setX(float x)
{
	this->x = x;
}

void Vector3D::setY(float y)
{
	this->y = y;
}

float Vector3D::getX()
{
	return x;
}

float Vector3D::getY()
{
	return y;
}

float Vector3D::getZ()
{
	return z;
}

const int BUFF_SIZE = 51;

string Vector3D::toString()
{
	char buff[BUFF_SIZE+1];

	sprintf_s(buff, BUFF_SIZE, "x:%g,y:%g,z:%g", x, y, z);
	string s(buff);
	
	return s;
}