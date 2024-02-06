#include <stdio.h>

int check();

static password = 1234;

int main(void) {
	for (int i = 0; i < 3; i++) {
		if (check() == 1) {
			printf("정답입니다.\n");
			return 0;
		}
	}
	printf("로그인 시도 횟수 초과\n");
	return 0;
}

int check() {
	static int answer;
	printf("비밀번호: ");
	scanf_s("%d", &answer);

	if (answer == password) {
		return 1;
	}
	else {
		return 0;
	}
}