#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double STDEV(int arr[], int size)
{
	int i, sum = 0;
	double avg = 0.0, var = 0.0, stddev = 0.0;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	avg = sum / 5;
	
	for (i = 0; i < 5; i++)
	{
		var += pow((arr[i] - avg), 2);
	}

	return stddev = sqrt(var/5);
}

int main(void)
{
	int arr[5], i;
	printf("Enter 5 real numbers: ");
	
	for (i = 0; i < 5; i++)
	{
		scanf("%1d", &arr[i]);
	}
	
	printf("Standard Deviation = %.3f", STDEV(arr, sizeof(arr) / sizeof(int)));
	return 0;
}