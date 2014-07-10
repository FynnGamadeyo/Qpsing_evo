#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

/**
 * clear specific Area
 **/
void clearArea(int x, int y);

void initDisplay();

WINDOW* createWindow(string name,int height,int width,int y,int x);

void createMenu();

void deleteWindowByName(string name);

void refreshAllWindows();

void clearAllWindows();

void deinitDisplay();

#endif /* DISPLAY_HH  */
