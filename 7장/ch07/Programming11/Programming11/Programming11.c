#include <stdio.h>

int main(void) {
	char pm;
	int remainder, io;
	
	remainder = 100;
	while (remainder>0) {
		printf("���� ���ᷮ : %d\n", remainder);
		if (remainder < 20) {
			printf("(���) ���ᰡ %20���� �̸��Դϴ�.\n");
		}
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ��� : ");
		scanf_s("%c%d", &pm,&io);
		

		if (pm == '+') {
			remainder += io;
		}
		else if (pm == '-') {
			remainder -= io;
		}
	}

	return 0;
}