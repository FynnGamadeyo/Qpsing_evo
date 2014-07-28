#include "display.hh"

Display::Display(){
	for(int y=0;y<NUMBER_OF_PARENTWINDOW;y++){
		this->freeWindows.push(y);
		for(int x=0;x<NUMBER_OF_CHILDWINDOW;x++){
			childWindows[x + y*NUMBER_OF_CHILDWINDOW]=0;
		}
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

void Display::deleteWindow(WINDOW * w){
	int parent =parentWindows[w];
	this->freeWindows.push(parent);
	
	for(int x=0;x<NUMBER_OF_CHILDWINDOW;x++){
		if(childWindows[parent*NUMBER_OF_CHILDWINDOW]!=0){
			delwin(childWindows[parent*NUMBER_OF_CHILDWINDOW]);
			childWindows[parent*NUMBER_OF_CHILDWINDOW]=0;
		}else{
			break;
		}
	}
	
	//~ map<WINDOW*,int]>::iterator it;
	//~ it = windows.find(w);
	//~ windows.erase(it);
	//~ delwin(w);
}

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
