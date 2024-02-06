#include <stdio.h>

int get_integer(void) {
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	return n;
}

int is_prime(int n) {
	int i;

	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void print_prime(int n) {
	int i, j;
	for (i = 2; i < n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}
}

int main(void) {
	int n;

	n = get_integer();

	if (is_prime(n) == 1) {
		printf("%d은 소수입니다.\n", n);
	}
	else {
		printf("%d은 소수가 아닙니다.\n", n);
	}
	printf("추가로 2부터 %5d까지의 소수는 다음과 같습니다.\n\n", n);
	print_prime(n);

	return 0;
}