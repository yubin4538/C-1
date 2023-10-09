#include <stdio.h>

int main(void)
{
	int num;
	int i;
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	for (i = num - 1; i > 1; i--)
		if (num % i == 0)
		{
			printf("It is not a prime number.");
			return 0;
		}
		else continue;


		printf("It is a prime number.");

	return 0;
}