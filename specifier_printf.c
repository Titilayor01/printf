#include "main.h"

/**
  * print_S - prints custom specifier
  * @list: va_list
  * Return: number of characters printed
  */
int print_S(va_list s)
{
int cnt = 0, x = 0;
char *str = va_arg(s, char *);
char ch;

if (str == NULL || *str == '\0')
return (0);

while (str[x])
{
ch = str[x];
if ((ch > 0 && ch < 32) || ch >= 127)
{
cnt += _putchar('\\');
cnt += _putchar('x');
cnt += _putchar('0');
cnt += _printf("%X", (unsigned int) ch);
}
else
{
cnt += _putchar(ch);
}
x++;
}
return (cnt);
}
