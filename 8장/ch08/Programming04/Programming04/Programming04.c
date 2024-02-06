#include <stdio.h>

void check_alpha(char c);

int main(void) {
	char c;
	printf("문자를 입력하시오: ");
	c = getchar();
	check_alpha(c);

	return 0;
}

void check_alpha(char c) {
	if (c >= 'a' && c <= 'z') {
		printf("%c는 앞파벳 문장입니다.\n", c);
	}
	else {
		printf("%c는 알파벳 문자가 아닙니다.\n", c);
	}
}