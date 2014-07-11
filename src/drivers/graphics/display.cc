#include "display.hh"

map<string,WINDOW*> windows;


void deleteWindowByName(string name){
	map<string,WINDOW*>::iterator it;
	it = windows.find(name);
	delwin(it->second);
	windows.erase(it);
}

void refreshAllWindows(){
	for(map<string,WINDOW*>::iterator it = windows.begin(); it != windows.end();++it){
		wrefresh(it->second);
	}
}

void initDisplay(){
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(FALSE);
}

WINDOW* createWindow(string name,int height,int width,int y,int x){
	WINDOW *w =newwin(height,width,y,x);
	windows[name]=w;
	return w;
}

void clearAllWindows(){
	for(map<string,WINDOW*>::iterator it = windows.begin(); it != windows.end();++it){
		wclear(it->second);
	}
}

void deinitDisplay(){
	for(map<string,WINDOW*>::iterator it = windows.begin(); it != windows.end();++it){
		delwin(it->second);
		windows.erase(it->first);
	}
	endwin();
}
