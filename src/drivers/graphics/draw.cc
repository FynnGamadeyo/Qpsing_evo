#include "draw.hh"

void fillWindow(WINDOW * w, char c){
	int maxX,maxY;
	getmaxyx(w,maxY,maxX);
	
	
	for(int posY=0; posY<maxY;posY++){
		for(int posX=0; posX<maxX;posX++){
			
			mvwprintw(w,posY,posX,&c);
		}
	}
	wmove(w,0,0);
}


void clearArea(WINDOW *w,int x, int y){
	int currentX,currentY;
	getmaxyx(w,currentY,currentX);
	
	//move to specific Area to clear
	wmove(w,y,x);

	wclrtoeol(w);
	
	//move back to current position
	wmove(w,currentY,currentX);
}
