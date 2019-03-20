#include "Star.h"
#include "Planet.h"
#include "Probe.h"
#include <iostream>
#include <cassert>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <queue>
#include <vector>
#include <cstdint>
#include <algorithm>    // std::random_shuffle

using namespace std;
vector<Planet> Probe:: getHabitable(Star s){

  vector<Planet> temp = s.getPlanets();
  for (int i =0; i < temp.size();i++) {
    if(temp[i].getType() == 'h' && temp[i].getDistance() <= 140 && temp[i].getDistance() >= 60){
      planet_probe.push_back(temp[i]);
    }
  }
    return planet_probe;
  }
void Probe::addToQueue(Planet p){
  planet_queue.push(p);

}
queue<Planet>& Probe:: getQueue(){
  return planet_queue;
}
Planet Probe::getNext(){
  Planet temp = planet_queue.front();
  planet_queue.pop();
  return temp;
}

void Probe::shuffle(){
  deque<Planet> temp;


  for (unsigned i =0; i < planet_queue.size();i++) {
      temp.push_back(planet_queue.front());
  }
    random_shuffle(temp.begin(),temp.end());
    queue<Planet> planet_queue(temp);
}
