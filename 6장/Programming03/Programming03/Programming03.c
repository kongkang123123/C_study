// 가위 바위 보 게임 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int com, user, res;

	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오 : ");
	scanf_s("%d", &user);

	srand(time(NULL));
	com = rand() % 3+1;
	if (com == 1) {
		printf("컴퓨터는 가위를 선택하였습니다.\n\n");
	}
	else if (com == 2) {
		printf("컴퓨터는 바위를 선택하였습니다.\n\n");
	}
	else if (com == 3) {
		printf("컴퓨터는 보를 선택하였습니다.\n\n");
	}

	res = user - com;

	if (res == 0) {
		printf("비겼습니다.\n");
	}
	else if (res == 1 || res == -2) {
		printf("사용자가 이겼습니다.\n");
	}
	else if (res == 2 || res == -1) {
		printf("컴퓨터가 이겼습니다.\n");
	}

	return 0;
}