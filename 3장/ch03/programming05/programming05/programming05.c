// ���׽� 3*x*x + 7*x + 11 �� ���� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double polynomial, x;		// ���׽İ� ���׽Ŀ� �Է��� ��
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &x);

	polynomial = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %.2lf", polynomial);

	return 0;
}