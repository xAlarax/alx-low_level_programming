#include "main.h"
/**
 * _pow_recursion - prints power of number
 * @x: number
 * @y: the power of number
 * Return: the value of the powered num
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
