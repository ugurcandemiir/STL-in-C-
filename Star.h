#ifndef STAR_H
#define STAR_H
#include "Planet.h"
#include <vector>

using namespace std;
class Star{
private:
    vector<Planet> planets;
    int id = 0;
public:
  

    unsigned long addPlanet();
    bool removePlanet(unsigned long);
    Planet* getPlanet(unsigned long);
    vector<Planet>& getPlanets();
    //you may add any additional methodas you may need.
};
#endif
