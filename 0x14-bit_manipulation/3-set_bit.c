#include "main.h"
/**
 * set_bit - fct
 * @n: num
 * @index: bit position
 * Return: 1 success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
