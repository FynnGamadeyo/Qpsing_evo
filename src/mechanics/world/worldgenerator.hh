#ifndef worldgenerator_hh
#define worldgenerator_hh 1

class Worldgenerator {
	public:
		Worldgenerator();
		~Worldgenerator();
		void generate(char* world,int length,int width,int depth,int complex);
	private:
		void spwanMonster(char* world,int population,int minLevel, int maxLevel);
		void spwanMonsterBase();
		void spwanNPCs(char* world,int population,int minLevel, int maxLevel);
		void spwanVillage();
		void spwanTown();
		void spwanCapital();
		void generateEnvironment();
};

#endif /* worldgenerator_hh */