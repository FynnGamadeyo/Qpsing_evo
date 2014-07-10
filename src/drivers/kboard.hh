#ifndef kboard_HH
#define kboard_HH 1

#include <termios.h>
#include <string.h>
#include <string>
#include <stdio.h>

int wgetch();
int kbhit(void);
int keyPressed(char key);

#endif /* kboard_HH */
