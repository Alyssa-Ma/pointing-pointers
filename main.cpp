/**
   Author: Alyssa Ma
   Course: CSCI-133
   Instructor: Mike Zamansky
   Assignment: Lab_9
   
   Severals functions involving pointers.
*/

#include <iostream>
#include "lab9.h"

int main()
{
	double length(Coord3D *p);
	Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
	void move(Coord3D *ppos, Coord3D *pvel, double dt);
	Coord3D* createCoord3D(double x, double y, double z);
	void deleteCoord3D(Coord3D *p);
	void deleteParticle(Particle *p);
}
