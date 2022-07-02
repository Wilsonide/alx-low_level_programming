#include <stdio.h>
/**
 * main - Combines two digit
 * Return: Success
 */
int main(void)
{
int num;
int num2;
for (num = 0; num <= 98; num++)
	for (num2 = num1 + 1; num2 <= 99; num2++)
		{
		putchar((num1 / 10) + '0');
		putchar((num1 % 10) + '0');
		putchar(' ');
		putchar((num2 / 10) + '0');
		putchar((num2 % 10) + '0');
		if (num1 == 98 && num2 == 99)
			continue;
		putchar(',');
		putchar(' ');
		}
putchar('\n');
return (0);
}
