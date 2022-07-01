#include <stdio.h>
/**
 * main - putchar to display alphabets
 * Return: Success
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			{
			putchar(ch);
			}
	}
	putchar('\n');
	return (0);
}
