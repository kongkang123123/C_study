#include <stdio.h>

int main(void) {
	int i;
	int input;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	printf("��� : ");
	
	for (i = 1; i <= input; i++) {
		if (input % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}