#include <stdio.h>

int main(void) {
	int i, years;
	double total, rate, investment;

	printf("원금 : ");
	scanf_s("%lf", &investment);
	printf("이율(%%) : ");
	scanf_s("%lf", &rate);
	printf("기간(년) : ");
	scanf_s("%d", &years);

	printf("===================\n");
	printf("연도        원리금\n");
	printf("===================\n");
	total = investment;
	rate /= 100.0;

	for (i = 0; i < years; i++) {
		total = total * (1 + rate);
		printf("%2d      %10.1lf\n", i + 1, total);
	}

	return 0;
}