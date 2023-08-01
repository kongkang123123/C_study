#include <stdio.h>
#include <math.h>

int main(void) {
	double a=1.0, b=0.9;

	printf("(%.1lf-%.1lf)==0.1은 %d입니다.\n", a, b, fabs(0.1 - (a - b)) < 0.0001);

	return 0;
}