#include "display.hh"



map<string,WINDOW*> windows;


void update(){
	
}

void refreshAllWindows(){
	for(map<string,WINDOW*>::iterator it = windows.begin(); it != windows.end();++it){
		wrefresh(it->second);
	}
}

void clearArea(WINDOW *w,int x, int y){
	int currentX,currentY;
	getyx(stdscr,currentY,currentX);
	
	//move to specific Area to clear
	wmove(w,y,x);

	wclrtoeol(w);
	
	//move back to current position
	wmove(w,currentY,currentX);
}

void initDisplay(){
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(FALSE);
}

void deinitDisplay(){
	endwin();
}
