// 사각형의 둘레와 면적을 출력하는 프로그램.	
// 도전문제 조건 추가
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double w, h, area, perimeter;		// w : 가로 / h : 세로 / area : 면적 / perimeter : 둘레

	scanf("%lf %lf", &w, &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이 : %lf\n사각형의 둘레 : %lf", area, perimeter);

	return 0;
}