#include <stdio.h>
#define PI 3.141592

void cal_area(double radius);

int main(void) {
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	cal_area(radius);

	return 0;
}

void cal_area(double radius) {
	printf("���� ������ %.2lf�Դϴ�.\n", PI * radius * radius);
}