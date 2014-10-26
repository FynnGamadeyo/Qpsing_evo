#ifndef world_hh
#define world_hh 1

#include <vector>
#include "../actors/hero.hh"


using namespace std;

class World{
public:
    World(int w,int h,int l);
    int width;
    int height;
    int length;
    
    string name;
    vector<char> map;
     Hero hero;
private:
    
   
};


#endif