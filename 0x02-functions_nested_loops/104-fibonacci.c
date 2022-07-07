#include <stdio.h>
/**
 * main - Entry point
 * Return: All success
 */
int main(void)
{
int i;
int a = 1;
int b = 2;
int c;
printf("%d", a);
putchar(',');
putchar(' ');
printf("%d", b);
putchar(',');
putchar(' ');
for (i = 3; i <= 98; i++)
	{
	c = a + b;
	printf("%d", c);
	putchar(',');
	putchar(' ');
	a = b;
	b = c;
	}
printf("\n");
return (0);
}
