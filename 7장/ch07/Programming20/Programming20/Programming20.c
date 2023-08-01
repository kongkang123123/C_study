#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int sticks = 12;
	int sub;

	while (sticks > 0) {
		printf("현재 스틱의 개수: %d\n", sticks);
		printf("몇개의 스틱을 가져가시겠습니까? : ");
		scanf_s("%d", &sub);

		sticks -= sub;
		if (sticks <= 0) {
			printf("당신이 졌습니다.\n");
			return 0;
		}
		
		sub = rand() % 4;
		if (sub >= sticks) {
			sub = sticks;
			printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n", sub);
			printf("컴퓨터가 졌습니다.\n");
			return 0;
		}
		sticks -= sub;
		printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n\n", sub);
	}

	return 0;
}