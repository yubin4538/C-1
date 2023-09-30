#include <stdio.h>

int main(void)
{
	int i, k, m;

	for (i = 0; i < 5 ; i++)
	{
		for (k = i; k <= 4; k++)
		{
			printf(" ");
		}

		for (m = 0; m <= (i * 2); m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}