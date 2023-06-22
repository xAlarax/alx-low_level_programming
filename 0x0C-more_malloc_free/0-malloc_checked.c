#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: number
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pb;

	pb = malloc(b);
	if (pb == NULL)
		exit(98);
	return (pb);
}
