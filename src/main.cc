#include "mechanics/actors/actor.hh"
#include "drivers/graphics/display.hh"
#include "drivers/graphics/draw.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

char* testprint(char test[]);

char* testprint(char test[]){
	return test;
}

int main()
{
	int x,y;
	initDisplay();
	getmaxyx(stdscr,y,x);
	
	WINDOW *screen  = createWindow("screen",y,x,0,0);
	
	
	WINDOW *subsreen = subwin(screen, 10, 10,10, 10);

	WINDOW *subscreen2 = subwin(screen,10,10,15,15);
	
	fillWindow(screen,'#');
	fillWindow(subsreen,'A');
	fillWindow(subscreen2,'B');
	
	
	
	wrefresh(subsreen);
	wrefresh(subscreen2);
	refreshAllWindows();
	
	wgetch(subsreen);
	
	deinitDisplay();

	char * test=new char[2];

	test[0]=1;
	test[1]=1;

	printf("test[0] %d \n",test[0]);
	printf("test[1] %d \n",test[1]);

	delete [] test;

	char * tmp = new char[3];
	tmp[0]=2;
	tmp[1]=2;
	tmp[2]=2;
	
	test = new char[3];
	test=testprint(tmp);

	delete [] tmp;

	tmp = new char[2];
	
	printf("new[0] %d \n", test[0]);
	printf("new[1] %d \n", test[1]);
	printf("new[2] %d \n", test[2]);


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
