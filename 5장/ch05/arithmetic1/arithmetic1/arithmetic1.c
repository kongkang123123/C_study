#include <stdio.h>

int main(void) {
	double x, y, result;

	printf("�Ǽ� 2���� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &x, &y);
	result = x + y;		// ���� ������ �Ͽ��� ����� result�� ����
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);


	return 0;
}