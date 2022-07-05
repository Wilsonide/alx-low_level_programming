#include "main.h"
/**
 * _islower - Function declaration
 * Return: returns an int
 * @c: single number input
 */
int _islower(int c)
{
if (c <= 'a' && c >= 'z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
