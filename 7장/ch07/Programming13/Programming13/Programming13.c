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

	printf("1부터 %d까지의 합이 %d입니다.\n", i, sum);

	return 0;
}