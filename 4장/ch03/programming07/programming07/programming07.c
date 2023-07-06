#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double mass, speed, kenergy;

	printf("질량(kg) : ");
	scanf_s("%lf", &mass);

	printf("속도(m/s) : ");
	scanf_s("%lf", &speed);

	printf("운동에너지(J) : %lf", 0.5 * mass * speed * speed);

	return 0;
}