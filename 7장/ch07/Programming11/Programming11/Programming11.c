#include <stdio.h>

int main(void) {
	char pm;
	int remainder, io;
	
	remainder = 100;
	while (remainder>0) {
		printf("현재 연료량 : %d\n", remainder);
		if (remainder < 20) {
			printf("(경고) 연료가 %20리터 미만입니다.\n");
		}
		printf("연료 충전은 +, 소모는 -로 입력해주세요 : ");
		scanf_s("%c%d", &pm,&io);
		

		if (pm == '+') {
			remainder += io;
		}
		else if (pm == '-') {
			remainder -= io;
		}
	}

	return 0;
}