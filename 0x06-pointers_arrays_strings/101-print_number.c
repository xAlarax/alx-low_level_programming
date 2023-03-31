#include "main.h"
/**
 * print_number - a function that print number
 * @n: variable input
 * Return: void nothing
 */
void print_number(int n)
{
	unsigned int i;

	if (i < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
