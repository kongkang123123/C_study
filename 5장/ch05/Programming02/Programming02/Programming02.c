#include <stdio.h>

int main(void) {
	double num1, num2;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("%.2lf %.2lf %.2lf %.2lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}