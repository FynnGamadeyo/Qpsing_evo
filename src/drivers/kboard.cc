#include "kboard.hh"

int keyPressed(char key){
	if(kbhit()==1){
		if(wgetch()==key){
			return 1;
		}
	}
	return 0;
}

int kbhit(void) {
	struct termios term, oterm;
	int fd = 0;
	int c = 0;

	tcgetattr(fd, &oterm);
	memcpy(&term, &oterm, sizeof(term));
	term.c_lflag = term.c_lflag & (!ICANON);
	term.c_cc[VMIN] = 0;
	term.c_cc[VTIME] = 1;

	tcsetattr(fd, TCSANOW, &term);
	c = getchar();
	tcsetattr(fd, TCSANOW, &oterm);
	if (c != -1)

		ungetc(c, stdin);
	return ((c != -1) ? 1 : 0);

}

int wgetch(){
	static int ch = -1, fd = 0;
	struct termios neu, alt;
	fd = fileno(stdin);
	tcgetattr(fd, &alt);
	neu = alt;
	neu.c_lflag &= ~(ICANON|ECHO);
	tcsetattr(fd, TCSANOW, &neu);
	ch = getchar();
	tcsetattr(fd, TCSANOW, &alt);
	return ch;
}