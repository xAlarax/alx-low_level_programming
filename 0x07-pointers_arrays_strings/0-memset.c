#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer variable
 * @n: variable
 * @b: constant
 * Return: S Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
