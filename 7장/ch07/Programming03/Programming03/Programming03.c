#include <stdio.h>

int main(void) {
	int i = 0, sum=0;
	int input;

	while (i < 3) {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &input);
		if (input < 0) {
			continue;
		}
		sum += input;
		i++;
	}
	printf("\n\n�հ�� %d�Դϴ�.\n", sum);

	return 0;
}