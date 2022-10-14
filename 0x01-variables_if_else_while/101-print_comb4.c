#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s, j;

	for (i = 48; i < 56; i++)
	{
		for (s = i + 1; s < 57; s++)
		{
			for (j = s + 1; j < 58; j++)
			{
				putchar(i);
				putchar(s);
				putchar(j);
				if (i == 55 && s == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
