#include <stdio.h>

int main(void) {
	int weight, height;
	double res;

	printf("ü�߰� Ű�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &weight, &height);

	res = (height - 100) * 0.9;

	if (weight > res) {
		printf("��ü���Դϴ�\n");
	}
	else if (weight == res) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("��ü���Դϴ�.\n");
	}

	return 0;
}