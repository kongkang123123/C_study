#include <stdio.h>

int main(void) {
	int x = 10;
	int y = 20;
	int tmp;

	printf("x=%d y=%d\n", x, y);
	tmp = y;
	y = x;
	x = tmp;
	printf("x=%d y=%d\n", x, y);

	return 0;
}