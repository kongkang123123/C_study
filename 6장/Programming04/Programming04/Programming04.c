#include <stdio.h>

int main(void) {
	int height, age;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &height);
	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	if (height >= 140 && age >= 10) {
		printf("\n\n타도 좋습니다.\n");
	}
	else {
		printf("\n\n죄송합니다.\n");
	}

	return 0;
}