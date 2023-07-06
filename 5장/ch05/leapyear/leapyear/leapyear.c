// 윤년 프로그램 + 도전문제
#include <stdio.h>

int main(void) {
	int year;

	printf("윤년을 입력하시오 : ");
	scanf_s("%d", &year);

	printf("윤년여부 = %d\n", ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));
	printf("짝수해 여부(T:1/ F:0) = %d", year % 2 == 0);

	return 0;
}