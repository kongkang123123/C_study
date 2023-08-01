#include <stdio.h>

int main(void) {
	printf("문자를 입력하시오: ");
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
