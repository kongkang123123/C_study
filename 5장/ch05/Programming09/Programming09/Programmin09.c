#include <stdio.h>

int main(void) {
	double d_cane, h_cane, d_pyramid;

	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &h_cane);
	printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &d_cane);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &d_pyramid);
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.\n", h_cane*d_pyramid/d_cane);

	return 0;
}