#include "actors/actor.hh"
#include "drivers/graphics/display.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{	
	int x,y;	
	int ch;
	
	initDisplay();
	
	getmaxyx(stdscr,y,x);

	int sizeOfChatField = 4;
	
	WINDOW *chatField = newwin(y-sizeOfChatField,x,0,0);
	WINDOW *viewField = newwin(sizeOfChatField,x,y-sizeOfChatField,0);
	
	mvwprintw(chatField,0,0,"field");
	mvwprintw(viewField,0,0,"otherfield");
	
		
	wrefresh(chatField);
	wrefresh(viewField);
	
	do{
	ch = wgetch(chatField);
	wclear(viewField);
	wclear(chatField);
	
	getmaxyx(stdscr,x,y);
	wprintw (viewField,"lines %d\n", x);
	wprintw (viewField,"columns %d\n", y);
	
	attron(A_BOLD);
	wprintw(chatField,"namgiang\n");
	attroff(A_BOLD);
	
	wrefresh(chatField);
	wrefresh(viewField);
	
	}while(ch!='q');
	
	
	if(ch == KEY_F(1)){
		printw("F1 Key pressed");
	}
	
	delwin(chatField);
	delwin(viewField);
	deinitDisplay();
	
	return 0;
}
