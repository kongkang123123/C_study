// while���� �̿��� ���� ��� ���ϱ� ���α׷�
#include <stdio.h>

int main(void) {
	int grade, n;
	double sum, average;

	// �ʿ��� �������� �ʱ�ȭ�Ѵ�.
	n = 0;
	sum = 0;
	grade = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	// ������ �Է¹޾Ƽ� �հ踦 ���ϰ� �л� ���� ����.

	while (grade >= 0) {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &grade);

		sum += grade;
		n++;
	}

	sum -= grade;
	n--;
	// ����� ����ϰ� ȭ�鿡 �����.
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}