#include <stdio.h>
/**
 * main - Hexadecimal numbers
 * Return: All sucess
 */
int main(void)
{
int ch;
int sh;
for (ch = 1; ch <= 9; ch++)
	{
	putchar((ch % 10) + '0');
	}
for (sh = 'a'; sh <= 'f'; sh++)
	{
	putchar(sh);
	}
putchar('\n');
return (0);
}
