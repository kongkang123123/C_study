#include <stdio.h>

int main(void) {
	int i, years;
	double total, rate, investment;

	printf("���� : ");
	scanf_s("%lf", &investment);
	printf("����(%%) : ");
	scanf_s("%lf", &rate);
	printf("�Ⱓ(��) : ");
	scanf_s("%d", &years);

	printf("===================\n");
	printf("����        ������\n");
	printf("===================\n");
	total = investment;
	rate /= 100.0;

	for (i = 0; i < years; i++) {
		total = total * (1 + rate);
		printf("%2d      %10.1lf\n", i + 1, total);
	}

	return 0;
}