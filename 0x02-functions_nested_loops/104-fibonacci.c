#include <stdio.h>
/**
 * main - Entry point
 * Return: All success
 */
int main(void)
{
int i;
int num1 = 1;
int num2 = 2;
int num3;
printf("%d", num1);
putchar(',');
putchar(' ');
printf("%d", num2);
putchar(',');
putchar(' ');
for (i = 3; i <= 98; i++)
	{
	num3 = num1 + num2;
	printf("%d", num3);
	putchar(',');
	putchar(' ');
	num1 = num2;
	num2 = num3;
	if (i < 0)
		break;
	}
printf("\n");
return (0);
}
