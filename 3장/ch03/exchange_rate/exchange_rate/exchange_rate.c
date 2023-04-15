#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double usd;			// 환율
	double won;			// 원화
	double dollar;		// 달러

	printf("환율을 입력하시오 : ");
	scanf("%lf", &usd);

	printf("원화 금액을 입력하시오 : ");
	scanf("%lf", &won);

	dollar = won / usd;

	printf("원화 %.1lf원은 %lf달러입니다.", won, dollar);

	return 0;
}