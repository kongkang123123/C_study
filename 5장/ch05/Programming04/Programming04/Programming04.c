#include <stdio.h>

int main() {

	int height, ft;
	double inch;

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf_s("%d", &height);

	ft = (int)(height / 2.54 / 12);
	inch = (height - ft * 2.54 * 12) / 2.54;

	printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.\n", height, ft, inch);

	return 0;
}