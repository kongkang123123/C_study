#include <stdio.h>

int main(void) {
	double num;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num);
	
	printf("�Ǽ��������δ� %lf�Դϴ�.\n", num);
	printf("�����������δ� %e�Դϴ�.\n", num);

	return 0;
}