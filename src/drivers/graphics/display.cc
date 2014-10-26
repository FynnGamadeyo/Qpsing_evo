#include "display.hh"
#include <unistd.h>

Display::Display(bool cursset){
	this->initDisplay(cursset);
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &this->ww);
	
	this->height=this->ww.ws_row;
	this->width =this->ww.ws_row;
}

void Display::initDisplay(bool cursset){
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(cursset);
}

Display::~Display()
{
	endwin();
}


void Display::refresh()
{
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &this->ww);
	this->height=this->ww.ws_row;
	this->width =this->ww.ws_row;
}

