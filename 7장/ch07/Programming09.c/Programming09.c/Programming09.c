#include <stdio.h>

int main(void) {
	int num1, num2, divisor, op;

	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		divisor = num2;
		op = num1;
	}
	else {
		divisor = num1;
		op = num2;
	}
	int nice = op;
	while (nice % divisor != 0) {
		nice += op;
		if (nice % divisor == 0) {
			printf("최소공배수는 %d입니다.\n", nice);
			break;
		}
	}
	return 0;
}