#include <stdio.h>
#define PI 3.14

int main(void) {
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	printf("ǥ������ %.2lf�Դϴ�.\n", 4.0 * PI * radius * radius);
	printf("ü���� %.2lf�Դϴ�.\n", 4.0 / 3.0 * PI * radius * radius * radius);

	return 0;
}