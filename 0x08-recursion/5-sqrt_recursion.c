#include "main.h"
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: number
 * Return: the value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - second function
 * @n: the same number
 * @m: the variable
 *Return: the square root
 */
int _sqrt(int n, int m)
{
	if (n < 0 || m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
