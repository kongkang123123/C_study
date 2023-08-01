#include <stdio.h>

int main(void) {
	int num1, num2, num3, res;

	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	res = (((num1 > num2) ? num1 : num2) > num3) ? ((num1 > num2) ? num1 : num2):num3;

	printf("최대값은 %d입니다.", res);

	return 0;
}