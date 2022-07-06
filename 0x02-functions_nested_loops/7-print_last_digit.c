#include "main.h"
/**
 * print_last_digit - Outputs the last digit of a numbet
 * Return: returns an int
 * @r: int input
 */
int print_last_digit(int r)
{
int n = r % 10;
if (n < 0)
	{
	n = (-1 * n);
	}
return (n + '0');
}
