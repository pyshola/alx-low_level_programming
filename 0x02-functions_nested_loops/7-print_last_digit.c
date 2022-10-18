#include "main.h"

/**
 * print_last_digit - print the last ten digit.
 *
 * @n: is number
 *
 * Return: last digit
*
 */
int print_last_digit(int n)
{
	int s;
	
	s = n % 10;
	if (s < 0)
	{
		_putchar((-1 * s) + 48);
		return (-1 * s);
	}
	else
	{
		_putchar(s + 48);
		return (s);
	}
}
