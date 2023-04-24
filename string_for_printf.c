#include "main.h"
/**
 *printf_string - string for printf
 *
 *@val: argument
 *
 *Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int x, lenh;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		lenh = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (lenh);
	}
	else
	{
		lenh = _strlen(s);
		for (x = 0; x < lenh; x++)
			_putchar(s[x]);
		return (lenh);
	}
}
