#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * find_correct_func - finding the format for _printf
 * @format: format
 * Return: NULL
 */

int (*find_correct_func(const char *format))(va_list)
{
unsigned int x = 0;
code_f find_f[] = {
{"ch", print_char},
{"str", print_string},
{"x", print_int},
{"dec", print_dec},
{"v", print_rev},
{"bin", print_bin},
{"u", print_unsigned},
{"oct", print_octal},
{"hex", print_hex},
{"HEX", print_HEX},
{"r", print_rot13},
{"s", print_S},
{"P", print_p},
{NULL, NULL}
};

while (find_f[x].sc)
{
if (find_f[x].sc[0] == (*format))
return (find_f[x].f);
i++;
}
return (NULL);
}

/**
 * _printf - produces an output based on format
 * @format: format
 * Return: size
 */

int _printf(const char *format, ...)
{
va_list list;
int (*f)(va_list);
unsigned int x = 0, leh = 0;
if (format == NULL)
return (-1);
va_start(list, format);
while (format[x])
{
while (format[x] != '%' && format[x])
{
_putchar(format[x]);
leh++;
x++;
}
if (format[x] == '\0')
return (leh);
f = find_correct_func(&format[x + 1]);
if (f != NULL)
{
leh += f(list);
x += 2;
continue;
}
if (!format[x + 1])
return (-1);
_putchar(format[x]);
leh++;
if (format[x + 1] == '%')
x += 2;
else
x++;
}
va_end(list);
return (leh);
}
