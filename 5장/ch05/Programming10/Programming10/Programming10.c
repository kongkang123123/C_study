#include <stdio.h>

int main(void) {
	int x, y;

	printf("x ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	(x > 0 && y > 0) ? printf("\n\n1��и��Դϴ�.\n") : printf("");
	(x < 0 && y > 0) ? printf("\n\n2��и��Դϴ�.\n") : printf("");
	(x < 0 && y < 0) ? printf("\n\n3��и��Դϴ�.\n") : printf("");
	(x > 0 && y < 0) ? printf("\n\n4��и��Դϴ�.\n") : printf("");

	return 0;
}