#include <stdio.h>

int fib(int n);

int main(void) {
	int n;

	printf("피보나치 수열을 몇 번째까지 출력할까요? : ");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("fib(%d) = %d\n", i, fib(i));
	}

	return 0;
}

int fib(int n) {
	if (n == 0) {
		return 0;
	}

    else if (n == 1) {
		return 1;
	}

	else {
		return fib(n - 2) + fib(n - 1);
	}
}