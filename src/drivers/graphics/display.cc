#include "display.hh"

Display::Display(bool cursset){
	this->initDisplay(cursset);
}

void Display::initDisplay(bool cursset){
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(cursset);
}
