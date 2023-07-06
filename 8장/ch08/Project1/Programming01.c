#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int num, res1, res2, res3;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	res1 = even(num);
	res2 = absolute(num);
	res3 = sign(num);

	printf("even()의 결과 : %d\n", res1);
	printf("absolute()의 결과 : %d\n", res2);
	printf("sign()의 결과 : %d\n", res3);

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