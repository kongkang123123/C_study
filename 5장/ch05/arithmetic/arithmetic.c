#include <stdio.h>

int main(void) {
	int x, y, result;

	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);		// %�� ����Ϸ��� %% �����.

	return 0;
}