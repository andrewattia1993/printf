#include "main.h"

/**
 *_printf - printf function
 * @format: identifier look for
 * Return: integer
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_percentage},
		{"%d", print_dec}, {"%i", print_int}, {"%c", print_reverse},
		{"%o", print_oct}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%S", print_spe_string}
	};

	va_list args;
	int i = 0, length = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] == '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				length = length + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
