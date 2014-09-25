#ifndef worldgenerator_hh
#define worldgenerator_hh 1
#include <vector>

using namespace std;

class Worldgenerator {
	public:
		Worldgenerator();
		~Worldgenerator();
		void generate(vector<char> world,int length,int width,int depth,int complex);
	private:
		void spwanMonster(vector<char> world,int population,int minLevel, int maxLevel);
		void spwanMonsterBase();
		void spwanNPCs(vector<char> world,int population,int minLevel, int maxLevel);
		void spwanVillage();
		void spwanTown();
		void spwanCapital();
		void generateEnvironment(vector<char> world,int length,int width,int depth);
};

#endif /* worldgenerator_hh */