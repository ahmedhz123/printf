#include "main.h"
#include <stdlib.h>

/**
 * print_HEX_extra - print the hexadecimal digits
 *
 * @val: the arguments
 *
 * Return: integer
*/

int print_HEX_extra(va_list val)
{
	int i, counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;
	int *array;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + 48);
	}
	free(array);
	return (counter);
}
