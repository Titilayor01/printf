#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char ch);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list ch);
int print_string(va_list str);
int print_dec(va_list dec);
int print_hex(va_list hex);
int print_HEX(va_list HEX);
int print_octal(va_list oct);
int print_bin(va_list bin);
int print_unsigned(va_list u);
int print_rot13(va_list r);
int print_rev(va_list v);
int print_int(va_list x);
int print_p(va_list P);
int print_S(va_list s);

/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

#endif
