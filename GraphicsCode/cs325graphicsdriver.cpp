//
/* file: CS325GraphicsDriver.cpp
/* author: djbouvier
/* date: 12 April 2011 
 */

#include <iostream>
#include <windows.h>
#include "vector3D.h"
#include "cs325graphics.h"

#define SCREEN_TEST 100
#define ROTATE_TEST 100
#define MOVE_TEST 100

int main(int argc, char* argv[])
{
	CS325Graphics window(argc, argv);

	float delta = 0.1;

	Point2D p1(CS325Graphics::X_MIN, CS325Graphics::Y_MAX / 4.5);
	Point2D p2(CS325Graphics::X_MAX, CS325Graphics::Y_MAX / 4.5);
	Point2D p3(CS325Graphics::X_MIN, CS325Graphics::Y_MIN);
	Point2D p4(CS325Graphics::X_MAX, CS325Graphics::Y_MAX);

	//Points 41, 42, 45, 46 control the sandbox. DON"T MESS WITH THEM!

	Point3D p30(0.5,  0.5, 0.5);
	Point3D p31(0.5, -0.5, 0.5);
	Point3D p32(-0.5,-0.5, 0.5);
	Point3D p33(-0.5, 0.5, 0.5);
	Point3D p34(0.5,  0.5, -0.5);
	Point3D p35(0.5, -0.5, -0.5);
	Point3D p36(-0.5,-0.5, -0.5);
	Point3D p37(-0.5, 0.5, -0.5);

	Point3D p40( -70.8, 28.8, -50.8);
	Point3D p41( 50.8,-2.8,  50.8);
	Point3D p42(-50.8,-2.8,  50.8);
	Point3D p43(-58.8, 25.8,  50.8);
	Point3D p44( 50.8, 50.8, -50.8);
	Point3D p45( 50.8,-2.8, -50.8);
	Point3D p46(-50.8,-2.8, -50.8);
	Point3D p47(-84.8,-2.8, -50.8);
	Point3D p48(-60.2,22.3, -50.8);


	

	Point2D viewPos;
	Vector2D viewDir;
	Vector3D deltaV;
	viewDir.setAngle(0);


	// move view position

	for(int i = 0; i < MOVE_TEST; i){
		/*window.DrawLineOnScreen(p1, p2);*/
		//window.DrawLineOnScreen(p4, p3);

		window.DrawLineInSpace(p30, p31);
		window.DrawLineInSpace(p31, p32);
		window.DrawLineInSpace(p32, p33);
		window.DrawLineInSpace(p33, p30);
		window.DrawLineInSpace(p34, p35);
		window.DrawLineInSpace(p35, p36);
		window.DrawLineInSpace(p36, p37);
		window.DrawLineInSpace(p37, p34);
		window.DrawLineInSpace(p30, p34);
		window.DrawLineInSpace(p31, p35);
		window.DrawLineInSpace(p32, p36);
		window.DrawLineInSpace(p33, p37);

		//window.DrawLineInSpace(p40, p41);
		window.DrawLineInSpace(p41, p42);
		window.DrawLineInSpace(p42, p43);
		//window.DrawLineInSpace(p43, p40);
		//window.DrawLineInSpace(p44, p45);
		window.DrawLineInSpace(p45, p46);
		//window.DrawLineInSpace(p46, p47);
		//window.DrawLineInSpace(p47, p44);
		window.DrawLineInSpace(p40, p45);
		window.DrawLineInSpace(p41, p45);
		window.DrawLineInSpace(p42, p46);
		window.DrawLineInSpace(p43, p47);
		window.DrawLineInSpace(p40, p47);

				if(GetAsyncKeyState(VK_DOWN)) // the DOWN arrow was pressed, let's do something
		{
		delta = -.1;
		viewPos.setY(viewPos.getY() + cos(-viewDir.getAngle())*delta);
		viewPos.setX(viewPos.getX() + sin(-viewDir.getAngle())*delta);
		window.SetViewPosition(viewPos);
		cout << "view pos: " << viewPos.toString() << endl;

		window.DisplayNow();
		Sleep(50);
				}

			if(GetAsyncKeyState(VK_UP)) // the UP arrow was pressed, let's do something
		{
		delta = .1;
		viewPos.setY(viewPos.getY() + cos(-viewDir.getAngle())*delta);
		viewPos.setX(viewPos.getX() + sin(-viewDir.getAngle())*delta);
		window.SetViewPosition(viewPos);
		cout << "view pos: " << viewPos.toString() << endl;

		window.DisplayNow();
		Sleep(50);
				}
				if(GetAsyncKeyState(VK_RIGHT)) // the RIGHT arrow was pressed, let's do something
		{
	
		delta = .1;

		viewDir.setAngle(viewDir.getAngle()+delta);
		window.SetViewDirection(viewDir);
		cout << "view dir: " << viewDir.getAngle() << endl;

		window.DisplayNow();
		Sleep(50);	
			}
			
			if(GetAsyncKeyState(VK_LEFT)) // the LEFT arrow was pressed, let's do something
		{
	
		delta = -.1;

		viewDir.setAngle(viewDir.getAngle()+delta);
		window.SetViewDirection(viewDir);
		cout << "view dir: " << viewDir.getAngle() << endl;

		window.DisplayNow();
		Sleep(50);	
			}

		if(GetAsyncKeyState(VK_ESCAPE))
		{
			return 1;
		}
	}


		
	
}




