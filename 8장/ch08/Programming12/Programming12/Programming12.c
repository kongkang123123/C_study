#include <stdio.h>

void get_first_digit(int n);

int main(void) {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	get_first_digit(n);

	return 0;
}

void get_first_digit(int n) {
	int res=0;

	while (n / 10 !=0) {
		res = n / 10;
		n /= 10;
	}
	printf("���� ���� �ڸ����� %d�Դϴ�.\n", res);
}