#ifndef TERMINALRENDER_HH 
#define TERMINALRENDER 1
#define DEFAULTSIZE 12
#include "display.hh"


class TerminalRender {
public:
      TerminalRender();
      void render(WINDOW * w, char pixels[], int width, int height);
};

#endif /* TERMINALRENDER_HH  */
