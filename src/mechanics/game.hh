#ifndef GAME_HH
#define GAME_HH 1

#include <ncurses.h>
#include <vector>
#include <ctime>

using namespace std;

class Game {
	public:
		Game(WINDOW *w);
		void run();
	private:
		void tick();
		void render();
		void stop();
		void pause();
		void start();
		bool running;
		double fps;
		int windowSizeX;
		int windowSizeY;
		std::vector<char> window;
		WINDOW *viewingWindow;
};
#endif /* GAME_HH */