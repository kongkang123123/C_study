#include <stdio.h>

int main(void) {
	int num, times;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf_s("%d", &times);

	printf("%d<<%d�� �� : %d\n", num, times, num << times);

	return 0;
}