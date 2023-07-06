//  거스름돈 계산하기 확장팩ver.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, price, change;
	int ch5000, ch1000, ch500, ch100, ch50, ch10;

	printf("물건 값을 입력하시오 : ");
	scanf_s("%d", &price);

	printf("투입한 금액을 입력하시오 : ");
	scanf_s("%d", &money);

	change = money - price;
	ch5000 = change/5000;
	change %= 5000;
	ch1000 = change/1000;
	change %= 1000;
	ch500 = change/500;
	change %= 500;
	ch100 = change / 100;
	change %= 100;
	ch50 = change / 50;
	change %= 50;
	ch10 = change / 10;

	printf("거스름돈은 다음과 같습니다.\n");
	printf("오천원권 : %d장\n", ch5000);
	printf("  천원권 : %d장\n", ch1000);
	printf("오백원권 : %d개\n", ch500);
	printf("  백원권 : %d개\n", ch100);
	printf("오십원권 : %d개\n", ch50);
	printf("  백원권 : %d개\n", ch10);


	return 0;
}