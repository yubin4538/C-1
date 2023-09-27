#include <stdio.h>

int main(void)
{
	double num1 =0 ;
	double num2 =0 ;

	printf("Please enter kilometers:");
	scanf_s("%lf", &num1);

	num2 = num1 / 1.609;

	printf("%.1f km is equal to %.1f miles.", num1, num2);
	return 0;
}
