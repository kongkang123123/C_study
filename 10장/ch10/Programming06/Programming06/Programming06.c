#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int randit(int check[]);

int main(void) {
	srand((unsigned)time(NULL));
	int check[81] = { 0, };

	printf("로또 번호는 다음과 같습니다.\n");
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", randit(check));
	}
	printf("\n");

	return 0;
}

int randit(int check[]) {
	int idx;
	for (int i = 0; i < 10; i++) {
		do {
			idx = rand() % 91 + 10;
		} while (check[idx] != 0);
		check[idx - 10] = 1;
		return idx;
	}
}