#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char arr[] = "_putchar";
    int count, arr_size;

    arr_size = sizeof(arr) / sizeof(char);
	for (count = 0; count < arr_size; count++)
	{
		_putchar(arr[count]);
	}
    _putchar('\n');
	return (0);
}
