#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int i, temp;

	for (i = 0; i < 6; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		
	}

	printf("after swap \n");
	printf("arr1:");

	for (i = 0; i < 6; i++)
	{
		printf(" %d", arr1[i]);
	}
	printf("\n");
	printf("arr2:");
	for (i = 0; i < 6; i++)
	{
		printf(" %d", arr2[i]);
	}
}