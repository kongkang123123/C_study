#include <stdio.h>
#define SEC_PER_MIUTE 60

int main(void) {
	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MIUTE;
	second = input % SEC_PER_MIUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second);

	return 0;
}