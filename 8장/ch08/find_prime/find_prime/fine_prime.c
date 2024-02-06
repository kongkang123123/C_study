#include <stdio.h>

int get_integer(void) {
	int n;

	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}
	printf("�߰��� 2���� %5d������ �Ҽ��� ������ �����ϴ�.\n\n", n);
	print_prime(n);

	return 0;
}