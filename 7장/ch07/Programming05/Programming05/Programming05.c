#include <stdio.h>

int main(void) {
	double r, i, result;
	int n;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);

	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	result = r;
	for (i = 0; i < n-1; i++) {
		result *= r;
	}

	printf("������� %lf\n", result);

	return 0;
}