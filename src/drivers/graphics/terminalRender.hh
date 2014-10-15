#ifndef TERMINALRENDER_HH 
#define TERMINALRENDER 1
#define DEFAULTSIZE 12
#include "display.hh"
#include <vector>
using namespace std;


class TerminalRender {
public:
      TerminalRender();
      void render(WINDOW * w, vector<char> imagePix, int imageWidth, int imageHeight,int imagePosX,int imagePosY,int startDepth, int windowWidth, int windowHeight);
};

#endif /* TERMINALRENDER_HH  */
