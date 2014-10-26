#ifndef ACTOR_H
#define ACTOR_H


#include <string>
#include <stdio.h>
#include <vector>

using namespace std;

class Actor{
	public:
		
		Actor(int x,int y, int z, char rep);
		Actor();
		char rep;
		
		void setNewLocation(int x, int y, int z);
		void moveDown();
		void moveUp();
		void moveLeft();
		void moveRight();
		void getDamage();
		void draw(vector<char> *map, int w,int l, int h);
		
			string name;
		string familieName;
		string race;
		int gender;
		int age;
		
		int coordinationX;
		int coordinationY;
		int coordinationZ;
		
		double health;
		double mana;
		double stamina;
		
		double healthreg;
		double manareg;
		double staminareg;
		
		int agility;
		int strength;
		int intelligent;
		int fireResistance;
		int iceResistance;
		int windResistance;
		int electricalResistance;
		int waterResistance;
	private:
	
};

#endif /* ACTOR_H */
