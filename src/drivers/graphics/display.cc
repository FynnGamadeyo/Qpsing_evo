#include "display.hh"
#include <unistd.h>

Display::Display(bool cursset){
	this->initDisplay(cursset);
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &this->w);
	
	this->height=this->w.ws_row;
	this->width =this->w.ws_row;
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
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &this->w);
	this->height=this->w.ws_row;
	this->width =this->w.ws_row;
}

