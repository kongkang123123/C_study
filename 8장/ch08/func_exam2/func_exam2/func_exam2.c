#include <stdio.h>

int happyBirthday(int age) {
	printf("�������� �մϴ�!\n");
	printf("�������� �մϴ�!\n");
	printf("����ϴ� ģ���� ");
	printf("%d��° �������� �մϴ�!\n", age);
}

int main(void) {
	int age;
	printf("ģ���� ���̴� �� �� �Դϱ�? ");
	scanf_s("%d", &age);
	happyBirthday(age);
	return 0;
}