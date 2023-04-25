# include "main.h"

/**
 * rot13 - main function
 * @y: The argument pointer.
 *
 * Description: This function prints the rot13'ed string.
 *
 * Return: The total number of characters.
 */
int print_rot13(va_list r)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotstr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int y, x = 0, cnt = 0, pl = 0;
	char *s = va_arg(r, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[x] != '\0')
	{
		pl = 0;
		for (y = 0; alphabet[y] != '\0' && !pl; y++)
		{
			if (s[x] == alphabet[y])
			{
				_putchar(rotstr[y]);
				cnt++;
				pl = 1;
			}
		}
		if (!pl)
		{
			_putchar(s[x]);
			cnt++;
		}
		x++;
	}
	return (cnt);
}
