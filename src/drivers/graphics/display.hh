#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#define NUMBER_OF_CHILDWINDOW 12

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
	string * name;
	WINDOW * windowParent;
};

struct MainWindow{
	WINDOW * parentWindow;
	map<string,WINDOW*> childWindows;
};


void initDisplay();

WINDOW* createWindow(int height,int width,int y,int x);

void createMenu();

void deleteWindowByName(WINDOW * W);

void refreshAllWindows();

void clearAllWindows();

void deinitDisplay();

/////////////////////////////// Subwindow methods

WINDOW* createSubWindow(WINDOW * w, string name, int height, int width, int y, int x);

int resizeSubWindow(string name, int height, int width);

int changeXYSubWindow(string name, int height, int width);

int deleteSubWindow(string name);

#endif /* DISPLAY_HH  */
