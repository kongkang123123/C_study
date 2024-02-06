#include <stdio.h>

double recursive(double n);

int main(void) {
	double n = 10;

	printf("%lf", recursive(n));

	return 0;
}

double recursive(double n) {
	if (n >0) {
		return 1.0/n + recursive(n - 1);
	}
}