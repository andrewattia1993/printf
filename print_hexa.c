#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_hexa - function that print hexa
 * @val : value to be listed
 * Return: int g count
 */

int print_hexa(va_list val)
{
	int i, count = 0, *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 16;
		tmp = tmp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] = '0');
	}
	free(array);
	return (count);
}
