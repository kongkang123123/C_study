// ȭ���µ��� �����µ��� ȯ���ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double f, c;	// f : ȭ���µ� / c : �����µ�

	printf("ȭ������ �Է��Ͻÿ� : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);
	printf("�������� %.2lf�� �Դϴ�.", c);

	return 0;
}