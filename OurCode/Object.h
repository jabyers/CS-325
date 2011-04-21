#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using namespace std;

class Object 
{
public:
	// List of class variables
	int speed;
	int maxSpeed;
	double xcoord;
	double ycoord;
	double direction;
	int height;
	int width;
	bool alive;
	bool isKillable;
		
	// List of Methods
	Object();
	Object(int dSpeed, double dDirection, double dX, double dY, bool dKillable, 
		int dmaxSpeed, int dHeight, int dWeigth, bool dAlive);
	~Object();

	int getSpeed();
	void setSpeed(int newSpeed);
	double getLocation();
	void setLocation(double newX, double newY);
	double getDirection();
	void setDirection(double newDirection);
	void Move(int speed);
	void Shoot();
	void Die();
};
#endif