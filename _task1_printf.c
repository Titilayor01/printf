#include "main.h"

/**
 * printf_HEX - prints an hexgecimal number.
 * @val: arguments
 * Return: counter
 */
int printf_HEX(va_list val)
{
	int q;
	int *array;
	int count = 0;
	unsigned int digit = va_arg(val, unsigned int);
	unsigned int temp = digit;

	while (digit / 16 != 0)
	{
		digit /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (q = 0; q < count; q++)
	{
		array[q] = temp % 16;
		temp /= 16;
	}
	for (q = count - 1; q >= 0; q--)
	{
		if (array[q] > 9)
			array[q] = array[q] + 7;
		_putchar(array[q] + '0');
	}
	free(array);
	return (count);
}
