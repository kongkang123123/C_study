#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double light_speed = 300000;
	double distance_sun_to_earth = 149600000;
	
	printf("���� �ӵ��� %lfkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� %lfkm\n", distance_sun_to_earth);

	int time = distance_sun_to_earth / light_speed;
	int hour=0;
	int sec = 0;
	
	hour = time / 60;
	sec = time % 60;

	printf("���� �ð��� %d�� %d��\n", hour, sec);

	return 0;
}