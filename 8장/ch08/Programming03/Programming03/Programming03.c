#include <stdio.h>

void get_bigger(double a, double b);

int main(void) {
	double a, b;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &a, &b);
	get_bigger(a, b);

	return 0;
}

void get_bigger(double a, double b) {
	if (a > b) {
		printf("ū ���� %lf�Դϴ�.\n", a);
	}
	else {
		printf("ū ���� %lf�Դϴ�.\n", b);
	}
}