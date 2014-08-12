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
		void getDamage();
	private:
		string name;
		string familieName;
		string race;
		int gender;
		int age;
		
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
};

#endif /* ACTOR_H */
