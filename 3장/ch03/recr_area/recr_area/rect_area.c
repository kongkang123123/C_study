// �簢���� �ѷ��� ������ ����ϴ� ���α׷�.	
// �������� ���� �߰�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double w, h, area, perimeter;		// w : ���� / h : ���� / area : ���� / perimeter : �ѷ�

	scanf("%lf %lf", &w, &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ���� : %lf\n�簢���� �ѷ� : %lf", area, perimeter);

	return 0;
}