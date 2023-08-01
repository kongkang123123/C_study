#include <stdio.h>

int main(void) {
	char ch;

	printf("문자를 입력하시오: ");
	ch = getchar();

	switch (ch) {
	case 'a': case 'i': case 'u': case 'e': case 'o':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
	}

	return 0;
}