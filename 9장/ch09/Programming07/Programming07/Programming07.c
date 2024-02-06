#include <stdio.h>

int power(int base, int power_raised);

int main(void) {
	int base;
	int power_raised;

	printf("¹Ø¼ö: ");
	scanf_s("%d", &base);

	printf("Áö¼ö: ");
	scanf_s("%d", &power_raised);

	printf("%d^%d = %d\n", base, power_raised, power(base, power_raised));

	return 0;
}

int power(int base, int power_raised) {
	if (power_raised > 0) {
		return base * power(base, power_raised - 1);
	}
}