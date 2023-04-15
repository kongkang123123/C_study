// 화씨온도를 섭씨온도로 환산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double f, c;	// f : 화씨온도 / c : 섭씨온도

	printf("화씨값을 입력하시오 : ");
	scanf("%lf", &f);

	c = (5.0 / 9.0)*(f - 32.0);
	printf("섭씨값은 %.2lf도 입니다.", c);

	return 0;
}