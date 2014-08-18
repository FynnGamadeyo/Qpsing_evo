#ifndef TERMINALRENDER_HH 
#define TERMINALRENDER 1
#define DEFAULTSIZE 12
#include "display.hh"
#include <vector>
using namespace std;


class TerminalRender {
public:
      TerminalRender();
      void render(WINDOW * w, vector<char>  pixels, int width, int height, int depth);
};

#endif /* TERMINALRENDER_HH  */
