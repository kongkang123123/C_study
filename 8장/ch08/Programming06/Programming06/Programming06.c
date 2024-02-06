#include <stdio.h>

void is_leap(int year);

int main(void) {
	int year;
	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);
	is_leap(year);

	return 0;
}

void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}