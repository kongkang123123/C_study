#include <stdio.h>

int main(void) {
	printf("��\t��\tȭ\t��\t��\t��\t��\n");
	for (int i = 1; i <= 31; i++) {
		printf("%d\t", i);
		if (i != 0 && i % 7 == 0)
			printf("\n");
	}

	return 0;
}