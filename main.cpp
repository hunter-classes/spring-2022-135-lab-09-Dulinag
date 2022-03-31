#include <iostream>
#include "coord3d.h"

#include "funcs.h"

int main()
{

  std::cout << "Task A: " << std::endl;
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << length(&pointP) << std::endl;

  std::cout << std::endl;

  std::cout << "Task B: " << std::endl;
  std::cout << "P Address: " << &pointP << std::endl;
  std::cout << "P Address: " << &pointQ << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "answer: " << ans << std::endl;


std::cout << std::endl;
std::cout << "Task C: " << std::endl;

Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

move(&pos, &vel, 2.0);
 std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

 std::cout << std::endl;

 std::cout << "Task E: " << std::endl;

 double x = 10;
 double y = 25;
 double z = 30;

  double g = 1.0;

  double i  = -2.5;
  double j = 3.2;
  Coord3D *ppos = createCoord3D(x,y,z);
  Coord3D *pvel = createCoord3D(g,i,j);

  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: "
       << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);






  return 0;

}
