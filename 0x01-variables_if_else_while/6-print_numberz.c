#include <stdio.h>
/**
 * main - unformatted output display function
 * Return: Success
 */
int main(void)
{
int vi;
for (vi = 0; vi < 10; vi++)
	{
	putchar((vi % 10) + '0');
	}
putchar('\n');
return (0);
}
