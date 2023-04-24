#include "main.h"

/**
 *printf_pointer - to print hexadecimal number.
 *@val: argument
 *Return: count
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int k;
	int l;
	int m;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (m = 0; s[m] != '\0'; m++)
		{
			_putchar(s[m]);
		}
		return (m);
	}

	k = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	l = printf_hex_aux(k);
	return (l + 2);
}
