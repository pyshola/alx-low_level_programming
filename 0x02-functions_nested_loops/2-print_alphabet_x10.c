#include "main.h"

/**
 * print_alphabet 10X - Prints the alphabet 10 times .
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int s, i;

	for (s = 0; s < 10; s++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
