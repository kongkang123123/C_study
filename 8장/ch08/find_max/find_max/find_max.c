#include <stdio.h>

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main(void) {
	int x, y;

	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);
	printf("�� ū ���� %d�Դϴ�.\n", max(x,y));
	return 0;
}