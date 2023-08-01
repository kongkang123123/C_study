#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("\n\n몫  : %d\n", num1 / num2);
	printf("나머지 : %d\n", num1 % num2);

	return 0;
}