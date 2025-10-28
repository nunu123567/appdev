#include "screen.h"
#include <stdio.h>

void clearScreen(void) {
	printf("\x1b[2J");
	fflush(stdout);
}

void gotoXY(int x, int y) { //x cloumn y row
	printf("\x1b[%d;%dH", y, x);
	fflush(stdout);
}

void setFGcolor(int c) {
	printf("\x1b[%d;1m", c);
	fflush(stdout);
}

void setBGcolor(int c) {
	printf("\x1b[%d;1m", c+10);
	fflush(stdout);
}

void restcolors(void) {
	printf("\x1b[0m");
	fflush(stdout);

}