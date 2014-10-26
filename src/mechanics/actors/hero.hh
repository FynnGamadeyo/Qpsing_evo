#ifndef hero_HH
#define hero_HH 1

#include "actor.hh"

class Hero : public Actor{
public:
	Hero(int x,int y,int z, char rep) : Actor(x, y, z,rep){};
	Hero() : Actor(){};
private:
};

#endif
