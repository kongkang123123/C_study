#include <stdio.h>

void check_alpha(char c);

int main(void) {
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();
	check_alpha(c);

	return 0;
}

void check_alpha(char c) {
	if (c >= 'a' && c <= 'z') {
		printf("%c�� ���ĺ� �����Դϴ�.\n", c);
	}
	else {
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", c);
	}
}