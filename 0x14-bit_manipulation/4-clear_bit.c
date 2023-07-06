#include "main.h"
/**
 * clear_bit - fct
 * @n: num
 * @index: position of bit
 * Return: 1 success -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
