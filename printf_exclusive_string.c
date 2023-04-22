#include "main.h"

/**
 *printf_exclusive_string - print exclusive strings
 *
 *@val: argument received
 *
 *Return: to return string length
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int y, lenh = 0;
	int cas;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] < 32 || s[y] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lenh = lenh + 2;
			cas = s[y];
			if (cas < 16)
			{
				_putchar('0');
				lenh++;
			}
			lenh = lenh + printf_HEX_aux(cas);
		}
		else
		{
			_putchar(s[y]);
			lenh++;
		}
	}
	return (lenh);
}
