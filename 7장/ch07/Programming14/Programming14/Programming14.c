#include <stdio.h>

int main(void) {
	int order, i;
	int a = 0, b = 1;
	int c;

	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &order);

	for (i = 0; i <= order; i++) {
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}

	return 0;
}