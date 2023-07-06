#include <stdio.h> 

int main(void) {
	char op;
	int num1, num2;

	while (1) {
		printf("***************\n");
		printf("A--- Add\n");
		printf("S--- Subtract\n");
		printf("M--- Multiply\n");
		printf("D--- Divide\n");
		printf("Q--- Quit\n");
		printf("***************\n");

		printf("연산을 선택하시오 : ");
		scanf_s("%c", &op);
		if (op == 'A') {
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 + num2);
		}
		if (op == 'S') {
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 - num2);
		}
		else if (op == 'M') {
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 * num2);
		}
		else if (op == 'D') {
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 / num2);
		}
		else if (op == 'Q') {
			break;
		}
	}

	return 0;
}