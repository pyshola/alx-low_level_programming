#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s;

	for (i = 48; i < 57; i++)
	{
		for (s = i + 1; s < 58; s++)
		{
			putchar(i);
			putchar(s);
			if (i == 56 && s == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
