#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

double sin_degree(double degree);

int main(void) {
	for (double i = 10; i <= 180; i += 10) {
		printf("sin(%lf)ÀÇ °ªÀº %lf\n", i, sin_degree(i * PI / 180));
	}
	return 0;
}

double sin_degree(double degree) {
	return sin(degree);
}