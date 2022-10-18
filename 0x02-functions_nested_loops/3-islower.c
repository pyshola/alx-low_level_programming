#include "main.h"

/**
 * _islower - Check if character is lower .
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 0 && c <= 122)
	{
		return (1);
	}
    else
    {
        return (0);
    }
    _putchar('\n');
}
