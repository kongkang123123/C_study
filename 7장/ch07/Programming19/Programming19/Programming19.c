#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	double x, y;
	int cnt = 0;
	int N;

	printf("�ݺ� Ƚ��: ");
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		x = (double)rand() /(double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		if (x * x + y * y <= 1) {
			++cnt;
		}
	}

	printf("���� = %lf\n", 4.0*((double)cnt / N));

	return 0;
}