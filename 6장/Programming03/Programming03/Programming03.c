// ���� ���� �� ���� ���α׷�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com, user, res;

	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ� : ");
	scanf_s("%d", &user);

	srand(time(NULL));
	com = rand() % 3+1;
	if (com == 1) {
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n\n");
	}
	else if (com == 2) {
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n\n");
	}
	else if (com == 3) {
		printf("��ǻ�ʹ� ���� �����Ͽ����ϴ�.\n\n");
	}

	res = user - com;

	if (res == 0) {
		printf("�����ϴ�.\n");
	}
	else if (res == 1 || res == -2) {
		printf("����ڰ� �̰���ϴ�.\n");
	}
	else if (res == 2 || res == -1) {
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	}

	return 0;
}