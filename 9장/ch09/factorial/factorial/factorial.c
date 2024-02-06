#include <stdio.h>

int factorial(int n);
int res = 1;

int main(void) {
	int n;
	printf("값을 입력하시오: ");
	scanf_s("%d", &n);
	printf("%d! = %d\n", n, factorial(n));

	return 0;
}

int factorial(int n) {
	while (n > 0) {
		return factorial(n-1)*n;
	}
}