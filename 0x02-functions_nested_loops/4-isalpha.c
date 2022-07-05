#include "main.h"
/**
 * _isalpha - Fuction to be executed
 * Return: returns an int
 * @c: Single number input
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
else
	{
	return (0);
	}
}
