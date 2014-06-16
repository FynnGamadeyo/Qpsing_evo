#ifndef ACTOR_H
#define ACTOR_H

#include <stdio.h>

class Actor{
	public:
		Actor();
		void moveDown();
		void moveUp();
		void moveLeft();
		void moveRight();
	private:
		double health;
};

#endif /* ACTOR_H */
