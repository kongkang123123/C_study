#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int code;

	printf("아스키 코드값을 입력하시오 : ");
	scanf_s("%d", &code);

	printf("문자 : %c입니다", code);

	return 0;
}