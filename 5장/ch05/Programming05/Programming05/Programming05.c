#include <stdio.h>


int main(void) {
	int input;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	printf("���� �ڸ� : %d\n", input / 10);
	printf("���� �ڸ� : %d\n", input % 10);

	return 0;
}