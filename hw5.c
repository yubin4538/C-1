#include <stdio.h>
int Binary();

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	Binary(num);
	return 0;
}

int Binary(int n)
{
	int reminder;
	int share;

	reminder = n % 2;
	share = n / 2;

	if (n== 0 || n== 1)
		return;
	else
		Binary(share);
		printf("%d", reminder);
		return;
}
