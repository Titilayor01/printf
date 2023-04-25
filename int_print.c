#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints integer
 * @i: integer to be printed
 * Return: size
 */

int print_int(va_list x)
{
int leh, pow, y, digit, z, cnt, n;
cnt = 0;
z = va_arg(x, int);
if (z != 0)
{
if (z < 0)
{
_putchar('-');
cnt++;
}
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
if (z < 0)
_putchar((digit * -1) + 48);
else
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