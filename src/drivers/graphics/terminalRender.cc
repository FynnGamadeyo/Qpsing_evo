#include "terminalRender.hh"

TerminalRender::TerminalRender(){
  
}

void TerminalRender::render(WINDOW * w, vector<char> imagePix, int imageWidth, int imageHeight,int imagePosX,int imagePosY,int startDepth, int windowWidth, int windowHeight){
	
	if(imagePosX<windowWidth && imagePosY<windowHeight){
  
	int endY=(imagePosY+imageHeight);
	int endX=(imagePosX+imageWidth);
	int startX=imagePosX;
	int startY=imagePosY;
  
	if(imagePosX<0){
	  startX=0;
	}
	
	if(imagePosY<0){
	  startY=0;
	}
	
	if((imagePosY+imageHeight)>windowHeight){
	  endY=(imagePosY+imageHeight)-((imagePosY+imageHeight)-windowHeight);
	}
	
	if((imagePosX+imageWidth)>windowWidth){
	  endX=(imagePosX+imageWidth)-((imagePosX+imageWidth)-windowWidth); 
	}
  
	for(int y=startY;y<endY;y++){
	  for(int x=startX;x<endX;x++){
	    
	      mvwprintw(w,y,x,&imagePix[x + imageWidth * y + startDepth * imageWidth * imageHeight]); 
	    
	  }
	}
	wmove(w,0,0);
	wrefresh(w);
	
	}else{
	  // ERROR IMAGE IS OUT OF WINDOW !
	}
}

