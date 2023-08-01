#include <stdio.h>

int main(void) {
	int x, y;

	printf("x 좌표를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("y 좌표를 입력하시오 : ");
	scanf_s("%d", &y);

	(x > 0 && y > 0) ? printf("\n\n1사분면입니다.\n") : printf("");
	(x < 0 && y > 0) ? printf("\n\n2사분면입니다.\n") : printf("");
	(x < 0 && y < 0) ? printf("\n\n3사분면입니다.\n") : printf("");
	(x > 0 && y < 0) ? printf("\n\n4사분면입니다.\n") : printf("");

	return 0;
}