#include <stdio.h>

int is_multiple(int n, int m);

int main(void) {
	int num1, num2, res;

	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하시오 : ");
	scanf_s("%d", &num2);

	res = is_multiple(num1, num2);

	if (res == 1) {
		printf("%d은 %d의 배수입니다.\n", num1, num2);
	}

	else  {
		printf("%d은 %d의 배수가 아닙니다.\n", num1, num2);
	}

	return 0;
}

int is_multiple(int n, int m) {
	if (n % m == 0) {
		return 1;
	}
	else {
		return 0;
	}
}