#include <stdio.h>

int main(void) {
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();

	switch (ch) {
	case 'a': case 'i': case 'u': case 'e': case 'o':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
	}

	return 0;
}