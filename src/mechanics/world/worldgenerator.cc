#include "worldgenerator.hh"

Worldgenerator::Worldgenerator()
{

}


void Worldgenerator::generate(vector< char > world, int length, int width, int depth, int complex)
{

}

void Worldgenerator::generateEnvironment(vector< char > *world, int length, int width, int depth)
{
   vector<char> pp= *world;
   for(int z=-1; z<depth;z++){
     for(int y=0;y<length;y++){
      for(int x=0;x<width;x++){
	pp[z*length*width+y*length+x]='x';
      }
     }
   }
}

