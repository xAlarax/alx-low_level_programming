#include "main.h"
/**
 * create_array - function
 * @size: size
 * @c: variable
 * Return: 0 or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(c));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		p[i] = c;
	return (p);
}
