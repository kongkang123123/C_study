#include <stdio.h>

void reverse() {
	char c;
	scanf_s("%c", &c);

	if (c != '\n') {
		reverse();
		printf("%c", c);
	}
	else {
		printf("���� ����: ");
	}
}

int main(void) {
	printf("������ �Է��Ͻÿ�: ");
	reverse();
	printf("\n");

	return 0;
}