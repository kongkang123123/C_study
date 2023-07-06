#include <stdio.h>

int main(void) {
	double num;
	double sum = 0;
	int i;

	printf("항의 개수 : ");
	scanf_s("%lf", &num);

	for (i = 1; i <= num; i++) {
		sum += 1.0 / i;
	}

	printf("수열의 합 = %lf", sum);

	return 0;
}