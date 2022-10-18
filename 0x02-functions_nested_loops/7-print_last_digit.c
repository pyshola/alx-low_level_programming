#include "main.h"

/**
 * _abs - print the last ten digit.
 *
 * @n: is number
 *
 * Return: last digit
*
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	return(n % 10);
}
