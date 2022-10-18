#include "main.h"

/**
 * _abs - function that compute absolute no.
 *
 * @n: is number
 *
 * Return: absolute number of integer
*
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
