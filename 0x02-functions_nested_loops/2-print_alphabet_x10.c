#include "main.h"
/**
 * print_alphabet_x10 - Function to be executed
 */
void print_alphabet_x10(void)
{
int n = 1;
char lr;
while (n < 11)
	{
	for (lr = 'a'; lr <= 'z'; lr++)
		{
		_putchar(lr);
		}
	n++;
	_putchar('\n');
	}
}
