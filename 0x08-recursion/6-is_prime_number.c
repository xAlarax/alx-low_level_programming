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
int _prime(int n, int m);
/**
 * is_prime_number - checks if it's a prime number or not
 * @n: the number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
/**
 * _prime - second function
 * @n: the same num
 * @m: deviser
 * Return: 0 or 1
 */
int _prime(int n, int m)
{
	int p = _sqrt_recursion(n);

	if (n % m == 0 && m >= p)
		return (0);
	else if (m > p)
		return (1);
	return (_prime(n, m + 1));
}
