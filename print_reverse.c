#include "main.h"

/**
 * print_reverse -  function that prints a str in reverse
 * @val: arguments
 * Return: the string
 */

int print_reverse(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int k = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (k);
}

