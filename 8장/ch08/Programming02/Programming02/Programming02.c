#include <stdio.h>

int is_multiple(int n, int m);

int main(void) {
	int n, m;

	printf("ù ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m);

	if (is_multiple(n, m) == 1) {
		printf("%d�� %d�� ����Դϴ�.\n", n, m);
	}
	else {
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n, m);
	}

	return 0;
}

int is_multiple(int n, int m) {
	if (n % m == 0) {
		return 1;
	}
	else {
		return 0;
	}
}