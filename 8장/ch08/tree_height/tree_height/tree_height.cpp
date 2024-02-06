#include <math.h>
#include <stdio.h>

double degree_to_radian(double degree);

int main(void) {
	double height, distance, tree_height, degrees, radians;

	printf("���������� �Ÿ�(����: ����): ");
	scanf_s("%lf", &distance);

	printf("�������� Ű(����: ����): ");
	scanf_s("%lf", &height);

	printf("����(����: ��): ");
	scanf_s("%lf", &degrees);

	tree_height = tan(degree_to_radian(degrees)) * distance + height;
	printf("������ ����(����: ����): %lf\n", tree_height);

	return 0;
}

double degree_to_radian(double degrees) {
	return degrees * (3.141592 / 180.0);
}