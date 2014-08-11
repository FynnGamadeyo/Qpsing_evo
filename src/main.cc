#include "mechanics/actors/actor.hh"
#include "drivers/graphics/display.hh"
#include "drivers/graphics/draw.hh"
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stack>
#define A 1
#define B 2
#define C (A+B)
#include <sys/time.h>
#include <vector>


using namespace std;


int main()
{
	vector<char> window;
	window.push_back('a');
	window[1]='b';
	
	printf("a ==? %i   und  %i  ",window.max_size() , 'b');
	
	//~ int x,y;
	//~ initDisplay();
	//~ getmaxyx(stdscr,y,x);
	//~ 
	//~ WINDOW *screen  = crateWindow("screen",y,x,0,0);
	//~ 
	//~ 
	//~ WINDOW *subsreen = subwin(screen, 10, 10,10, 10);
//~ 
	//~ WINDOW *subscreen2 = subwin(screen,10,10,15,15);
	//~ 
	//~ fillWindow(screen,'#');
	//~ fillWindow(subsreen,'A');
	//~ fillWindow(subscreen2,'B');
	//~ 
	//~ 
	//~ 
	//~ wrefresh(subsreen);
	//~ wrefresh(subscreen2);
	//~ refreshAllWindows();
	//~ 
	//~ wgetch(subsreen);
	//~ 
	//~ 
	//~ WINDOW * testWindow = getWindow("screen");
	//~ fillWindow(testWindow,'N');
	//~ 
	//~ wrefresh(testWindow);
	//~ 
	//~ wgetch(testWindow);
	//~ 
	//~ deinitDisplay();

	return 0;
}


