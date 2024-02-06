#include <stdio.h>

void sum(double num1, double num2);
void sub(double num1, double num2);
void mul(double num1, double num2);
void div(double num1, double num2);

int main(void) {
	char opt;
	double num1, num2;

	while (1) {
		printf("연산을 입력하시오: ");
		scanf_s("%lf %c %lf", &num1, &opt, 1, &num2);

		switch (opt) {
		case '+':
			sum(num1, num2);
			break;
		case '-':
			sub(num1, num2);
			break;
		case '*':
			mul(num1, num2);
			break;
		case '/':
			div(num1, num2);
			break;
		default:
			printf("해당 프로그램은 덧셈, 뺄셈, 곱셈, 나눗셈 기능만을 지원합니다.\n");
			break;
		}
	}
}

void sum(double num1, double num2) {
	static int count_sum = 0;
	count_sum++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count_sum);
	printf("연산의 결과: %.0lf\n", num1 + num2);
}
void sub(double num1, double num2) {
	static int count_sub = 0;
	count_sub++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count_sub);
	printf("연산의 결과: %.0lf\n", num1 - num2);
}
void mul(double num1, double num2) {
	static int count_mul = 0;
	count_mul++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count_mul);
	printf("연산의 결과: %.0lf\n", num1 * num2);
}
void div(double num1, double num2) {
	static int count_div = 0;
	count_div++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count_div);
	printf("연산의 결과: %.2lf\n", num1 / num2);
}