#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &num1, &num2);

	printf("\n\n��  : %d\n", num1 / num2);
	printf("������ : %d\n", num1 % num2);

	return 0;
}