#include <stdio.h>

int main(void) {
	int i, n, r;
	int p = 1;

	printf("n의 값 : ");
	scanf_s("%d", &n);
	printf("r의 값 : ");
	scanf_s("%d", &r);

	for (i = n; i >=(n-r+1); i--) {
		p *= i;
	}
	printf("순열의 값은 %d입니다.", p);

	return 0;
}