#include <stdio.h>
#include <string.h>

void check_alpha(char c);

int main(void) {
	char ch;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &ch);

	check_alpha(ch);

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