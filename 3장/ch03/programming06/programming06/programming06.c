// ���������� �ڽ��� �����Ը� �޿����� �����Է� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MOON_GRAVITY 0.17		// ���� �߷��� ������ �� 17% 
int main(void) {
	double weight, weight_on_moon;	// ���������� �����Կ� �޿����� ������

	printf("�����Ը� �Է��Ͻÿ�(����: kg) : ");
	scanf("%lf", &weight);

	weight_on_moon = MOON_GRAVITY * weight;
	printf("�޿����� �����Դ� %.2lfkg�Դϴ�.", weight_on_moon);

	return 0;
}