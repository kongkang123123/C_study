#include <stdio.h>
#define PI 3.14

int main(void) {
	double d, a, r;

	printf("거리를 입력하시오 : ");
	scanf_s("%lf", &d);

	printf("각도를 입력하시오 : ");
	scanf_s("%lf", &a);

	printf("지구의 반지름은 %.2lf입니다.\n", d/(PI*a / 180));

	return 0;
}