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
			printf("프로그램을 종료합니다.\n");
			return 0;
		}
	}
}

int menu(void) {
	int choice;
	printf("**********Welcome to Express ATM**********\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");

	printf("메뉴를 선택하시오: ");
	scanf_s("%d", &choice);

	return choice;
}
void balance(void) {
	printf("현재 잔액은 %d입니다.\n\n", account);
}
void deposit(void) {
	int deposit;
	printf("입금 금액을 입력하시오: ");
	scanf_s("%d", &deposit);

	account += deposit;

	printf("잔고는 %d입니다.\n\n", account);
}
void withdraw(void) {
	int withdraw;
	printf("출금 금액을 입력하시오: ");
	scanf_s("%d", &withdraw);

	account -= withdraw;

	printf("잔고는 %d입니다.\n\n", account);
}