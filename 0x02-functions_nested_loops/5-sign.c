#include "main.h"
/**
 * print_sign - Function to be executed
 * Return: returns an int
 * @n: single int input
 */
int print_sign(int n)
{
if (n > 0)
	{
	_putchar('+');
	return (1);
	}
else if (n == 0)
	{
	_putchar((n % 10) + '0');
	return (0);
	}
else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
}
