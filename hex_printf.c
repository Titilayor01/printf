#include "main.h"

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @v: unsigned int to print
 * @w: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return: number of digits printed
 */
int print_hexHEX(unsigned int v, unsigned int w)
{
	unsigned int a[8];
	unsigned int x, y, sum;
	char diff;
	int cnt;

	y = 268435456; /* (16 ^ 7) */
	if (w)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = v / y;
	for (x = 1; x < 8; x++)
	{
		y /= 16;
		a[x] = (v / y) % 16;
	}
	for (x = 0, sum = 0, cnt = 0; x < 8; x++)
	{
		sum += a[x];
		if (sum || x == 7)
		{
			if (a[x] < 10)
				_putchar('0' + a[x]);
			else
				_putchar('0' + diff + a[x]);
			cnt++;
		}
	}
	return (cnt);
}
/**
 * print_hex - takes an unsigned int and prints it in lowercase hex notation
 * @hex: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_hex(va_list hex)
{
	return (print_hexHEX(va_arg(hex, unsigned int), 0));
}

/**
 * print_HEX - takes am unsigned int and prints it in uppercase hex notation
 * @HEX: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_HEX(va_list HEX)
{
	return (print_hexHEX(va_arg(HEX, unsigned int), 1));
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int x;
	unsigned long ans = base;

	for (x = 1; x < exponent; x++)
	{
		ans *= base;
	}
	return (ans);
}

/**
 * print_p - prints an address
 * @p: address to print
 *
 * Return: number of characters to print
 */
int print_p(va_list P)
{
	int cnt = 0;
	unsigned int a[16];
	unsigned int x, sum;
	unsigned long y, z;
	char *str = "(nil)";

	y = va_arg(P, unsigned long);
	if (y == 0)
	{
		for (x = 0; str[x]; x++)
		{
			_putchar(str[x]);
			cnt++;
		}
		return (cnt);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	z = _pow(16, 15); /* 16 ^ 15 */
	a[0] = y / z;
	for (x = 1; x < 16; x++)
	{
		z /= 16;
		a[x] = (y / z) % 16;
	}
	for (x = 0, sum = 0; x < 16; x++)
	{
		sum += a[x];
		if (sum || x == 15)
		{
			if (a[x] < 10)
				_putchar('0' + a[x]);
			else
				_putchar('0' + ('a' - ':') + a[x]);
			cnt++;
		}
	}
	return (cnt);
}
