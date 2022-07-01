#include <stdio.h>
/**
 * main - putchar to display alphabets
 * Return: Success
 */
int main(void)
{
char ch;
for (ch = "a"; ch <= "z"; ch++)
	{
	putchar(ch);
	putchar("\n");
	}
	return (0);
}
