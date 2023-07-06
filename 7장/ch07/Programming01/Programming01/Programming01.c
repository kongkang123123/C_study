#include <stdio.h>

int main(void) {
	int i, time;

	scanf_s("%d", &time);

	for (i = time; i > 0; i--) {
		printf("%d ", i);
		Sleep(1000);
	}

	printf("\a");
	return 0;
}