// 마일을 미터로 환산하는 프로그램. 기호상수도 이용해보았습니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  MILE_TO_METER 1609

int main(void) {
	double mile;
	double meter;

	printf("마일을 입력하시오 : ");
	scanf("%lf", &mile);

	meter = MILE_TO_METER * mile;

	printf("%.1lf 마일은 %.2lf미터입니다.", mile, meter);

	return 0;
}