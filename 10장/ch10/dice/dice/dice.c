#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main(void) {
	srand((unsigned)time(NULL));
	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++) {
		++freq[rand() % 6];
	}

	printf("====================\n");
	printf("¼ýÀÚ\tºóµµ\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++) {
		printf("%3d\t%3d\n", i + 1, freq[i]);
	}

	return 0;
}