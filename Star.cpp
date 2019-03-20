
#include "Star.h"
#include <stdio.h>
#include <cstdlib>
#include <vector>

unsigned long Star::addPlanet(){
  //vector<Planets> vect;
  Planet p1(id++);
  planets.push_back(p1);

  return p1.getID();
}
bool Star::removePlanet(unsigned long id){
  if(getPlanet(id)==NULL){
      return false;
  }else{
  for (auto it = planets.begin(); it < planets.end(); it++)
      if(id == it->getID()){
            planets.erase(it);
            return true;
          }
  }
}
Planet* Star::getPlanet(unsigned long id){
  for (auto it = planets.begin(); it < planets.end(); it++) {
    if(it->getID()==id){
      return &(planets[it- planets.begin()]);
    }
  }
  return nullptr;
}
vector<Planet>& Star::getPlanets(){
    return planets;

}
