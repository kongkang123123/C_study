#include <stdio.h>

int main(void) {
	int num, times;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);
	printf("2를 곱하고 싶은 횟수 : ");
	scanf_s("%d", &times);

	printf("%d<<%d의 값 : %d\n", num, times, num << times);

	return 0;
}