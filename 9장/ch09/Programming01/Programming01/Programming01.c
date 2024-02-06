#include <stdio.h>

void sum(double num1, double num2);
void sub(double num1, double num2);
void mul(double num1, double num2);
void div(double num1, double num2);

int main(void) {
	char opt;
	double num1, num2;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
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
			printf("�ش� ���α׷��� ����, ����, ����, ������ ��ɸ��� �����մϴ�.\n");
			break;
		}
	}
}

void sum(double num1, double num2) {
	static int count_sum = 0;
	count_sum++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sum);
	printf("������ ���: %.0lf\n", num1 + num2);
}
void sub(double num1, double num2) {
	static int count_sub = 0;
	count_sub++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sub);
	printf("������ ���: %.0lf\n", num1 - num2);
}
void mul(double num1, double num2) {
	static int count_mul = 0;
	count_mul++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_mul);
	printf("������ ���: %.0lf\n", num1 * num2);
}
void div(double num1, double num2) {
	static int count_div = 0;
	count_div++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count_div);
	printf("������ ���: %.2lf\n", num1 / num2);
}