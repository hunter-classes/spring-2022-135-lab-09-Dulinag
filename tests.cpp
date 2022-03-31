#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include <cmath>


TEST_CASE("checks the output if the first test was fartherFromOrigin"){
  Coord3D pointA = {10, 20, 30};
  Coord3D pointB = {2, 3, 20};
  CHECK(fartherFromOrigin(&pointA,&pointB) == &pointA);
}

TEST_CASE("checks the accuracy of the lenght of the vector"){
  Coord3D pointC = {0, 0, -1};
  CHECK(length(&pointC) == 1);

  Coord3D pointD= {0, 0, 0};
  CHECK(length(&pointD) == 0);
}


TEST_CASE("checks the output if the second test was fartherFromOrigin"){
  Coord3D pointA = {5, 5, 20};
  Coord3D pointB = {5, 26, 30};
  CHECK(fartherFromOrigin(&pointA,&pointB) == &pointB);
}

TEST_CASE("checks the output if the first point and second point are equal"){
  Coord3D pointA = {5, 26, 30};
  Coord3D pointB = {5, 26, 30};
  CHECK(fartherFromOrigin(&pointA,&pointB) == &pointA);
}

TEST_CASE("checks the correctness of the postion of the object moved correclty "){
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK(pos.x == 2);
  CHECK(pos.y == -10);
  CHECK(pos.z == 100.4);
}
/*
TEST_CASE("checks Creating objects dynamically "){
  double x = 10;
  double y = 25;
  double z = 30;

   double g = 1.0;

   double i  = -2.5;
   double j = 3.2;
   Coord3D *ppos = createCoord3D(x,y,z);
   Coord3D *pvel = createCoord3D(g,i,j);

   move(ppos, pvel, 10.0);


   CHECK(*ppos = 20);
}
*/
