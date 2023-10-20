#include "main.h"

/**
 * print_unsigned - prints the unsigned numbers
 *
 * @args: the arguments
 *
 * Return: integer
*/

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num, i = 1;
	int last = n % 10; unsigned int digit;
	unsigned int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		num = -num;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + 48);
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + 48);
	return (i);

}
