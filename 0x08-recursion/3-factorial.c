#include "main.h"
/**
 * factorial - calculate factoriale of a number
 * @n: the number factorial
 * Return: the factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
