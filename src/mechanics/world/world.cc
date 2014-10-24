#include "world.hh"
#include "worldgenerator.hh"

World::World(int w, int h, int l)
{	
		this->hero= Hero(2,2,1,'H');
      this->height=h;
      this->width=w;
      this->length=l;
      Worldgenerator generatr= Worldgenerator();
//       this->hero=Hero(2,2,1);
//       void generateEnvironment(vector<char> *world,int length,int width,int depth);
      generatr.generateEnvironment(&this->map,l,w,h);
//       generateEnvironment(this->map,l,w,h);
}

