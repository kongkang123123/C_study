#include <stdio.h>
#define STUDENTS 5

int main(void) {
	int scores[STUDENTS];
	int i;
	int sum = 0;
	double average;

	for (i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}

	average = (double)sum / STUDENTS;

	printf("���� ��� = %.2lf\n", average);

	return 0;
}