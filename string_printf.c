#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_string - prints string
 * @str: string to be printed
 * Return: i
 */
int print_string(va_list str)
{
char *my_s;
int x = 0;
my_s = va_arg(str, char *);
if (my_s == NULL)
my_s = "(null)";
while (my_s[x])
{
_putchar(my_s[x]);
x++;
}
return (x);
}
