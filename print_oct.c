#include "main.h"
#include <stdlib.h>

/**
 * print_oct - convert from decimal to octal
 *
 * @val: the argument
 *
 * Return: counter
*/

int print_oct(va_list val)
{
	int i, count = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;

	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}

	for (i = count; i >= 0; i--)
	{
		putchar(array[i] + 48);
	}
	free(array);

	return (count);
}
