// 다항식 3*x*x + 7*x + 11 의 값을 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double polynomial, x;		// 다항식과 다항식에 입력할 값
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);

	polynomial = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %.2lf", polynomial);

	return 0;
}