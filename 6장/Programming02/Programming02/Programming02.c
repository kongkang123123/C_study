#include <stdio.h>

int main(void) {
	int num1, num2, num3, min;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2) {
		if (num2 > num3) {
			min = num3;
		}
		else {
			min = num2;
		}
	}
	else {
		if (num1 > num3) {
			min = num3;
		}
		else {
			min = num1;
		}
	}
	printf("���� ���� ������ %d�Դϴ�.\n", min);

	return 0;
}