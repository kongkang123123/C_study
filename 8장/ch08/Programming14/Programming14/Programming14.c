#include <stdio.h>

void is_prime(int input);

int main(void) {
	int input;

	printf("양의 정수를 입력하시오: ");
	scanf_s("%d", &input);

	is_prime(input);

	return 0;
}

void is_prime(int input) {
	int i, j;
	int order = 0;
	int prime[1000] = { 0 };

	for (i = 2; i <= input; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			prime[order] = i;
			order++;
		}
	}

	for (int k = 0; k < order; k++) {
		for (int l = 0; l < order; l++) {
			if (input == prime[k] + prime[l]) {
				printf("%d = %d + %d\n", input, prime[k], prime[l]);
			}
		}
	}
}
