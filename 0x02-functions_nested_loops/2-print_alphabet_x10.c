#include "main.h"

/**
 * print_alphabet 10X - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i, s;
    for (s = 0; s < 10; s++)
    {
        for (i = 97; i < 123; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}
