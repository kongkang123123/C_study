// ������ ���ͷ� ȯ���ϴ� ���α׷�. ��ȣ����� �̿��غ��ҽ��ϴ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define  MILE_TO_METER 1609

int main(void) {
	double mile;
	double meter;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &mile);

	meter = MILE_TO_METER * mile;

	printf("%.1lf ������ %.2lf�����Դϴ�.", mile, meter);

	return 0;
}