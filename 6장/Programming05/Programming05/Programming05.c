#include <stdio.h>

int main(void) {
	int month;

	printf("�� ��ȣ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &month);

	switch (month) {
	case 1:
		printf("Jan\n");
		break;
	case 2:
		printf("Fab\n");
		break;
	case 3:
		printf("Mar\n");
		break;
	case 4:
		printf("Apr\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("Jun\n");
		break;
	case 7:
		printf("Jly\n");
		break;
	case 8:
		printf("Aug\n");
		break;
	case 9:
		printf("Sep\n");
		break;
	case 10:
		printf("Oct\n");
		break;
	case 11:
		printf("Nov\n");
		break;
	case 12:
		printf("Dec\n");
		break;
	default:
		printf("�������� �ʴ� ���Դϴ�.\n");
	}

	return 0;
}