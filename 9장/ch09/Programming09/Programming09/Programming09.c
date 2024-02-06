#include <stdio.h>

void reverse() {
	char c;
	scanf_s("%c", &c);

	if (c != '\n') {
		reverse();
		printf("%c", c);
	}
	else {
		printf("역순 문장: ");
	}
}

int main(void) {
	printf("문장을 입력하시오: ");
	reverse();
	printf("\n");

	return 0;
}