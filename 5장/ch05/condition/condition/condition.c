// ���� ������ ���α׷� + �߰�����
#include <stdio.h>

int main(void) {
	int x, y;

	printf("���� 2�� : ");
	scanf_s("%d %d", &x, &y);

	printf("ū ��   = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);

	printf("x Ȧ¦ ����(Ȧ:0/¦:1) : %d\n", (x % 2 == 0) ? 1 : 0);

	return 0;
}