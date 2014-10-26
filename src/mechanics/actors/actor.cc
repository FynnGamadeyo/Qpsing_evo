#include "actor.hh"

Actor::Actor(int x, int y, int z, char rep){
	setNewLocation(x,y,z);
}

Actor::Actor(){
	
}

void Actor::moveDown(){
	this->coordinationY--;
	printf("coordinat Y %d",this->coordinationY);
};

void Actor::moveUp(){
	this->coordinationY++;
};

void Actor::moveLeft(){
	this->coordinationX--;
};

void Actor::moveRight(){
	this->coordinationX++;
};

void Actor::setNewLocation(int x, int y, int z)
{
    this->coordinationX=x;
    this->coordinationY=y;
    this->coordinationZ=z;
}

void Actor::draw(vector< char > *map, int w,int l, int h)
{
   vector<char> pp=*map;
   pp[23]=this->rep;
}


