// 정수 간의 가감승제를 계산하는 프로그램
#include <stdio.h>

int main(void) {
	int x;							// 첫 번째 정수를 저장할 변수
	int y;							// 두 번째 정수를 저장할 변수
	int sum, diff, mul, div;		// 두 정수 간의 연산의 결과를 저장하는 변수

	x = 20;							// 변수 x에 20을 저장
	y = 10;							// 변수 y에 10을 저장

	sum = x + y;					// 변수 sum에 (x+y)의 결과를 저장
	diff = x - y;					// 변수 diff에 (x-y)의 결과를 저장
	mul = x * y;					// 변수 mul에 (x*y)의 결과를 저장
	div = x / y;					// 변수 div에 (x/y)의 결과를 저장

	printf("두수의 합 : %d\n", sum);
	printf("두수의 차 : %d\n", diff);
	printf("두수의 곱 : %d\n", mul);
	printf("두수의 몫 : %d\n", div);

	return 0;
}