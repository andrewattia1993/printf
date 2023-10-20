#include "main.h"


/**
 * print_int - function that prints numbers
 * @args: number to be printed
 * Return: void on print_number function
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int i = 1;
	int last = n % 10, numb, digit, exp = 1;

	n = n / 10;
	numb = n;
	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last + '0');
	return (i);
}

/**
 * print_dec - function that prints numbers
 * @args: number to be printed
 * Return: void on print_number function
 */

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int i = 1;
	int last = n % 10, numb, digit, exp = 1;

	n = n / 10;
	numb = n;
	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last + '0');
	return (i);
}

