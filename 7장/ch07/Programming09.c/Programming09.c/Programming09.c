#include <stdio.h>

int main(void) {
	int num1, num2, divisor, op;

	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		divisor = num2;
		op = num1;
	}
	else {
		divisor = num1;
		op = num2;
	}
	int nice = op;
	while (nice % divisor != 0) {
		nice += op;
		if (nice % divisor == 0) {
			printf("�ּҰ������ %d�Դϴ�.\n", nice);
			break;
		}
	}
	return 0;
}