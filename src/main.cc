#include "actors/actor.hh"
#include "drivers/graphics/display.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int x,y;
	
	getmaxyx(stdscr,y,x);
	
	WINDOW *screen = createWindow("screen",y,x,0,0);
	
	return 0;
}

//~ int main()
//~ {	
	//~ int x,y;	
	//~ int ch;
	//~ 
	//~ initDisplay();
	//~ 
	//~ getmaxyx(stdscr,y,x);
//~ 
	//~ int sizeOfChatField = 4;
	//~ 
	//~ WINDOW *chatField = createWindow("chatField",(y-sizeOfChatField),x,0,0);
	//~ WINDOW *viewField = createWindow("viewField",sizeOfChatField,x,(y-sizeOfChatField),0);
	//~ 
	//~ mvwprintw(chatField,0,0,"field");
	//~ mvwprintw(viewField,0,0,"otherfield");
	//~ 
		//~ 
	//~ refreshAllWindows();
	//~ 
	//~ do{
	//~ ch = wgetch(chatField);
	//~ clearAllWindows();
	//~ 
	//~ getmaxyx(stdscr,x,y);
	//~ wprintw (viewField,"lines %d\n", x);
	//~ wprintw (viewField,"columns %d\n", y);
	//~ 
	//~ attron(A_BOLD);
	//~ wprintw(chatField,"namgiang\n");
	//~ attroff(A_BOLD);
	//~ 
	//~ refreshAllWindows();
	//~ 
	//~ }while(ch!='q');
	//~ 
	//~ 
	//~ if(ch == KEY_F(1)){
		//~ printw("F1 Key pressed");
	//~ }
	//~ 
	//~ deinitDisplay();
	//~ 
	//~ return 0;
//~ }
