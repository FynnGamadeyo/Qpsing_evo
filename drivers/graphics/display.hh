#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

void update();

/**
 * clear specific Area
 **/
void clearArea(int x, int y);

void initDisplay();

WINDOW createWindow();

void createMenu();

void deleteWindowByName(string name);

void wdeleteWindow(WINDOW w);

void refreshAllWindows();

void deinitDisplay();

#endif /* DISPLAY_HH  */
