//  �Ž����� ����ϱ� Ȯ����ver.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money, price, change;
	int ch5000, ch1000, ch500, ch100, ch50, ch10;

	printf("���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ� : ");
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

	printf("�Ž������� ������ �����ϴ�.\n");
	printf("��õ���� : %d��\n", ch5000);
	printf("  õ���� : %d��\n", ch1000);
	printf("������� : %d��\n", ch500);
	printf("  ����� : %d��\n", ch100);
	printf("���ʿ��� : %d��\n", ch50);
	printf("  ����� : %d��\n", ch10);


	return 0;
}