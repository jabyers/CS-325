//
/* file: CS325Graphics.h
/* author: djbouvier
/* date: 12 April 2011 
 */

#include <windows.h>		// Header File For Windows
#include "freeglut.h"		// Header File For OpenGL Utility Library
#include <math.h>			// Header File For Math Library
#include <time.h>			// Header File For Accessing System Time
#include <iostream>
#include "point2D.h"
#include "point3D.h"
#include "vector2D.h"
#include <vector>

class CS325Graphics{
public:
	CS325Graphics(int, char*[]);
	void DrawLineOnScreen(Point2D p1, Point2D p2);
	void DrawLineInSpace(Point3D p1, Point3D p2);
	void DisplayNow();
	void SetViewPosition(Point2D vp);
	void SetViewDirection(Vector2D vd);
	void setViewElevation(float height);

	static const float X_MAX;
	static const float Y_MAX;
	static const float X_MIN;
	static const float Y_MIN;
};