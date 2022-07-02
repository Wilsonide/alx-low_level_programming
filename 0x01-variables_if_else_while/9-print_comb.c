#include <stdio.h>
/**
 * main - Runs the code in the main func
 * Return: Success value
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
	{
	putchar((n % 10) + '0');
	if (n == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
return (0);
}


