#include "Planet.h"
#include <stdio.h>
#include <cstdlib>


using namespace std;


Planet::Planet(int i){
  this->id = i;
  this->distance = rand() % 3000;
  char arrayNum[3] = {'r', 'h', 'g' };
  this->type = arrayNum[rand() % 3];
}


unsigned long Planet:: getID(){
   return this->id;
 }
unsigned int Planet:: getDistance(){
   return this->distance;
 }

char Planet:: getType(){
    return this->type;
  }
