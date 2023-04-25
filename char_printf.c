#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * print_char - prints character
 * @c: char to be prited
 * Return 1
 */

int print_char(va_list ch)
{
unsigned char c;
c = va_arg(ch, int);
_putchar(c);
return (1);
}

/**
 * print_percent - prints persentage
 * Return: 1
 */
int print_percent(void)
{
_putchar('%');
return (1);
}
