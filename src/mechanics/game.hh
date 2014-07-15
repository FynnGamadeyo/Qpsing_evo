#ifndef GAME_HH
#define GAME_HH 1
#include <sys/time.h>
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
};

#endif /* GAME_HH */
