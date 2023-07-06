#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main(void) {
	double pyeong;

	printf("평을 입력하시오 : ");
	scanf_s("%lf", &pyeong);

	printf("%lf평방미터입니다.", SQMETER_PER_PYEONG*pyeong);

	return 0;
}