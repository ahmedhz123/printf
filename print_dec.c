#include "main.h"

/**
 * print_dec - prints the decimal numbers
 *
 * @args: the arguments
 *
 * Return: the length
*/

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, i = 1;
	int last = n % 10;
	int exp = 1;
	int digit;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
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
