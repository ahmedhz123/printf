#include "main.h"

/**
 * print_revs - print string in reverse
 *
 * @val: the arguments
 *
 * Return: The length of the string
*/

int print_revs(va_list val)
{
	char *s = va_arg(val, char *);
	int i, j = 0;

	if (s == NULL)
		s = "NULL";

	while (s[j] != '\0')
	{
		j++; /* to find the length */
	}
	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
