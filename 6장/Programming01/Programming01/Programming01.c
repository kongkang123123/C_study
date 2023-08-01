#include <stdio.h>

int main(void) {
	int n, d;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &d);

	if (n % d == 0) {
		printf("약수입니다.\n");
	}
	else {
		printf("약수가 아닙니다.\n");
	}

	return 0;
}