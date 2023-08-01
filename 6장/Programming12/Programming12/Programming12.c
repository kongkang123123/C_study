#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	srand(time(NULL));
	int digit1, digit2, solution, res1, res2, jackpot;

	printf("복권 번호를 입력하시오(0~99): ");
	scanf_s("%d", &solution);
	jackpot = rand() % 100;
	printf("당첨번호는 %d입니다.\n", jackpot);

	digit1 = solution / 10;
	digit2 = solution % 10;

	res1 = jackpot / 10;
	res2 = jackpot % 10;

	if (res1 == digit1 && res2 == digit2) {
		printf("상금은 100만원입니다.\n");
	}
	else if (res1 == digit1 || res2 == digit2) {
		printf("상금은 50만원입니다.\n");
	}
	else {
		printf("상금은 없습니다.\n");
	}
	return 0;
}