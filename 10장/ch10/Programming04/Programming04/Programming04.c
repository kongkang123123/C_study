#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);

int main(void) {
	int a[SIZE];
	int b[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &a[i]);
	}

	array_copy(a, b, SIZE);

	for (i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n\n배열이 복사되었음\n");

	return 0;
}

void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}