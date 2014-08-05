#include "draw.hh"



void Draw2D::fillWindow(char pixels[], char c, int startX, int startY, int width, int heigth)
{
      for(int posY=startY; posY<heigth;posY++){
	for(int posX=startX;posX<width;posY++){
	    pixels[posX+startY*heigth]=c;
	}
      }
}

void Draw2D::addBorder(char pixels[], char c, int startX, int startY, int width, int heigth)
{
      int endX=startX+width-1;
      int endY=startY+heigth-1;
      int y1=startY*heigth;
      int y2= endY*heigth;
      
      for(int i=startX;i<width;i++){
	pixels[i+y1]=c;
	pixels[i+y2]=c;
      }
        
      for(int i=startY+1;i<heigth-1;i++){
	pixels[startX+i*heigth]=c;
	pixels[endX+i*heigth]=c;
      }      
}

 

// void fillWindow(WINDOW * w, char c){
// 	int maxX,maxY;
// 	getmaxyx(w,maxY,maxX);
// 	
// 	
// 	for(int posY=0; posY<maxY;posY++){
// 		for(int posX=0; posX<maxX;posX++){
// 			
// 			mvwprintw(w,posY,posX,&c);
// 		}
// 	}
// 	wmove(w,0,0);
// }
// 
// 
// void clearArea(WINDOW *w,int x, int y){
// 	int currentX,currentY;
// 	getmaxyx(w,currentY,currentX);
// 	
// 	move to specific Area to clear
// 	wmove(w,y,x);
// 
// 	wclrtoeol(w);
// 	
// 	move back to current position
// 	wmove(w,currentY,currentX);
// }
