#include <stdio.h>

int main(void) {
	int x, y;

	printf("x, y좌표를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			printf("1사분면입니다.\n");
		}
		else {
			printf("4사분면입니다.\n");
		}
	}
	else {
		if (y > 0) {
			printf("2사분면입니다.\n");
		}
		else {
			printf("3사분면입니다.\n");
		}
	}

	return 0;
}