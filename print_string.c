#include "main.h"

/**
 * print_string - function that prints a string
 * @val: value of type va_list
 * Return: the length of the string
 */


int print_string(va_list val)
{
	char *str;
	int i, length;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
