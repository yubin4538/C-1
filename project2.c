#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ascii_art.h"


int main(void)
{
	int select, right=0, down=0;
	int i=0, j=0, c=0;

	while (1)
	{
		printf("�׸� ��ȣ ����(1. main, 2. folower, 3. castle, ��Ÿ:����) : ");
		scanf_s("%d", &select);

		if (select != 1 && select != 2 && select != 3)
		{
			printf("�ȳ��� ������! \n");
			break;
		}

		printf("���������� �� ĭ �̵��ұ��? ");
		scanf_s("%d", &right);

		printf("�Ʒ��� �� �� �̵��ұ��? ");
		scanf_s("%d", &down); printf("\n");

		printf("������ �׸��� �ش� ��ġ�κ��� ����մϴ�. \n");


		if (select == 1)
		{
			for (i = 0; i < down; i++)
				printf("\n");

			for (i = 0; i < right; i++)
				printf(" ");

			char(*drawing)[46] = ascii_main;
			for (i = 0 ; i < 9; i++)
			{
				for (j = 0; j < 46; j++)
					printf("%c", drawing[i][j]);
				printf("\n");
				for (c = 0; c < right; c++)
					printf(" ");
			}
			printf("\n");
		}

		else if (select == 2)
		{
			for (i = 0; i < down; i++)
				printf("\n");

			for (i = 0; i < right; i++)
				printf(" ");

			char(*drawing)[18] = ascii_flower;
			for (i = 0 ; i < 13; i++)
			{
				for (j = 0 ; j < 18; j++)
					printf("%c", drawing[i][j]);
				printf("\n");
				for (c = 0; c < right; c++)
					printf(" ");
			}
			printf("\n");
		}

		else if (select == 3)
		{
			for (i = 0; i < down; i++)
				printf("\n");

			for (i = 0; i < right; i++)
				printf(" ");

			char(*drawing)[57] = ascii_castle;
			for (i = 0 ; i < 20; i++)
			{
				for (j = 0 ; j < 57; j++)
					printf("%c", drawing[i][j]);
				printf("\n");
				for (c = 0; c < right; c++)
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}