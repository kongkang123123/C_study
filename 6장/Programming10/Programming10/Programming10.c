#include <stdio.h>

int main(void) {
	int x, y;

	printf("x, y��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			printf("1��и��Դϴ�.\n");
		}
		else {
			printf("4��и��Դϴ�.\n");
		}
	}
	else {
		if (y > 0) {
			printf("2��и��Դϴ�.\n");
		}
		else {
			printf("3��и��Դϴ�.\n");
		}
	}

	return 0;
}