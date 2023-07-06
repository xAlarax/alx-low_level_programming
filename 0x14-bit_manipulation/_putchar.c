#include <unistd.h>
#include "main.h"
/**
 * _putchar - fct
 * @c: var
 * Return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
