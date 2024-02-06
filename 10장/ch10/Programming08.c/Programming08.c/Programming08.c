#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int finding_C_root[10][2];
	int i, j;
	int input;
	int res=-1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			finding_C_root[i][j] = pow((i + 1), 2*(j+1)-1);
		}
	}

	printf("정수를 입력하시오: ");
	scanf("%d", &input);

	for (int i = 0; i < 10; i++) {
		if (finding_C_root[i][1] == input) {
			res = finding_C_root[i][0];
			break;
		}
	}

	if (res == -1) {
		printf("세제곱근이 존재하지 않습니다.\n");
	}
	else {
		printf("%d의 세제곱근은 %d\n", input, res);
	}

	return 0;
}