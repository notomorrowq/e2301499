#include "screen.h"
#include <stdio.h>

void setFGcolor(int color) {
	printf("\x1B[1;%dm", color);
	fflush(stdout);
}

void clearScreen(void) {
	printf("\x1B[2J");
	fflush(stdout);
}

void gotoXY(int row, int col) {
	printf("\x1B[%d;%dH", row, col);
	fflush(stdout);
}

void resetColor() {
	printf("\x1B[0m");
	fflush(stdout);
}

void setBgColor(int color) {
	printf("\x1B[%dm", color + 10);
	fflush(stdout);
}