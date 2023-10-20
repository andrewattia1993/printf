#include "main.h"

/**
 * print_spe_string - function that prints special strings
 * @val: value from valist
 * Return: length
 */

int print_spe_string(va_list val)
{
	char *s;
	int i, length;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar ('\\');
			_putchar('x');
			length =  length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXA_spe(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
