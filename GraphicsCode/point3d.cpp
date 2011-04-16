/**
 * file: point3D.cpp
 * version: 1.0
 * author: djb
 * date 12 April 2011
 */


#include "point3d.h"

Point3D::Point3D(void)
{
	setXYZ(0, 0, 0);
}

Point3D::Point3D(const Point3D &p)
{
	x = p.x;
	y = p.y;
	z = p.z;
}

Point3D::Point3D(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::setXYZ(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::setZ(float z)
{
	this->z = z;
}

void Point3D::setX(float x)
{
	this->x = x;
}

void Point3D::setY(float y)
{
	this->y = y;
}

void Point3D::translate(Vector3D vector)
{
	x += vector.getX();	
	y += vector.getY();	
	z += vector.getZ();
}

float Point3D::getX()
{
	return x;
}

float Point3D::getY()
{
	return y;
}

float Point3D::getZ()
{
	return z;
}

const int BUFF_SIZE = 41;

string Point3D::toString()
{
	char buff[BUFF_SIZE+1];

	sprintf_s(buff, BUFF_SIZE, "x:%g,y:%g,z:%g", x, y, z);
	string s(buff);
	
	return s;
}