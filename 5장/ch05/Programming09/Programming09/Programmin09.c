#include <stdio.h>

int main(void) {
	double d_cane, h_cane, d_pyramid;

	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &h_cane);
	printf("지팡이 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &d_cane);
	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf_s("%lf", &d_pyramid);
	printf("피라미드의 높이는 %.2lf입니다.\n", h_cane*d_pyramid/d_cane);

	return 0;
}