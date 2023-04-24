#include "main.h"

/**
 *printf_bin - prints a binary number.
 *
 *@val: argument
 *
 *Return: 1
 */
int printf_bin(va_list val)
{
	int flg = 0;
	int cnt = 0;
	int x, y = 1, z;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((y << (31 - x)) & num);
		if (p >> (31 - x))
			flg = 1;
		if (flg)
		{
			z = p >> (31 - x);
			_putchar(z + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		_putchar('0');
	}
	return (cnt);
}
