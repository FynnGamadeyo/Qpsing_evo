#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string>
#include <stack>
#include <map>

#define NUMBER_OF_CHILDWINDOW 12
#define NUMBER_OF_PARENTWINDOW 12

using namespace std;

class Display{
	public:
	Display(bool cursset);
	private:
	void initDisplay(bool cursset);
};

#endif /* DISPLAY_HH  */
