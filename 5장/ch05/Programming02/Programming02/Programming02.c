#include <stdio.h>

int main(void) {
	double num1, num2;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("%.2lf %.2lf %.2lf %.2lf", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}