#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int conversion(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else if (ch == "\0")
		return "\0";
	else return;
}

int main(void)
{
	int i, ch;
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	fputs("Input: ", stdout); 
	puts(str);
	fputs("Output: ", stdout);
	for (i = 0; i < strlen(str); i++)
	{
		ch = conversion(str[i]);
		putchar(ch);
	}
	return 0;
}