#include <stdio.h>
double c_to_f(double c_temp);		// �Լ� ����

int main(void) {
	printf("���� %.1lf���� ȭ�� %.1lf���Դϴ�.\n", 36., c_to_f(36.0));

	return 0;
}

double c_to_f(double c_temp) {
	return 9.0 / 5.0 * c_temp + 32;
}