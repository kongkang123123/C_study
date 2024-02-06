#include <stdio.h>

void round(double f);

int main(void) {
	double f;

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &f);

	round(f);

	return 0;
}

void round(double f) {
	printf("반올림한 값은 %d입니다.\n", (int)(f + 0.5));
}