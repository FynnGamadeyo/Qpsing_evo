#ifndef DRAW_HH
#define DRAW_HH 1

#include <ncurses.h>

/**
 * clear specific Area
 **/
void clearArea(int x, int y);

void fillWindow(WINDOW * w, char c);

#endif /* DRAW_HH  */
