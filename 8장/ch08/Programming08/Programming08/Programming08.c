#include <stdio.h>

double get_tax(int income);

int main(void) {
	int income;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf_s("%d", &income);

	printf("�ҵ漼�� %.0lf�����Դϴ�.\n", get_tax(income));
}

double get_tax(int income) {
	if (income <= 1000) {
		return income * 0.08;
	}
	else {
		return 80 + ((income - 1000) * 0.1);
	}
}