// 10�� ������ �ð��� �˷��ִ� ���α׷� (��, ������ �� Ǭ�� ���� �ʾƾ� ��)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double billion= 100000;		// 10��(���� ������ "0" 4�� ����)
	double salary;				// ����
	double year;				// 10�� �����µ� �ɸ��� �ð�

	printf("������ �Է��Ͻÿ�(����: ����) : ");
	scanf("%lf", &salary);

	year = billion / salary;

	printf("10���� �����µ� �ɸ��� �ð�(����: ��) : %.2lf", year);

	return 0;
}