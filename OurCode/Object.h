#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using namespace std;



class Object {

public:
	// List of class variables
	int speed;
	double direction;
	double xcoord;
	double ycoord;
	bool isKillable;
	int maxSpeed;
	int height;
	int width;
	bool alive;

	// List of Methods
	Object();
	Object(int dSpeed, double dDirection, double dX, double dY, bool dKillable, int dmaxSpeed, int dHeight, int dWeigth, bool dAlive);
	void setSpeed(int newSpeed);
	int getSpeed();
	void setDirection(double newDirection);
	double getDirection();
	void Move();
	void Shoot();
	void Die();
	void setX(double newX);
	double getX();
	void setY(double newY);
	double getY();
	~Object();

	


}

#endif