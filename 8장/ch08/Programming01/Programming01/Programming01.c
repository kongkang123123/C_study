#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	
	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", absolute(n));
	printf("sign()�� ���: %d\n", sign(n));

	return 0;
}

int even(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int absolute(int n) {
	if (n > 0) {
		return n;
	}
	else {
		return -n;
	}
}
int sign(int n) {
	if (n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		return -1;
	}
}