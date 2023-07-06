#include <stdio.h>

int main(void) {
	int input;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &input);

	do {
		printf("%d", input % 10);
		input /= 10;
	} while (input != 0);

	return 0;
}