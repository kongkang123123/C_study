#include <stdio.h>

double get_bigger(double x, double y);

int main(void) {
	double x, y,res;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf %lf", &x, &y);
	
	res = get_bigger(x, y);

	printf("큰 수는 %.1lf입니다.\n", res);

	return 0;
}

double get_bigger(double x, double y) {
	if (x >= y) {
		return x;
	}
	else {
		return y;
	}
}