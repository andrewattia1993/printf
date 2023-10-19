#include "main.h"


/**
 * print_number - function that prints numbers
 * @n: number to be printed
 * Return: void on print_number function
*/

void print_int(va_list n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar ((i % 10) + '0');
}

/**
 * print_number - function that prints numbers
 * @n: number to be printed
 * Return: void on print_number function
*/

void print_dec(va_list n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar ((i % 10) + '0');
}
