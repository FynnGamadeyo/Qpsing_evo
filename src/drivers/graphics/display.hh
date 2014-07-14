#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

struct Sprite{
	int color;
	string name;
	int x;
	int y;
};

struct SubWindow{
	string name;
	WINDOW * window;
	WINDOW * windowParent;
};

struct MainWindow{
	WINDOW * parentWindow;
	WINDOW * childWindows[];
};


void initDisplay();

WINDOW* createWindow(string name,int height,int width,int y,int x);

void createMenu();

void deleteWindowByName(string name);

void refreshAllWindows();

void clearAllWindows();

void deinitDisplay();

/////////////////////////////// Subwindow methods

int createSubWindow(WINDOW * w, string name, int height, int width, int y, int x);

int resizeSubWindow(string name, int height, int width);

int changeXYSubWindow(string name, int height, int width);

int deleteSubWindow(string name);

#endif /* DISPLAY_HH  */
