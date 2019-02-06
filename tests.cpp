#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "lab9.h"


TEST_CASE("Task A")
{
	Coord3D pointA = {10, 20, 30};
	Coord3D pointB = {5, 10, 20};
	Coord3D pointC = {30, 20, 10};
	Coord3D pointD = {10, 10, 10};

	CHECK(length(&pointA) == Approx(37.4166));
	CHECK(length(&pointB) == Approx(22.9129));
	CHECK(length(&pointC) == Approx(37.4166));
	CHECK(length(&pointD) == Approx(17.3205));
}


TEST_CASE("Task B")
{
	Coord3D pointA = {10, 20, 30};
	Coord3D pointB = {5, 10, 20};
	Coord3D pointC = {30, 20, 10};
	Coord3D pointD = {10, 10, 10};

	CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);
	CHECK(fartherFromOrigin(&pointB, &pointC) == &pointC);
	CHECK(fartherFromOrigin(&pointC, &pointD) == &pointC);
	CHECK(fartherFromOrigin(&pointD, &pointA) == &pointA);
}

TEST_CASE("Task C")
{
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};

	move(&pos, &vel, 2.0);

	CHECK(pos.x ==  2);
	CHECK(pos.y ==  -10);
	CHECK(pos.z ==  100.4);
}

TEST_CASE("Task E")
{
	Coord3D *pos = createCoord3D(10, 20, 30);
	Coord3D *vel = createCoord3D(5.5, -1.4, 7.77);	

	CHECK(pos -> x == 10);
	CHECK(pos -> y == 20);
	CHECK(pos -> z == 30);
	
	move(pos, vel, 10.0);

	CHECK(pos -> x == 65);
	CHECK(pos -> y == 6);
	CHECK(pos -> z == Approx(107.7));

}

TEST_CASE("Task F")
{
	Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
	CHECK(p -> px == 1.0);
	CHECK(p -> py == 1.5);
	CHECK(p -> pz == 2.0);
	CHECK(p -> pvx == 0.1);
	CHECK(p -> pvy == 0.2);
	CHECK(p -> pvz == 0.3);
	
	setVelocity(p, 10.0, 0.3, 0.1);
	CHECK(getPosition(p).x == 1);
	CHECK(getPosition(p).y == 1.5);
	CHECK(getPosition(p).z == 2);

	move(p, 0.1);
	CHECK(getPosition(p).x == 2);
	CHECK(getPosition(p).y == 1.53);
	CHECK(getPosition(p).z == 2.01);

	deleteParticle(p);
}

