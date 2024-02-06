// 난수 생성 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(void) {
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		printf("%d ", 1 + rand() % MAX);
	}
	printf("\n");

	return 0;
}


// [a, b]구간 난수 발생 시, printf("%d, a+(rand()%(b-a+1))