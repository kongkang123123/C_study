#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double mass, speed, kenergy;

	printf("����(kg) : ");
	scanf_s("%lf", &mass);

	printf("�ӵ�(m/s) : ");
	scanf_s("%lf", &speed);

	printf("�������(J) : %lf", 0.5 * mass * speed * speed);

	return 0;
}