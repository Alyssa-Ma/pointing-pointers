#include "lab9.h"

//Task A
double length(Coord3D *p)
{
	//return variable
	double distance;
	
	//distance formula from origin
	distance = sqrt(pow(p -> x, 2) + pow(p -> y, 2) + pow(p -> z, 2));
	return distance;
}

//Task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	//declare variables to hold length of first and second pointer
	double first;
	double second;

	//setting variable
	first = length(p1);
	second = length(p2);

	//if statements to compare the values
	if(first > second)
	{
		//return the pointer
		return p1;
	}	
	else
	{
		return p2;
	}
}

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{	
	//using the given velocity formula
	//new position is equal to current position plus velocity * time
	ppos -> x += pvel -> x * dt;
	ppos -> y += pvel -> y * dt;
	ppos -> z += pvel -> z * dt;
}

//Task E
Coord3D* createCoord3D(double x, double y, double z)
{
	//create pointer using struct coord3d
	Coord3D* p = new Coord3D;
	*p = {x, y, z};
	
	return p;
}

//Task E continued
void deleteCoord3D(Coord3D *p)
{
	delete p;
}

//Task F
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz)
{
	//Make a new particle with x, y, z, vx, vy, and vz in it
	Particle* p = new Particle;
	*p = {x, y, z, vx, vy, vz};

	return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz)
{
	//Set the velocity to the parameters
	p -> pvx = vx;
	p -> pvy = vy;
	p -> pvz = vz;
}

Coord3D getPosition(Particle *p)
{
	//Get the position of the particle
	Coord3D pos = {p -> px, p -> py, p -> pz};
	
	return pos;
}

void move(Particle *p, double dt)
{
	//Same as task C, but pvel is specified in Particle
	p -> px += p -> pvx * dt;
	p -> py += p -> pvy * dt;
	p -> pz += p -> pvz * dt;

}

void deleteParticle(Particle *p)
{
	delete p;
}


