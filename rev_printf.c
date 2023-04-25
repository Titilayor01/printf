#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - prints reverse of string
 * @r: string to be reversed
 * Return: size
 */

int print_rev(va_list v)
{
char *st;
int x = 0, y = 0;
st = va_arg(v, char *);
if (st == NULL)
st = ")llun(";
while (st[x] != '\0')
x++;
for (x -= 1; x >= 0; x--)
{
_putchar(st[x]);
y++;
}
return (y);
}
