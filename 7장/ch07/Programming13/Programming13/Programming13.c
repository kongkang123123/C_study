#include <stdio.h>

int main(void) {
	int i = 0;
	int sum = 0;

	while (sum<10000) {
		++i;
		sum += i;
	}
	sum -= i;
	--i;

	printf("1���� %d������ ���� %d�Դϴ�.\n", i, sum);

	return 0;
}