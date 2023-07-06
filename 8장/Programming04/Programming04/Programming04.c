#include <stdio.h>
#include <string.h>

void check_alpha(char c);

int main(void) {
	char ch;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &ch);

	check_alpha(ch);

	return 0;
}

void check_alpha(char c) {
	if (c >= 'a' && c <= 'z') {
		printf("%c는 알파벳 문자입니다.\n", c);
	}
	else {
		printf("%c는 알파벳 문자가 아닙니다.\n", c);
	}
}