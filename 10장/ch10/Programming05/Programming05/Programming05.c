#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	srand((unsigned)time(NULL));

	int max = 0;
	int mode[10] = { 0, };

	for (int i = 0; i < 100; i++) {
		++mode[rand() % 10];
	}

	for (int i = 0; i < 10; i++) {
		if (max < mode[i]) max =i;
	}
	printf("가장 많이 나온 수 = %d\n", max);

	return 0;
}