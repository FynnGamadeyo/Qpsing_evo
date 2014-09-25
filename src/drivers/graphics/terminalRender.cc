#include "terminalRender.hh"

TerminalRender::TerminalRender(){
  
}

void TerminalRender::render(WINDOW * w, vector<char> imagePix, int windowWidth, int windowHeight,int startWidth,int startHeight,int startDepth, int width, int height){
	int endY;
	if((startHeight+windowHeight)>height){
	  endY=(startHeight+windowHeight)-((startHeight+windowHeight)-width);
	}else{
	  endY=(startHeight+windowHeight);
	}
	
	int endX;
	if((startWidth+windowWidth)>width){
	  endX=23232323; // <-<>->
	}else{
	  
	}
  
	for(int y=startHeight;y<endY;y++){
	  for(int x=startWidth;x<(startWidth+windowWidth);x++){
	    
	      mvwprintw(w,y,x,&imagePix[x + width * y + startDepth * width * height]);
	    
	  }
	}
	wmove(w,0,0);
	wrefresh(w);
  
// 	for(int y=0;y<height;y++){
// 		for(int x=0;x<width;x++){
// 			mvwprintw(w,y,x,&pixels[x + width * y]);
// 		}
// 	}
// 	wmove(w,0,0);
// 	wrefresh(w);
}

