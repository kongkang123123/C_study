#include <stdio.h>

void is_leap(int year);

int main(void) {
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);
	is_leap(year);

	return 0;
}

void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
}