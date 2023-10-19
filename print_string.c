#include "main.h"

/**
 * print_string - function that prints a string
 * @va: value of type va_list
 * Return: the length of the string
 */


int print_string(va_list va)
{
	char *str;
	int i, length;

	str = va_arg(val, char *)

		if (str == NULL)
		{
			str == (NULL);
			length = _sterlen(str);
			for (i = 0; i < length; i++)
				_putchar(str[i]);
			return (length);
		}
		else
		{
			length = _sterlen(str);
			for (i = 0; i < length; i++)
				_putchar(str[i]);
			return (length);
		}
}
