#include "main.h"

/*
 * print_oct - function that prints oct.
 * @va_list : va_list val
 * @val : value to be listed
 * Return: int f count
 * print_oct - t print ocatl
 */

int print_oct(va_list val)
{
	int i, count = 0, *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = mallc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 8;
		tmp = tmp / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] = '0');
	}
	free(array);
	return (count);
}
