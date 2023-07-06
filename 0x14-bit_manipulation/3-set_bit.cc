#include "main.h"
/**
 * set_bit - fct
 * @n: num
 * @index: bit position
 * Return: 1 success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask  = 1 << index;
	if (index > UNSINED_INT_LENGTH || !n)
		return (-1);
	*n = *n | mask;
	return (1);
}
