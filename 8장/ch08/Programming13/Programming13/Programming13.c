#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main(void) {
	double x1, y1;
	double x2, y2;

	printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x1, &y1);

	printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x2, &y2);

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", get_distance(x1, y1, x2, y2));

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}