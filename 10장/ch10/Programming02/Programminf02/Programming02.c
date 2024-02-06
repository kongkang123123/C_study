#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	srand((unsigned)time(NULL));
	
	int x[10];

	x[0] = rand();

	int max = x[0];
	int min = x[0];

	for (int i = 1; i < 10; i++) {
		x[i] = rand();

		if (max < x[i]) max = x[i];
		if (min > x[i]) min = x[i];
	}

	printf("최대값은 %d\n", max);
	printf("최소값은 %d\n", min);

	return 0;
}