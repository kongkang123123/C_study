#include <stdio.h>

int main(void) {
	char a, b, c, d;
	unsigned int num;

	printf("ù ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &a);
	num = a;

	printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &b);
	num = b<<8 | num;

	printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &c);
	num = c<<16 | num;

	printf("�� ��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s(" %c", &d);
	num = d << 24 | num;

	printf("����� : %x\n", num);
	
	return 0;
}