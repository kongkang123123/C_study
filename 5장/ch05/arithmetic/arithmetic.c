#include <stdio.h>

int main(void) {
	int x, y, result;

	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);		// %를 출력하려면 %% 써야함.

	return 0;
}