#include "main.h"
/**
 * print_binary_helper - fct
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n >> 1);
	_putchar((n & 1) + 48);
}
/**
 * print_binary - fct
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	print_binary_helper(n);
}
