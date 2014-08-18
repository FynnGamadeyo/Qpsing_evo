#include "game.hh"
#include <sys/time.h>
#include "../drivers/graphics/terminalRender.hh"


Game::Game(WINDOW *w){
  this->viewingWindow=w;
  this->fps=30.0;
  this->running=false;
  
  this->windowSizeX=40;
  this->windowSizeY=40;
}

void Game::run(){
	int pretime;
	timespec pretimeInit;
	clock_gettime(CLOCK_REALTIME,&pretimeInit);
	pretime=pretimeInit.tv_nsec;
	timespec curtime;
	int passtime;

	bool ticked=false;
	
	int frames=0;
	double delta =0;
	double fix=1.0/fps;
	int tickcount=0;
	
	while(this->running){
	  clock_gettime(CLOCK_REALTIME,&curtime);
	  passtime=curtime.tv_nsec-pretime;
	  
	  delta+=passtime/1000000000.0;
	  
	  while(delta>fix){
	    this->tick();
	    delta-=fix;
	    ticked=true;
	    tickcount++;
	    if(tickcount % ((int)fps) ==0){
		pretime+=1000;
		frames=0;
	      
	    }
	  }
	  if(ticked){
	    this->render();
	    frames++;
	  }
	  this->render();
	  frames++;
	}
}

void Game::tick(){

}

void Game::render()
{
   
   this->viewingWindow;
}

void Game::start()
{
      this->running=true;
      this->run();
}



//~ long lastTime = System.nanoTime();
		//~ long timer =  System.currentTimeMillis();
		//~ 
		//~ final double ns = 1000000000.0 / 60.0;
		//~ double delta=0;
		//~ int frames=0;
		//~ int updates=0;
		//~ 
		//~ while(running){
			//~ long now = System.nanoTime();
			//~ delta += (now-lastTime) / ns;
			//~ lastTime=now;
			//~ while(delta >=1){
				//~ update();
				//~ updates++;
				//~ delta--;
			//~ }
			//~ render();
			//~ frames++;
			//~ 
			//~ if((System.currentTimeMillis() - timer) > 1000 ){
				//~ timer +=1000;
				//~ System.out.println(updates + " ups, "+ frames + " fps");
				//~ frame.setTitle(updates + " ups, "+ frames + " fps");
				//~ frames=0;
				//~ updates=0;
			//~ }
		//~ }
		//~ stop();
