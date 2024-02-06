#include <stdio.h>
#include <time.h>

int main(void) {
	time_t start, end;			// time_t는 unsigned long과 동일
	start = time(NULL);
	printf("10초가 되면 엔터키를 누르세요\n");

	while (1) {
		if (getchar()) {
			break;
		}
	}

	printf("종료되었습니다.\n");
	end = time(NULL);
	printf("경과된 시간은 %ld 초입니다.\n", end - start);

	if (end - start <1) {
		printf("점수는 100점입니다.\n");
	}
	else if (end - start < 2) {
		printf("점수는 90점입니다.\n");
	}
	else if (end - start < 3) {
		printf("점수는 80점입니다.\n");
	}
	else if (end - start < 4) {
		printf("점수는 70점입니다.\n");
	}
	else if (end - start < 5) {
		printf("점수는 60점입니다.\n");
	}
	else  {
		printf("점수는 50점입니다.\n");
	}
	return 0;
}