#include <stdio.h>

int main(void) {
	printf("���ڸ� �Է��Ͻÿ�: ");
	char ch = getchar();

	if (ch == 'R' || ch == 'r') {
		printf("Rectangle\n");
	}
	else if (ch == 'C' || ch == 'c') {
		printf("Circle\n");
	}
	else if (ch == 'T' || ch == 't') {
		printf("Triangle\n");
	}
	else {
		printf("Unknown\n");
	}

	return 0;
}
