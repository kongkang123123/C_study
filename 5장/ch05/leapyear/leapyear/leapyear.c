// ���� ���α׷� + ��������
#include <stdio.h>

int main(void) {
	int year;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);

	printf("���⿩�� = %d\n", ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));
	printf("¦���� ����(T:1/ F:0) = %d", year % 2 == 0);

	return 0;
}