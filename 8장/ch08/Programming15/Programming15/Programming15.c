#include <stdio.h>

long long factorial(int n);

int main(void) {
	long long input;
	double e=1;

	printf("어디까지 계산할까요: ");
	scanf_s("%lld", &input);

	for (int i = 1; i <= input; i++) {
		e += 1.0/(double)factorial(i);
	}
	printf("오일러의 수는 %lf입니다.\n", e);

	return 0;
}

long long factorial(int n) {
	long long res=1;

	for (int i = 1; i <= n; i++) {
		res *= i;
	}

	return res;
}