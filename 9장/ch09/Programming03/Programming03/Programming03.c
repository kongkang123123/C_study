#include <stdio.h>

int check();

static password = 1234;

int main(void) {
	for (int i = 0; i < 3; i++) {
		if (check() == 1) {
			printf("�����Դϴ�.\n");
			return 0;
		}
	}
	printf("�α��� �õ� Ƚ�� �ʰ�\n");
	return 0;
}

int check() {
	static int answer;
	printf("��й�ȣ: ");
	scanf_s("%d", &answer);

	if (answer == password) {
		return 1;
	}
	else {
		return 0;
	}
}