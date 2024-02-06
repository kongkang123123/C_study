#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 0 };
	int i, minimum;

	printf("--------------------------------------\n");
	printf("1  2  3  4  5  6  7  8  9  10\n");
	printf("--------------------------------------\n");

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%-3d", prices[i]);		// %-3d는 3자리의 필드에 왼쪽 정렬하여 출력.
	}
	printf("\n\n");

	minimum = prices[0];

	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum) {
			minimum = prices[i];
		}
	}

	printf("최소값은 %d입니다.\n", minimum);

	return 0;
}