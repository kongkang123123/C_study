#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;

	srand((unsigned)time(NULL));
	int cash = initial_money;
	for (i = 0; i < 100; i++) {
		while (cash > 0 && cash < goal) {
			if ((double)radn() / RAND_MAX < 0.5) { 
				cash++;
			}
			else {
				cash--;
			}
		}
		if (cash == goal) {
			wins++;
		}
	}

	printf("�ʱ� �ݾ� $%d\n", initial_money);
	printf("��ǥ �ݾ� $%d\n", goal);
	printf("100�� �߿��� %d�� ����\n", wins);

	return 0;
}