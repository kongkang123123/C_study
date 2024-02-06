#include <stdio.h>
#include <math.h>

int menu(void) {
	int n;
	printf("1.���丮��\n");
	printf("2.����\n");
	printf("3.�α�(base 10)\n");
	printf("4.������\n");
	printf("5.����(nPr)\n");
	printf("6.����(nCr)\n");
	printf("7.����\n");
	printf("�������ּ���: ");
	scanf_s("%d", &n);

	return n;
}

void factorial() {
	long long n, result = 1, i;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lld", &n);
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	printf("��� = %lld\n\n", result);
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
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);
	result = sin(a);
	printf("��� = %lf\n\n", result);
}

void logBase10() {
	double a, result;
	printf("�Ǽ����� �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);
	if (a <= 0.0) {
		printf("����\n\n");
	}
	else {
		result = log10(a);
		printf("��� = %lf\n\n", result);
	}
}

void square_root() {
	double a;
	printf("�Ǽ����� �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);

	if (a <= 0.0) {
		printf("����\n\n");
	}
	else {
		printf("��� = %lf\n\n", sqrt(a));
	}
}

void permutation() {
	int n, r;
	int result = 1;
	printf("n�� r�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &n, &r);

	for (int i = 0; i < r; i++) {
		result *= (n - i);
	}
	printf("��� = %d\n\n", result);
}

void combination() {
	int n, r;

	printf("n�� r�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &n, &r);

	int a = fact(n);
	int b = fact(r);
	int c = fact(abs(n - r));
	int result = a / (b * c);
	printf("��� = %d\n\n", result);
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
			printf("�����մϴ�.\n");
			return 0;
		default:
			printf("�߸��� �����Դϴ�.\n\n");
			break;
		}
	}
}