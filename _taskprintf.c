#include "main.h"
/**
 *_taskprintf - selects the right function to print.
 *
 *@format: the identifier
 *
 *Return: string length
 */
int _printf(const char *format, ...)
{
	convert_match k[] = {
		{"%i", printf_int},
		{"%d", printf_dec},
		{"%r", printf_srev},
		{"%R", printf_rot13},
		{"%c", printf_char},
		{"%b", printf_bin},
		{"%u", printf_unsigned},
		{"%o", printf_oct},
		{"%x", printf_hex},
		{"%X", printf_HEX},
		{"%%", printf_37}
		{"%S", printf_exclusive_string},
		{"%s", printf_string},
		{"%p", printf_pointer}
	};

	va_list args;
	int q = 0, n, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[q] != '\0')
	{
		n = 13;
		while (n >= 0)
		{
			if (m[n].id[0] == format[q] && m[n].id[1] == format[q + 1])
			{
				len += m[n].f(args);
				q = q + 2;
				goto Here;
			}
			n--;
		}
		_putchar(format[q]);
		len++;
		q++;
	}
	va_end(args);
	return (len);
}
