#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int day[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) {
		printf("%d�� %d�ϱ��� �ֽ��ϴ�.\n", i+1, day[i]);
	}

	return 0;
}