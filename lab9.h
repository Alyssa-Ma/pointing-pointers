/**
	Author: Alyssa Ma
	Course: CSCI-133
	Instructor: Mike Zamansky
	Assignment: Lab_9

	Pointer functionalities.
*/
#pragma once
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Coord3D 
{
	double x;
	double y;
	double z;
};

	double length(Coord3D *p);
	Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
	void move(Coord3D *ppos, Coord3D *pvel, double dt);
	Coord3D* createCoord3D(double x, double y, double z);
	void deleteCoord3D(Coord3D *p);

struct Particle
{
	double px;
	double py;
	double pz;
	double pvx;
	double pvy;
	double pvz;
};

	Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);

	void setVelocity(Particle *p, double vx, double vy, double vz);
	Coord3D getPosition(Particle *p);
	void move(Particle *p, double dt);
	void deleteparticle(Particle *p);
