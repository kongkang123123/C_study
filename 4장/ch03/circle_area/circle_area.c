/*���� ������ ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void) {
	double radius;		// ���� ������
	double area;		// ���� ����

	printf("���� ������ : ");
	scanf_s("%lf", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ���� : %lf\n", area);

	return 0;
}