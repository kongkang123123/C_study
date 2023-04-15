// 10억 모으는 시간을 알려주는 프로그램 (단, 연봉을 한 푼도 쓰지 않아야 함)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double billion= 100000;		// 10억(만원 단위라서 "0" 4개 제거)
	double salary;				// 연봉
	double year;				// 10억 모으는데 걸리는 시간

	printf("연봉을 입력하시오(단위: 만원) : ");
	scanf("%lf", &salary);

	year = billion / salary;

	printf("10억을 모으는데 걸리는 시간(단위: 년) : %.2lf", year);

	return 0;
}