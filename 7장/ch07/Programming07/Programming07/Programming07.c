#include <stdio.h>

int main(void) {
	int floor, i, j;

	scanf_s("%d", &floor);

	for (i = 0; i < floor; i++) {
		for (j = floor-1; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}