#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double usd;			// ȯ��
	double won;			// ��ȭ
	double dollar;		// �޷�

	printf("ȯ���� �Է��Ͻÿ� : ");
	scanf("%lf", &usd);

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%lf", &won);

	dollar = won / usd;

	printf("��ȭ %.1lf���� %lf�޷��Դϴ�.", won, dollar);

	return 0;
}