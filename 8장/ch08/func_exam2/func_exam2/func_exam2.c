#include <stdio.h>

int happyBirthday(int age) {
	printf("생일축하 합니다!\n");
	printf("생일축하 합니다!\n");
	printf("사랑하는 친구의 ");
	printf("%d번째 생일축하 합니다!\n", age);
}

int main(void) {
	int age;
	printf("친구의 나이는 몇 살 입니까? ");
	scanf_s("%d", &age);
	happyBirthday(age);
	return 0;
}