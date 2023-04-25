#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_unsigned - prints unsigned
 * @d: unsigned to be printed
 * Return: size
 */

int print_unsigned(va_list u)
{
unsigned int leh, pow, y, digit, z, n;
int cnt = 0;
z = va_arg(u, unsigned int);
if (z != 0)
{
n = z;
leh = 0;
while (n != 0)
{
n /= 10;
leh++;
}
pow = 1;
for (y = 1; y <= leh - 1; y++)
pow *= 10;
for (y = 1; y <= leh; y++)
{
digit = z / pow;
_putchar(digit + '0');
cnt++;
z -= (digit * pow);
pow /= 10;
}
}
else
{
_putchar('0');
return (1);
}
return (cnt);
}
