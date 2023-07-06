#include "main.h"
#include <stdio.h>
/**
 * get_bit - fct
 * @n: num
 * @index: position for specific bit
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
