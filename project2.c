#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ascii_art.h"


int main(void)
{
	int select, right=0, down=0;
	int i=0, j=0, c=0;

	while (1)
	{
		printf("그림 번호 선택(1. main, 2. folower, 3. castle, 기타:종료) : ");
		scanf_s("%d", &select);

		if (select != 1 && select != 2 && select != 3)
		{
			printf("안녕히 가세요! \n");
			break;
		}

		printf("오른쪽으로 몇 칸 이동할까요? ");
		scanf_s("%d", &right);

		printf("아래로 몇 줄 이동할까요? ");
		scanf_s("%d", &down); printf("\n");

		printf("선택한 그림을 해당 위치로부터 출력합니다. \n");


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