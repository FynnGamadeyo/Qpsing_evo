#include "game.hh"

bool running=false;

Game::Game(){

}

void Game::run(){
	timespec ts;
	clock_gettime(CLOCK_REALTIME,&ts);

}

void Game::tick(){

}

void render(){

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
