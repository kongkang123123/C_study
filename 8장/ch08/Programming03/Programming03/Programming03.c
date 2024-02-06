#include <stdio.h>

void get_bigger(double a, double b);

int main(void) {
	double a, b;

	printf("실수를 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);
	get_bigger(a, b);

	return 0;
}

void get_bigger(double a, double b) {
	if (a > b) {
		printf("큰 수는 %lf입니다.\n", a);
	}
	else {
		printf("큰 수는 %lf입니다.\n", b);
	}
}