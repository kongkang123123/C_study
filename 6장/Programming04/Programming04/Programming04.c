#include <stdio.h>

int main(void) {
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	if (height >= 140 && age >= 10) {
		printf("\n\nŸ�� �����ϴ�.\n");
	}
	else {
		printf("\n\n�˼��մϴ�.\n");
	}

	return 0;
}