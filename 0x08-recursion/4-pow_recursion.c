#include "main.h"
/**
 * _pow_recursion - returns a value raised by power
 * @x: the value
 * @y: the power that is raised
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, (y - 1))));
}
