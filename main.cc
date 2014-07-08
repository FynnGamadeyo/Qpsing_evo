#include "actors/actor.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>

int main()
{	
	
	struct winsize w;
	int x,y;	
	int ch;
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	ioctl(0,TIOCGWINSZ, &w);

	int sizeOfChatField = 4;

	//WINDOW *chatField = newwin(w.ws_row,w.ws_col,0,0);
	getmaxyx(stdscr,x,y);	
	
	do{
	ch = getch();
	clear();
	printw("The pressed key is ");
	
	
	ioctl(0, TIOCGWINSZ, &w);
	getmaxyx(stdscr,x,y);
	printw ("lines %d,   %d\n", w.ws_row,x);
	printw ("columns %d,   %d\n", w.ws_col,y);
	
	attron(A_BOLD);
	mvprintw(w.ws_row-1,w.ws_col-1,"namgiang\n");
	attroff(A_BOLD);
	
	refresh();
	}while(ch!='q');
	
	
	if(ch == KEY_F(1)){
		printw("F1 Key pressed");
	}
	

	endwin();
	return 0;
}