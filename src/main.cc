#include "mechanics/actors/actor.hh"
#include "drivers/graphics/display.hh"
#include "drivers/graphics/draw.hh"

// #include "drivers/sema.hh"

#include "drivers/kboard.hh"

#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stack>
#define A 1
#define B 2
#define C (A+B)
#include <sys/time.h>
#include <vector>
#include "mechanics/game.hh"


#include <stdio.h>
#include <stdlib.h>


using namespace std;



int main()
{
// 	d.P();
	
	Display(true);
	mvprintw(2,2,"ddasdasdasdasf");
	wgetch();
  
//     	WINDOW wa;
// 	Game game(&wa);
// 	
// 	game.run();
    
// 	int x,y;
// 	Display();
// 	getmaxyx(stdscr,y,x);
	
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

	return EXIT_SUCCESS;
}


