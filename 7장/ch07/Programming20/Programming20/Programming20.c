#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int sticks = 12;
	int sub;

	while (sticks > 0) {
		printf("���� ��ƽ�� ����: %d\n", sticks);
		printf("��� ��ƽ�� �������ðڽ��ϱ�? : ");
		scanf_s("%d", &sub);

		sticks -= sub;
		if (sticks <= 0) {
			printf("����� �����ϴ�.\n");
			return 0;
		}
		
		sub = rand() % 4;
		if (sub >= sticks) {
			sub = sticks;
			printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", sub);
			printf("��ǻ�Ͱ� �����ϴ�.\n");
			return 0;
		}
		sticks -= sub;
		printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n\n", sub);
	}

	return 0;
}