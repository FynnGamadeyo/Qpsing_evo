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
