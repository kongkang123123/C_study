#include <stdio.h>

double get_tax(int income);

int main(void) {
	int income;

	printf("소득을 입력하시오(만원): ");
	scanf_s("%d", &income);

	printf("소득세는 %.0lf만원입니다.\n", get_tax(income));
}

double get_tax(int income) {
	if (income <= 1000) {
		return income * 0.08;
	}
	else {
		return 80 + ((income - 1000) * 0.1);
	}
}