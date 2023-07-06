#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double light_speed = 300000;
	double distance_sun_to_earth = 149600000;
	
	printf("빛의 속도는 %lfkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %lfkm\n", distance_sun_to_earth);

	int time = distance_sun_to_earth / light_speed;
	int hour=0;
	int sec = 0;
	
	hour = time / 60;
	sec = time % 60;

	printf("도달 시간은 %d분 %d초\n", hour, sec);

	return 0;
}