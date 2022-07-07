#include <stdio.h>
/**
 * main - Entry point
 * Return: All success
 */
int main(void)
{
unsigned int i;
unsigned int num1 = 1;
unsigned int num2 = 2;
unsigned int num3;
printf("%d", num1);
putchar(',');
putchar(' ');
printf("%d", num2);
putchar(',');
putchar(' ');
for (i = 3; i <= 988888888; i++)
	{
	num3 = num1 + num2;
	printf("%u", num3);
	putchar(',');
	putchar(' ');
	num1 = num2;
	num2 = num3;
	}
printf("\n");
return (0);
}
