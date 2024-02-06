#include <math.h>
#include <stdio.h>

double degree_to_radian(double degree);

int main(void) {
	double height, distance, tree_height, degrees, radians;

	printf("나무까지의 거리(단위: 미터): ");
	scanf_s("%lf", &distance);

	printf("측정자의 키(단위: 미터): ");
	scanf_s("%lf", &height);

	printf("각도(단위: 도): ");
	scanf_s("%lf", &degrees);

	tree_height = tan(degree_to_radian(degrees)) * distance + height;
	printf("나무의 높이(단위: 미터): %lf\n", tree_height);

	return 0;
}

double degree_to_radian(double degrees) {
	return degrees * (3.141592 / 180.0);
}