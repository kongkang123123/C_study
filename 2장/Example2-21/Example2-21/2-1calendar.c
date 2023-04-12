#include <stdio.h>

int main(void) {
	printf("일\t월\t화\t수\t목\t금\t토\n");
	for (int i = 1; i <= 31; i++) {
		printf("%d\t", i);
		if (i != 0 && i % 7 == 0)
			printf("\n");
	}

	return 0;
}