#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));

	int user_sum=0, com_sum=0;
	int num[3];
	
	for (int i = 0; i < 3; i++) {
		user_sum += num[i] = rand() % 6 + 1;
	}
	printf("����� �ֻ���=(%d, %d, %d)=%d\n", num[0], num[1], num[2], user_sum);
	for (int i = 0; i < 3; i++) {
		com_sum += num[i] = rand() % 6 + 1; \
	}
	printf("��ǻ�� �ֻ���=(%d, %d, %d)=%d\n", num[0], num[1], num[2], com_sum);

	if (user_sum > com_sum) {
		printf("����� �¸�\n");
	}
	else if (user_sum < com_sum) {
		printf("��ǻ�� �¸�\n");
	}
	else {
		printf("���º�\n");
	}
	return 0;
}