#ifndef GAME_HH
#define GAME_HH 1

#include <ctime>
class Game {
	public:
		Game();
		~Game();
		void run();
	private:
		void tick();
		void render();
		void stop();
		void start();
		bool running;
		double fps;
};

#endif /* GAME_HH */
