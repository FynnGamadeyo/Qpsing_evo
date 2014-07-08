#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>


void update();

/**
 * clear specific Area
 **/
void clearArea(int x, int y);

void initDisplay();

#endif /* DISPLAY_HH  */
