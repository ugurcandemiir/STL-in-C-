#ifndef PLANET_H
#define PLANET_H
class Planet{
private:
    unsigned long id;
    unsigned int distance;
    char type;
public:


    Planet(int);
    unsigned long getID();
    unsigned int getDistance();
    char getType();
    //you may add any additional methods you may need.
};
#endif
