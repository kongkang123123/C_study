#include <stdio.h>
#define PI 3.14

int main(void) {
	double d, a, r;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &d);

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &a);

	printf("������ �������� %.2lf�Դϴ�.\n", d/(PI*a / 180));

	return 0;
}