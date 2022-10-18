#include "main.h"

/**
 * _isalpha - function that prints the sign of a number.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for positive number and print +
 * retun zero for zero and return -1 for
 * negative number
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43)
		return (1);
	}
	else if(n == 0)
	{
		_putchar(48)
		return (0);
	}
	else
	{
		_putchar(45)
		return (-1);
	}
	_putchar('\n');
}
