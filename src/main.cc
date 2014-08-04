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

using namespace std;
void test(int pixel[],int a);

void test(int pixel[],int a){
    for(int i=0;i<a;i++){
      pixel[i]=2;
    }
}

int main()
{
	string a;
	int erg[]={1,1,1,1};
	
	for(int i=0;i<4;i++)printf("%d \n",erg[i]);
	
	test(erg,4);
	
	for(int i=0;i<4;i++)printf("%d \n",erg[i]);
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


