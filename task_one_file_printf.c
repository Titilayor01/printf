#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: A character string.
 *
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings), or -1 if an error occurs.
 */


int _printf(const char *format, ...)

{
	va_list args;
	int count = 0;


	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)

			{
				case 'c':
					count += putchar(va_arg(args, int));
					break;
				case 's':
					count += write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
					break;

				case '%':
					count += putchar('%');
					break;

				default:
					return (-1);
			}
		}
		else
		{
			count += putchar(*format);
		}

		format++;

	}
	va_end(args);
	return (count);
}

