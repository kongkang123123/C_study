#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	srand(time(NULL));
	int digit1, digit2, solution, res1, res2, jackpot;

	printf("���� ��ȣ�� �Է��Ͻÿ�(0~99): ");
	scanf_s("%d", &solution);
	jackpot = rand() % 100;
	printf("��÷��ȣ�� %d�Դϴ�.\n", jackpot);

	digit1 = solution / 10;
	digit2 = solution % 10;

	res1 = jackpot / 10;
	res2 = jackpot % 10;

	if (res1 == digit1 && res2 == digit2) {
		printf("����� 100�����Դϴ�.\n");
	}
	else if (res1 == digit1 || res2 == digit2) {
		printf("����� 50�����Դϴ�.\n");
	}
	else {
		printf("����� �����ϴ�.\n");
	}
	return 0;
}