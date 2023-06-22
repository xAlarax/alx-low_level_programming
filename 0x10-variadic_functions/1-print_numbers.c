#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print number with separator
 * @separator: ','
 * @n: number of intigers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x = 0;

	va_start(nums, n);

	while (x < n)
	{
		if (x != n - 1 && separator)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
		x++;
	}

	va_end(nums);
	printf("\n");
}
