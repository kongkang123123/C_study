#include <stdio.h>

int main(void) {
	int i = 0, sum=0;
	int input;

	while (i < 3) {
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &input);
		if (input < 0) {
			continue;
		}
		sum += input;
		i++;
	}
	printf("\n\n합계는 %d입니다.\n", sum);

	return 0;
}