#include <stdio.h>
#include <time.h>

int main(void) {
	time_t start, end;			// time_t�� unsigned long�� ����
	start = time(NULL);
	printf("10�ʰ� �Ǹ� ����Ű�� ��������\n");

	while (1) {
		if (getchar()) {
			break;
		}
	}

	printf("����Ǿ����ϴ�.\n");
	end = time(NULL);
	printf("����� �ð��� %ld ���Դϴ�.\n", end - start);

	if (end - start <1) {
		printf("������ 100���Դϴ�.\n");
	}
	else if (end - start < 2) {
		printf("������ 90���Դϴ�.\n");
	}
	else if (end - start < 3) {
		printf("������ 80���Դϴ�.\n");
	}
	else if (end - start < 4) {
		printf("������ 70���Դϴ�.\n");
	}
	else if (end - start < 5) {
		printf("������ 60���Դϴ�.\n");
	}
	else  {
		printf("������ 50���Դϴ�.\n");
	}
	return 0;
}