#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - prints output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);
	for (i = 0; format[i]; i++)
{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
{
	case 'c':
		count += _putchar(va_arg(args, int));
		break;
	case 's':
		count += write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
		break;
	case '%':
		count += _putchar('%');
		break;

	default:
		_putchar('%');
		_putchar(format[i]);
		count += 2;
}
}
else
{
	_putchar(format[i]);
	count++;
}

}
va_end(args);
return (count);
}
