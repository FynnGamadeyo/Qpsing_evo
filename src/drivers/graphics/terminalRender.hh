#ifndef TERMINALRENDER_HH 
#define TERMINALRENDER 1
#define DEFAULTSIZE 12

class TerminalRender {
	public:
		TerminalRender();
		~TerminalRender();
		void render(int width, int height,int currentPosition);	
	private:
		char * pixels;
};

#endif /* TERMINALRENDER_HH  */
