// �������� �ϱ� ���� �и� 0������ if-else ���� �̿��Ͽ� �˻�
#include <stdio.h>

int main(void) {
	int n, d, result;

	printf("���ڿ� �и� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &n, &d);

	if (d == 0) {
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else {
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}

	return 0;
}