#include <stdio.h>

void round(double f);

int main(void) {
	double f;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &f);

	round(f);

	return 0;
}

void round(double f) {
	printf("�ݿø��� ���� %d�Դϴ�.\n", (int)(f + 0.5));
}