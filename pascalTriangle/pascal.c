#include "screen.h"

void pascal_triangle(int rows) {
	int n, k;
	clearScreen();
	gotoXY(1, 35);
	setBgColor(GREEN);
	printf("--Pascal Triangle!--");
	resetColor();
	for (n = 0; n < rows; n++) {
		setFGcolor(RED + n % 7);
		gotoXY(n + 4, 40 - n * 2);
		for (k = 0; k <= n; k++) {
			printf("%4d", nchoosek(n, k));
		}
		printf("\n");
	}
	resetColor();
}

int nchoosek(int n, int k) {
	return factor(n) / factor(k) / factor(n - k);
}

int factor(int number) {
	if (number == 0) return 1;
	else return number * factor(number - 1);
}