#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float radius;	// 원의 반지름
	float area;		// 면적

	printf("반지름을 입력하시오 : ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의 면적 : %f\n", area);

	return 0;
}

// *도전문제*	원의 둘레를 출력하는 프로그램
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double radius;				// 원의 반지름
	double circumference;		// 원의 둘레

	printf("반지름을 입력하시오 : ");
	scanf("%lf", &radius);

	circumference = 2 * 3.14 * radius;

	printf("원의 면적 : %lf", circumference);

	return 0;
}*/