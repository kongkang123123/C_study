#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void) {
	int i;
	int scores[SIZE];

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		scores[i] = rand() % 100;
		printf("scores[%d] = %d\n", i, scores[i]);
	}

	return 0;
}