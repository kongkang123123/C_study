#include <stdio.h>

int main(void) {
	int i=255;

	printf("%d %o %x\n", i, i, i);

	i = -1;

	printf("%d %o %x, %x, %x", i, i, i, -2, -3);

	return 0;
}