#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_octal - prints octal
 * @o: octal to be printed
 * Return: size
 */

int print_octal(va_list oct)
{
unsigned int leh, pow, y, digit, z, n;
int cnt = 0;
z = va_arg(oct, unsigned int);
if (z != 0)
{
n = z;
leh = 0;
while (n != 0)
{
n /= 8;
leh++;
}
pow = 1;
for (y = 1; y <= leh - 1; y++)
pow *= 8;
for (y = 1; y <= leh; y++)
{
digit = z / pow;
_putchar(digit + '0');
cnt++;
z -= (digit * pow);
pow /= 8;
}
}
else
{
_putchar('0');
return (1);
}
return (cnt);
}
