#include <stdio.h>

int main(void) {
	int i, n, r;
	int p = 1;

	printf("n�� �� : ");
	scanf_s("%d", &n);
	printf("r�� �� : ");
	scanf_s("%d", &r);

	for (i = n; i >=(n-r+1); i--) {
		p *= i;
	}
	printf("������ ���� %d�Դϴ�.", p);

	return 0;
}