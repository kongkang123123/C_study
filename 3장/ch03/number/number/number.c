#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double num1, num2, num3;	// �Ǽ� 3�� ������ ����
	double sum;					// �Ǽ� 3���� ��
	double avg;					// �Ǽ� 3���� ���

	printf("3���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("�հ� = %.2lf\n", sum);
	printf("��� = %.2lf", avg);

	return 0;
}