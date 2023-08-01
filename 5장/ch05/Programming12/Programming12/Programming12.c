#include <stdio.h>

int main(void) {
	char a, b, c, d;
	unsigned int num;

	printf("첫 번째 문자를 입력하시오 : ");
	scanf_s(" %c", &a);
	num = a;

	printf("두 번째 문자를 입력하시오 : ");
	scanf_s(" %c", &b);
	num = b<<8 | num;

	printf("세 번째 문자를 입력하시오 : ");
	scanf_s(" %c", &c);
	num = c<<16 | num;

	printf("네 번째 문자를 입력하시오 : ");
	scanf_s(" %c", &d);
	num = d << 24 | num;

	printf("결과값 : %x\n", num);
	
	return 0;
}