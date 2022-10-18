#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114}; 
    int count, arr_size; 

    arr_size = sizeof(arr) / sizeof(int); 
    for (count = 0; count < arr_size; count++)
	{
		_putchar(arr[count]); 
	}
    _putchar('\n'); 
    return (0);
}
