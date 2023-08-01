#include <stdio.h>

int main(void) {
	int num1, num2, num3, min;

	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2) {
		if (num2 > num3) {
			min = num3;
		}
		else {
			min = num2;
		}
	}
	else {
		if (num1 > num3) {
			min = num3;
		}
		else {
			min = num1;
		}
	}
	printf("제일 작은 정수는 %d입니다.\n", min);

	return 0;
}