#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success, returns the character printed as an unsigned char.
 * On error, EOF, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (putchar(1, &c, 1));
}
