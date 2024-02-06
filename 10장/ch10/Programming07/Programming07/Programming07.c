#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_r(int matrix[3][5], int idx);
int sum_c(int matrix[3][5], int idx);

int main(void) {
	int matrix[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	int i, j;

	for (i = 0; i < 3; i++) {
		printf("%d행의 합계: %d\n", i, sum_r(matrix, i));
	}
	for (i = 0; i < 5; i++) {
		printf("%d열의 합계: %d\n", i, sum_c(matrix, i));
	}

	return 0;
}

int sum_r(int matrix[3][5], int idx) {
	int res = 0;
	for (int i = 0; i < 5; i++) {
		res += matrix[idx][i];
	}

	return res;
}

int sum_c(int matrix[3][5], int idx) {
	int res = 0;
	for (int i = 0; i < 3; i++) {
		res += matrix[i][idx];
	}

	return res;
}