#include <stdio.h>

int main(void) {
	int num1, num2, num3, res;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	res = (((num1 > num2) ? num1 : num2) > num3) ? ((num1 > num2) ? num1 : num2):num3;

	printf("�ִ밪�� %d�Դϴ�.", res);

	return 0;
}