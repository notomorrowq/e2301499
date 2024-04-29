#include <stdio.h>


int main(void) {
	printf("Welcom to Pascal\n");
	int n_rows;
	printf("Enter the number of rows of Pascal Triangle: ");
	scanf_s("%d", &n_rows);
	pascal_triangle(n_rows);
	return 0;
}
