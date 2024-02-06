#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(void);

int main(void) {
	static num1;
	static num2;
	static num3;
	static num4;
	static num5;
	static num6;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) {
		switch (get_dice_face()) {
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		case 5:
			num5++;
			break;
		case 6:
			num6++;
			break;
		default:
			break;
		}
	}
	printf("1->%d\n", num1);
	printf("2->%d\n", num2);
	printf("3->%d\n", num3);
	printf("4->%d\n", num4);
	printf("5->%d\n", num5);
	printf("6->%d\n", num6);

	return 0;
}

int get_dice_face(void) {
	return rand() % 6 + 1;
}