#include <stdarg.h>
#include "main.h"

/**
 * _char - function that prints a character
 * @zab: argument passed
 *
 * Return: 1 always
 */
int _char(va_list zab)
{
	char c = va_arg(zab, int);
	_putchar(c);

	return (1);
}
