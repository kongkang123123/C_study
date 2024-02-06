#include <stdio.h>

long long factorial(int n);

int main(void) {
	long long input;
	double e=1;

	printf("������ ����ұ��: ");
	scanf_s("%lld", &input);

	for (int i = 1; i <= input; i++) {
		e += 1.0/(double)factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", e);

	return 0;
}

long long factorial(int n) {
	long long res=1;

	for (int i = 1; i <= n; i++) {
		res *= i;
	}

	return res;
}