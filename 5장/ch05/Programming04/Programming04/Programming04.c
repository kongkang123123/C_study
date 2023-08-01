#include <stdio.h>

int main() {

	int height, ft;
	double inch;

	printf("키를 입력하세요(cm): ");
	scanf_s("%d", &height);

	ft = (int)(height / 2.54 / 12);
	inch = (height - ft * 2.54 * 12) / 2.54;

	printf("%dcm는 %d피트 %.2lf인치입니다.\n", height, ft, inch);

	return 0;
}