#include <stdio.h>

int main(void) {
	double x, y, result;

	printf("실수 2개를 입력하시오 : ");
	scanf_s("%lf %lf", &x, &y);
	result = x + y;		// 덧셈 연산을 하여서 결과를 result에 대입
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);


	return 0;
}