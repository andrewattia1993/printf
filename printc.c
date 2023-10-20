#include "main.h"

/**
 * print_char - prints a char
 * @val: value of type va_list
 * Return: return is 1
 */
int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}

