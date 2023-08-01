#include <stdio.h>

int main(void) {
	double x;
	double fx;

	printf("x의 값을 입력하시오: ");
	scanf_s("%lf", &x);

	if (x <= 0) {
		fx = x * x - 9 * x + 2;
	}
	else {
		fx = 7 * x + 2;
	}

	printf("f(x)의 값은 %.2lf 입니다.\n", fx);

	return 0;
}