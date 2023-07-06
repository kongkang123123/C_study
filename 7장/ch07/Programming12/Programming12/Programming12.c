#include <stdio.h>

int main(void) {
	int input, i;
	input = 1;
	while (input !=-1) {
		printf("막대의 높이(종료 : -1) : ");
		scanf_s("%d", &input);

		for (i = 0; i < input; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}