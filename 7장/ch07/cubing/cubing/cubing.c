// �ݺ��� �̿��� �������� ���ϱ�
#include <stdio.h>

int main(void) {
	int n;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	printf("=======================\n");
	printf("     i     i�� ������\n");
	printf("=======================\n");

	for (int i = 0; i <= n; i++) {
		printf("%5d %10d\n", i, i * i * i);
	}

	return 0;
}