#include <stdio.h>

double get_bigger(double x, double y);

int main(void) {
	double x, y,res;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &x, &y);
	
	res = get_bigger(x, y);

	printf("ū ���� %.1lf�Դϴ�.\n", res);

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