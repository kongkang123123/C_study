#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void) {
	int answer = sum(4, 4, 3, 2, 1);	// 맨 앞에 4는 인수의 개수
	printf("합은 %d입니다.\n", answer);

	return (0);
}

int sum(int num, ...) {	// 가변 매개 변수 표시
	int answer = 0;
	va_list argptr;

	va_start(argptr, num);	// 가변 매개 변수 기능 시작
	for (; num > 0; num--) {
		answer += va_arg(argptr, int);
	}
	va_end(argptr);
	return (answer);
}