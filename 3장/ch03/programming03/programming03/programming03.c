#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double base, height, area;		// �ﰢ���� �غ�, ����, ����

	printf("�ﰢ���� �غ� : ");
	scanf("%lf", &base);

	printf("�ﰢ���� ���� : ");
	scanf("%lf", &height);

	area = 0.5 * base * height;
	printf("�ﰢ���� ���� : %.2lf", area);

	return 0;
}