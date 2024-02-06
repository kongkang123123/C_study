#include <stdio.h>
#define SIZE 22

int main(void) {
	int list[SIZE] = { 4,2,4,3,11,6,4,4,1,4,2, 3,3,1,2,2,6,0,2,1,3,2};

	int i, j, tmp, least;

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
			tmp = list[i];
			list[i] = list[least];
			list[least] = tmp;
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
	return 0;
}