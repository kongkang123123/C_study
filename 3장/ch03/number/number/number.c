#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double num1, num2, num3;	// 실수 3개 저장할 변수
	double sum;					// 실수 3개의 합
	double avg;					// 실수 3개의 평균

	printf("3개의 실수를 입력하시오 : ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("합계 = %.2lf\n", sum);
	printf("평균 = %.2lf", avg);

	return 0;
}