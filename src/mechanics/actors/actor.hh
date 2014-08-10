#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <stdio.h>
using namespace std;

class Actor{
	public:
		Actor();
		void moveDown();
		void moveUp();
		void moveLeft();
		void moveRight();
		int getDamage();
	private:
		string name;
		string familieName;
		string race;
		int gender;
		int age;
		
		int health;
		int mana;
		int stamina;
		
		int agility;
		int strength;
		int intelligent;
		int fireResistance;
		int iceResistance;
		int windResistance;
		int electricalResistance;
		int waterResistance;
};

#endif /* ACTOR_H */
