#include <stdio.h>

int main(void) {
	double x;
	double fx;

	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	if (x <= 0) {
		fx = x * x - 9 * x + 2;
	}
	else {
		fx = 7 * x + 2;
	}

	printf("f(x)�� ���� %.2lf �Դϴ�.\n", fx);

	return 0;
}