#include <stdio.h>

int main(void) {
	int time, age, fee;

	printf("현재 시간과 나이를 입력하시오(시간 나이): ");
	scanf_s("%d %d", &time, &age);

	if (time < 17) {
		if (age > 12 && age < 65) {
			fee = 34000;
		}
		else {
			fee = 25000;
		}
	}
	else {
		fee = 10000;
	}

	printf("요금은 %d원 입니다.\n", fee);
	return 0;
}