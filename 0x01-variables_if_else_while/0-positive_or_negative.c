#include <stdio.h>
/**
 * main - if/else block
 * Return: return success
 */
int main(void)
{
int n;
if (n > 0)
	{
	printf("%d is positive", n);
	}

else if (n < 0)
	{
	printf("%d is negative", n);
	}

else if (n == 0)
	{
	printf("%d is zero", n);
	}
	getch();
}
return (0);


