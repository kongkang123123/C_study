#include <stdio.h>

int is_multiple(int n, int m);

int main(void) {
	int num1, num2, res;

	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("�� ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);

	res = is_multiple(num1, num2);

	if (res == 1) {
		printf("%d�� %d�� ����Դϴ�.\n", num1, num2);
	}

	else  {
		printf("%d�� %d�� ����� �ƴմϴ�.\n", num1, num2);
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