#include "main.h"
/**
 * get_endianness - fct
 * Return: for big endian and for little endian 1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	return (0);
}
