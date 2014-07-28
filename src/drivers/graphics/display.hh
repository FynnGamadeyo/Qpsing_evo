#ifndef DISPLAY_HH
#define DISPLAY_HH 1

#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string>
#include <stack>
#include <map>

#define NUMBER_OF_CHILDWINDOW 12
#define NUMBER_OF_PARENTWINDOW 12

using namespace std;

class Display{
	public:
	Display();
	~Display();
	void initDisplay(bool cursset);
	WINDOW* createWindow(int height,int width,int y,int x);
	void createMenu();
	void deleteWindow(WINDOW * W);
	void refreshAllWindows();
	void clearAllWindows();
	void deinitDisplay();
	/////////////////////////////// Subwindow methods
	WINDOW* createSubWindow(WINDOW * w, string name, int height, int width, int y, int x);
	int resizeSubWindow(string name, int height, int width);
	int changeXYSubWindow(string name, int height, int width);
	int deleteSubWindow(string name);
	private:
	map<WINDOW*,int> parentWindows;
	WINDOW* childWindows[NUMBER_OF_PARENTWINDOW * NUMBER_OF_CHILDWINDOW];
	stack<int> freeWindows;
};

#endif /* DISPLAY_HH  */
