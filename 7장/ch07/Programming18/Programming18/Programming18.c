#include <stdio.h>

int main(void) {
	double num;
	double sum = 0;
	int i;

	printf("���� ���� : ");
	scanf_s("%lf", &num);

	for (i = 1; i <= num; i++) {
		sum += 1.0 / i;
	}

	printf("������ �� = %lf", sum);

	return 0;
}