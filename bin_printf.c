#include "main.h"
#include <stdarg.h>


void convert_and_print(unsigned int n, int *cnt);

/**
 * print_bin - prints int to binary
 * bin: pointer to unsigned int
 * Return: integer, number of characters printed
 */

int print_bin(va_list bin)
{
	unsigned int n = va_arg(bin, unsigned int);
	int cnt = 0;

	convert_and_print(n, &cnt);

	return (cnt);
}

/**
 * convert_and_print - converts int to binary, then prints
 * @n: unsigned int
 * @cnt: pointer to count the iteration
 */

void convert_and_print(unsigned int n, int *cnt)
{
	if (n / 2)
		convert_and_print(n / 2, cnt);

	_putchar((n % 2) + '0');

	(*cnt)++;
}
