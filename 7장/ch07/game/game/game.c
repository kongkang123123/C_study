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
		printf("������ �����Ͻÿ� : ");
		scanf_s("%d", &guess);

		if (guess == answer) {
			printf("�����մϴ�. \n");
			break;
		}
		else if (guess > answer) {
			printf("DOWN!\n\n");
		}
		else {
			printf("UP!\n\n");
		}

	} while (guess != answer);

	printf("�õ�Ƚ�� = %d", cnt);

	return 0;
}