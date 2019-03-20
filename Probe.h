#ifndef PROBE_H
#define PROBE_H
#include "Planet.h"
#include "Star.h"
#include <queue>
#include <vector>

using namespace std;
class Probe{
private:
    queue<Planet> planet_queue;
    vector<Planet> planet_probe;
public:
    vector<Planet> getHabitable(Star s);
    void addToQueue(Planet p);
    Planet getNext();
    queue<Planet>& getQueue();
    void shuffle();
    void clear();
    //you may add any additional methods you may need.
};
#endif
