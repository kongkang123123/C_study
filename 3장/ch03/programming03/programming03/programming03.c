#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double base, height, area;		// »ï°¢ÇüÀÇ ¹Øº¯, ³ôÀÌ, ³ĞÀÌ

	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf("%lf", &base);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf("%lf", &height);

	area = 0.5 * base * height;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %.2lf", area);

	return 0;
}