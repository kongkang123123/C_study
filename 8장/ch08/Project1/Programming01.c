#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int num, res1, res2, res3;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	res1 = even(num);
	res2 = absolute(num);
	res3 = sign(num);

	printf("even()�� ��� : %d\n", res1);
	printf("absolute()�� ��� : %d\n", res2);
	printf("sign()�� ��� : %d\n", res3);

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
	if (n >= 0) {
		return n;
	}
	else {
		return (-n);
	}
}

int sign(int n) {
	if (n < 0) {
		return -1;
	}
	else if (n > 0) {
		return 1;
	}
	else {
		return 0;
	}
}