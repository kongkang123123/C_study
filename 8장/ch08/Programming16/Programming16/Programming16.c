#include <stdio.h>

int account = 0;

int menu(void);
void balance(void);
void deposit(void);
void withdraw(void);

int main(void) {

	while (1) {
		switch (menu()) {
		case 1:
			balance();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		}
	}
}

int menu(void) {
	int choice;
	printf("**********Welcome to Express ATM**********\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");

	printf("�޴��� �����Ͻÿ�: ");
	scanf_s("%d", &choice);

	return choice;
}
void balance(void) {
	printf("���� �ܾ��� %d�Դϴ�.\n\n", account);
}
void deposit(void) {
	int deposit;
	printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &deposit);

	account += deposit;

	printf("�ܰ�� %d�Դϴ�.\n\n", account);
}
void withdraw(void) {
	int withdraw;
	printf("��� �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &withdraw);

	account -= withdraw;

	printf("�ܰ�� %d�Դϴ�.\n\n", account);
}