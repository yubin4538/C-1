#include <stdio.h>
#include <string.h>

typedef struct cities
{
	char name[50]; // ������ �̸�
	char country[50]; // �ش� ���ð� ���� ����
	int population; // ������ �α���
} Cities;

void ShowCitiesInfo(Cities * sptr)
{
	printf("%s in %s with a population of %d people. \n", sptr->name, sptr->country, sptr->population);
}

int main(void)
{
	Cities arr[3];
	int num[3] = { 1,2,3 };
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Name: "); scanf_s(" %[^\n]s", arr[i].name, sizeof(arr[i].name));
		printf("Country: "); scanf_s(" %[^\n]s", arr[i].country, sizeof(arr[i].country));
		printf("Population: "); scanf_s("%d", &(arr[i].population), sizeof(arr[i].population));
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d. ", num[i]);
		ShowCitiesInfo(&arr[i]);
	}

	return 0;
}