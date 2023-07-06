#include "main.h"
/**
 * flip_bits - fct
 * @n: num1
 * @m: num2
 * Return: count num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int iter;
	unsigned int count;

	iter = 0;
	count = 0;
	while (iter <= 63)
	{
		count += ((n >> iter) & 1) != ((m >> iter) & 1);
		iter++;
	}
	return (count);
}
