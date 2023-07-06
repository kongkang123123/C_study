#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int cnt = 0;
	int i = 0;
	int guess;
	int answer = rand() % 100;

	do {
		cnt++;
		printf("정답을 추측하시오 : ");
		scanf_s("%d", &guess);

		if (guess == answer) {
			printf("축하합니다. \n");
			break;
		}
		else if (guess > answer) {
			printf("DOWN!\n\n");
		}
		else {
			printf("UP!\n\n");
		}

	} while (guess != answer);

	printf("시도횟수 = %d", cnt);

	return 0;
}