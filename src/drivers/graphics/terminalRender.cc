#include "terminalRender.hh"

TerminalRender::TerminalRender(){
	this->pixels= new char[DEFAULTSIZE];	
}

TerminalRender::~TerminalRender(){
	delete [] this->pixels;
}

void TerminalRender::render(int width, int height, int currentPosition){
	delete [] this->pixels;

	this->pixels = new char[width * height];

//	for(int y=0;y<height;y++){
//		for(int x=0;x<width;x++){
//			this->pixels[x + width * y]=
//		}
//	}

}
