#ifndef GAME_HH
#define GAME_HH 1

#include <vector>

#include <ctime>
using namespace std;

class Game {
	public:
		Game();
		~Game();
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
};
#endif /* GAME_HH */