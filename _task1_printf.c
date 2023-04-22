#include <stdarg.h>
#include "main.h"

/**
 * _printf - function to print
 * @format: what to print
 * Return: the string to be printed
 */
int _printf(const char *format, ...)
{
	conversion_array fa[] = {
		{"%c", _char},
		{"%s", _string},
		{"%%", _percent}
	};
	va_list args;
	int i, j, length = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			while (j < 3)
			{
				if (_strcmp(&format[i], fa[j].h) == 0)
				{
					length += fa[j].func(args);
					i += 2;
					break;
				}
				j++;
			}
			if (j >= 3)
			{
				_putchar(format[i]);
				length++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++; }
} va_end(args);
	return (length); }
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between first unmatched characters
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - s2[i]);
}
