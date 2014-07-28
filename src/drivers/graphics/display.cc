#include "display.hh"

Display::Display(){
	for(int i=0;i<NUMBER_OF_PARENTWINDOW;i++){
		this->freeWindows.push(i);
	}
}

Display::~Display(){
	
}

void Display::initDisplay(bool cursset){
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(cursset);
}

WINDOW* Display::createWindow(int height,int width,int y,int x){
	if(!this->freeWindows.empty()){
		WINDOW * w =newwin(height,width,y,x);
		parentWindows[w]=this->freeWindows.top();
		this->freeWindows.pop();
		return w;
	}
	return 0;
}

//~ void deleteWindowByName(WINDOW * w){
	//~ map<WINDOW*,int]>::iterator it;
	//~ it = windows.find(w);
	//~ windows.erase(it);
	//~ delwin(w);
//~ }

//~ void refreshAllWindows(){
	//~ for(map<WINDOW*,WINDOW*[NUMBER_OF_CHILDWINDOW]>::iterator it = windows.begin(); it != windows.end();++it){
		//~ wrefresh(it->first);
	//~ }
//~ }
//~ 
//~ void initDisplay(){
	//~ initscr();
	//~ raw();
	//~ keypad(stdscr, TRUE);
	//~ noecho();
	//~ curs_set(FALSE);
//~ }
//~ 


//~ void clearAllWindows(){
	//~ for(map<string,MainWindow>::iterator it = windows.begin(); it != windows.end();++it){
		//~ wclear(it->second.parentWindow);
	//~ }
//~ }
//~ 
//~ void deinitDisplay(){
	//~ for(map<string,MainWindow>::iterator it = windows.begin(); it != windows.end();++it){
		//~ delwin(it->second.parentWindow);
		//~ windows.erase(it->first);
	//~ }
	//~ endwin();
//~ }

/////////////////////////////////// subWindow

WINDOW* createSubWindow(WINDOW * w, string name, int height, int width, int y, int x){
	WINDOW * result = subwin(w,height,width,y,x);
	
	return result;
}
