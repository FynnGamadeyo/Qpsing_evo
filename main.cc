#include "actors/actor.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>

int main()
{	
	
	struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    
	int ch;
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	
	printw("Type something please\n");
	ch = getch();
	
	if(ch == KEY_F(1)){
		printw("F1 Key pressed");
	}else{
		printw("The pressed key is ");
		attron(A_BOLD);
		printw("%c", ch);
		printw ("lines %d\n", w.ws_row);
		printw ("columns %d\n", w.ws_col);
		attroff(A_BOLD);
	}
	
	refresh();	
	getch();
	endwin();
	
	//~ int ch;
//~ 
	//~ initscr();			/* Start curses mode 		*/
	//~ raw();				/* Line buffering disabled	*/
	//~ keypad(stdscr, TRUE);		/* We get F1, F2 etc..		*/
	//~ noecho();			/* Don't echo() while we do getch */
//~ 
	//~ printw("Type any character to see it in bold\n");
	//~ ch = getch();			/* If raw() hadn't been called
					 //~ * we have to press enter before it
					 //~ * 					 * gets to the program 		*/
	//~ if(ch == KEY_F(1))		/* Without keypad enabled this will */
		//~ printw("F1 Key pressed");/*  not get to us either	*/
	//~ /* Without noecho() some ugly escape
	 //~ * 					 * charachters might have been printed
	 //~ * 					 					 * on screen			*/
	//~ else
	//~ {	printw("The pressed key is ");
		//~ attron(A_BOLD);
		//~ printw("%c", ch);
		//~ attroff(A_BOLD);
	//~ }
	//~ refresh();			/* Print it on to the real screen */
	//~ getch();			/* Wait for user input */
	//~ endwin();			/* End curses mode		  */

	return 0;
}
