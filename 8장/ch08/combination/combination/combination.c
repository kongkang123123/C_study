// �������� ���� ���� ���ϴ� ����
#include <stdio.h>

// ���丮�� ���� ��ȯ
int factorial(int n) {
	int i;
	int result = 1;

	for (i = 1; i <= n; i++) {
		result *= i;					// result = result * i
	}
	return result;
}
// ���丮�� ���� �̿��Ͽ��� ���հ��� ���
int combination(int n, int r) {
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}
// ����ڷκ��� ���� �Է¹޾Ƽ� ��ȯ
int get_integer(void) {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	return n;
}

int main(void) {
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d\n", a, b, combination(a, b));
	return 0;
}