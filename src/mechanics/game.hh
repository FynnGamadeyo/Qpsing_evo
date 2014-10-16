#ifndef GAME_HH
#define GAME_HH 1

#include <ncurses.h>
#include <vector>
#include <ctime>
#include "../drivers/graphics/display.hh"
// #include "../drivers/sema.hh"
#include "../drivers/graphics/terminalRender.hh"
// #include "manager.hh"

using namespace std;

class Game {
	public:
		Game(Display *w);
		void run();
		void switchMode();
	private:
		void tick();
		void render();
		void stop();
		void pause();
		void start();
		void slowMode();
		void fastMode();
		bool running;
		double fps;
		int windowSizeX;
		int windowSizeY;
		std::vector<char> window;
		Display *viewingWindow;
		TerminalRender terminal;
// 		Manager manager;
};
#endif /* GAME_HH */