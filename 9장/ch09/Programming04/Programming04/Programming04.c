#include <stdio.h>
#include <stdlib.h>

int get_random();

int main(void) {
	printf("�ʱ�ȭ ����\n");
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	printf("%d\n", get_random());
	return 0;
}

int get_random() {
	static int inited = 0;

	if (inited == 0) {
		srand((unsigned)time(NULL));
		inited = 1;
		return rand();
	}
	else {
		rand();
	}
}