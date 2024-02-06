#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int array_equal(int a[], int b[], int size);

int main(void) {
	int a[SIZE] = { 0, };
	int b[SIZE] = { 0, };
	int i;

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &b[i]);
	}

	if (array_equal(a, b, SIZE)) {
		printf("2개의 배열은 같음.\n");
	}
	else {
		printf("2개의 배열은 다름\n");
	}

	return 0;
}

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) return 0;
	}

	return 1;
}