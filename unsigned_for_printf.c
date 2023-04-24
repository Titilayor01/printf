#include "main.h"

/**
 *printf_unsigned - for printing integer
 *
 *@args: argument to be printed
 *
 *Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int numx, last = n % 10, digit, exp = 1;
	int  t = 1;

	n = n / 10;
	numx = n;

	if (last < 0)
	{
		putchar('-');
		numx = -numx;
		n = -n;
		last = -last;
		t++;
	}
	if (numx > 0)
	{
		while (numx / 10 != 0)
		{
			exp = exp * 10;
			numx = numx / 10;
		}
		numx = n;
		while (exp > 0)
		{
			digit = numx / exp;
			putchar(digit + '0');
			numx = numx - (digit * exp);
			exp = exp / 10;
			t++;
		}
	}
	putchar(last + '0');

	return (t);
}
