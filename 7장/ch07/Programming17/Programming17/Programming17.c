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

		printf("������ �����Ͻÿ� : ");
		scanf_s("%c", &op);
		if (op == 'A') {
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 + num2);
		}
		if (op == 'S') {
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 - num2);
		}
		else if (op == 'M') {
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 * num2);
		}
		else if (op == 'D') {
			printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf_s("%d %d", &num1, &num2);
			printf("%d\n", num1 / num2);
		}
		else if (op == 'Q') {
			break;
		}
	}

	return 0;
}