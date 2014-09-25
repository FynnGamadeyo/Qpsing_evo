#include "terminalRender.hh"

TerminalRender::TerminalRender(){
  
}

void TerminalRender::render(WINDOW * w, vector<char> imagePix, int windowWidth, int windowHeight,int imagePosX,int imagePosY,int startDepth, int width, int height){
	int endY;
	if((imagePosY+windowHeight)>height){
	  endY=(imagePosY+windowHeight)-((imagePosY+windowHeight)-width);
	}else{
	  endY=(imagePosY+windowHeight);
	}
	
	int endX;
	if((imagePosX+windowWidth)>width){
	  endX=23232323; // <-<>->
	}else{
	  
	}
  
	for(int y=imagePosY;y<endY;y++){
	  for(int x=imagePosX;x<(imagePosX+windowWidth);x++){
	    
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

