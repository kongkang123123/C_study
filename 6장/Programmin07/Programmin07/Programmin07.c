#include <stdio.h>

int main(void) {
	int weight, height;
	double res;

	printf("체중과 키를 입력하시오: ");
	scanf_s("%d %d", &weight, &height);

	res = (height - 100) * 0.9;

	if (weight > res) {
		printf("과체중입니다\n");
	}
	else if (weight == res) {
		printf("평균입니다.\n");
	}
	else {
		printf("저체중입니다.\n");
	}

	return 0;
}