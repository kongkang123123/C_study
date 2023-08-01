#include <stdio.h>

int main(void) {
	int standard_texation, income_tax_rate, progressive_deduction_amount;

	printf("과세 표준 : ");
	scanf_s("%d", &standard_texation);
	printf("\n\n소득세율 : ");
	scanf_s("%d", &income_tax_rate);

	if (income_tax_rate >= 45) {
		progressive_deduction_amount = 65400000;
	}
	else if (income_tax_rate >= 42) {
		progressive_deduction_amount = 35400000;
	}
	else if (income_tax_rate >= 40) {
		progressive_deduction_amount = 25400000;
	}
	else if (income_tax_rate >= 38) {
		progressive_deduction_amount = 19400000;
	}
	else if (income_tax_rate >= 35) {
		progressive_deduction_amount = 14900000;
	}
	else if (income_tax_rate >= 24) {
		progressive_deduction_amount = 5220000;
	}
	else if (income_tax_rate >= 15) {
		progressive_deduction_amount = 1080000;
	}
	else  {
		progressive_deduction_amount = 0;
	}

	printf("누진공제액 : %d\n", progressive_deduction_amount);
	printf("산출액 : %d\n", standard_texation/100 * income_tax_rate - progressive_deduction_amount);
	
	return 0;
}