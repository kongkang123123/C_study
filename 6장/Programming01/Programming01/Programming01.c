#include <stdio.h>

int main(void) {
	int n, d;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &d);

	if (n % d == 0) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("����� �ƴմϴ�.\n");
	}

	return 0;
}