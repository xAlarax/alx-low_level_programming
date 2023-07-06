#include "main.h"
/**
 * get_bit - fct
 * @n: num
 * @index: position for specific bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > UNSINED_INT_LENGTH)
		return (-1);
	return ((n >> index) & 1);
}
