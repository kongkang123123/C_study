#include <stdio.h>

int main(void) {
	double r, i, result;
	int n;

	printf("실수의 값을 입력하시오 : ");
	scanf_s("%lf", &r);

	printf("거듭 제곱 횟수를 입력하시오 : ");
	scanf_s("%d", &n);

	result = r;
	for (i = 0; i < n-1; i++) {
		result *= r;
	}

	printf("결과값은 %lf\n", result);

	return 0;
}