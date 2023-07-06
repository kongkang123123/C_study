// 조건 연산자 프로그램 + 중간점검
#include <stdio.h>

int main(void) {
	int x, y;

	printf("정수 2개 : ");
	scanf_s("%d %d", &x, &y);

	printf("큰 수   = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);

	printf("x 홀짝 여부(홀:0/짝:1) : %d\n", (x % 2 == 0) ? 1 : 0);

	return 0;
}