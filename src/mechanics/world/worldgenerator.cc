#include "worldgenerator.hh"

Worldgenerator::Worldgenerator()
{

}


void Worldgenerator::generate(vector< char > world, int length, int width, int depth, int complex)
{

}

void Worldgenerator::generateEnvironment(vector< char > world, int length, int width, int depth)
{
   for(int z=0; z<depth;z++){
     for(int y=0;y<length;y++){
      for(int x=0;x<width;x++){
	world[z*length*width+y*length+x]='X';
      }
     }
   }
}

