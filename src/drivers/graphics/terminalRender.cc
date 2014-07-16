#include "terminalRender.hh"

void render(int width, int height, char pixels[], WINDOW * w){
	for(int y=0;y<height;y++){
		for(int x=0;x<width;x++){
			mvwprintw(w,y,x,&pixels[x + width * y]);
		}
	}
	wmove(w,0,0);
}

//~ TerminalRender::TerminalRender(){
	//~ this->pixels= new char[DEFAULTSIZE];	
//~ }
//~ 
//~ TerminalRender::~TerminalRender(){
	//~ delete [] this->pixels;
//~ }
//~ 
//~ void TerminalRender::render(int width, int height){
	//~ delete [] this->pixels;
//~ 
	//~ this->pixels = new char[width * height];
//~ 
//~ //	for(int y=0;y<height;y++){
//~ //		for(int x=0;x<width;x++){
//~ //			this->pixels[x + width * y]=
//~ //		}
//~ //	}
//~ 
//~ }
