#include <stdio.h>
#include <math.h>

int menu(void) {
	int n;
	printf("1.팩토리얼\n");
	printf("2.싸인\n");
	printf("3.로그(base 10)\n");
	printf("4.제곱근\n");
	printf("5.순열(nPr)\n");
	printf("6.조합(nCr)\n");
	printf("7.종료\n");
	printf("선택해주세요: ");
	scanf_s("%d", &n);

	return n;
}

void factorial() {
	long long n, result = 1, i;
	printf("정수를 입력하시오: ");
	scanf_s("%lld", &n);
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	printf("결과 = %lld\n\n", result);
}

int fact(int n) {
	int i;
	int res=1;
	for (i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

void sine() {
	double a, result;
	printf("각도를 입력하시오: ");
	scanf_s("%lf", &a);
	result = sin(a);
	printf("결과 = %lf\n\n", result);
}

void logBase10() {
	double a, result;
	printf("실수값을 입력하시오: ");
	scanf_s("%lf", &a);
	if (a <= 0.0) {
		printf("오류\n\n");
	}
	else {
		result = log10(a);
		printf("결과 = %lf\n\n", result);
	}
}

void square_root() {
	double a;
	printf("실수값을 입력하시오: ");
	scanf_s("%lf", &a);

	if (a <= 0.0) {
		printf("오류\n\n");
	}
	else {
		printf("결과 = %lf\n\n", sqrt(a));
	}
}

void permutation() {
	int n, r;
	int result = 1;
	printf("n과 r을 입력하시오: ");
	scanf_s("%d %d", &n, &r);

	for (int i = 0; i < r; i++) {
		result *= (n - i);
	}
	printf("결과 = %d\n\n", result);
}

void combination() {
	int n, r;

	printf("n과 r을 입력하시오: ");
	scanf_s("%d %d", &n, &r);

	int a = fact(n);
	int b = fact(r);
	int c = fact(abs(n - r));
	int result = a / (b * c);
	printf("결과 = %d\n\n", result);
}

int main(void) {
	while (1) {
		switch (menu()) {
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			logBase10();
			break;
		case 4:
			square_root();
			break;
		case 5:
			permutation();
			break;
		case 6:
			combination();
			break;
		case 7:
			printf("종료합니다.\n");
			return 0;
		default:
			printf("잘못된 선택입니다.\n\n");
			break;
		}
	}
}