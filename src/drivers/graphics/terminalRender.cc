#include "terminalRender.hh"

TerminalRender::TerminalRender(){
  
}

void TerminalRender::render(WINDOW * w, char pixels[], int width, int height){
	for(int y=0;y<height;y++){
		for(int x=0;x<width;x++){
			mvwprintw(w,y,x,&pixels[x + width * y]);
		}
	}
	wmove(w,0,0);
	wrefresh(w);
}

