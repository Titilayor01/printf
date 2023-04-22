#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: This is the char to be printed
 *
 * Return: returns the character printed as an unsigned char on success
 * On error, EOF, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
