#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main(void) {
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	printf("���� ������ %.2lf�Դϴ�.\n", cal_area(radius));

	return 0;
}

double cal_area(double radius) {
	return radius * radius * PI;
}