#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double w, h, d;

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf_s("%lf %lf %lf", &w, &h, &d);
	printf("������ ���Ǵ� %lf�Դϴ�.", w * h * d);

	return 0;
}