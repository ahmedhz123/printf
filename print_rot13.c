#include "main.h"

/**
 * print_rot13 - convert to rot13
 *
 * @val: the arguments
 *
 * Return: counter
*/

int print_rot13(va_list val)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(val, char *);
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[i])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
			if (!k)
			{
				_putchar(s[i]);
				counter++;
			}
		}
	}
	return (counter);
}
