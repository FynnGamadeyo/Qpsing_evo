#ifndef DRAW_HH
#define DRAW_HH 1

#include <ncurses.h>
#include <string>
using namespace std;
class Draw2D{
public:
    void fillWindow(char pixels[],char c,int width, int heigth);
    void addBorder(char pixels[],char c,int width, int heigth);
    void createMenu(char pixels[],string c[],int width, int heigth);
};

/**
 * clear specific Area
 **/
void clearArea(int x, int y);

void fillWindow(WINDOW * w, char c);

#endif /* DRAW_HH  */
