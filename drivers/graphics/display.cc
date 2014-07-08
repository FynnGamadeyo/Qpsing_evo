#include "display.hh"

void update(){
	
}

void clearArea(int x, int y){
	int currentX,currentY;
	getyx(stdscr,currentY,currentX);
	
	//move to specific Area to clear
	move(y,x);

	clrtoeol();

	//move back to current position
	move(y,x);
}
