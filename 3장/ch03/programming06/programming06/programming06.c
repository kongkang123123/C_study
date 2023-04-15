// 지구에서의 자신의 몸무게를 달에서의 몸무게로 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MOON_GRAVITY 0.17		// 달의 중력은 지구의 약 17% 
int main(void) {
	double weight, weight_on_moon;	// 지구에서의 몸무게와 달에서의 몸무게

	printf("몸무게를 입력하시오(단위: kg) : ");
	scanf("%lf", &weight);

	weight_on_moon = MOON_GRAVITY * weight;
	printf("달에서의 몸무게는 %.2lfkg입니다.", weight_on_moon);

	return 0;
}