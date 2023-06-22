#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum the parametre
 * @n: number of times
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;
	int sum1 = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n ; x++)
		sum1 += va_arg(nums, int);

	va_end(nums);
	return (sum1);
}
