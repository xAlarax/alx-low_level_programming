#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print a string
 * @separator: ',' or nothing
 * @n: how many string
 * Return: nothin
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int x = 0;
	char *str;

	va_start(string, n);

	while (x < n)
	{
		str = va_arg(string, char*);

		printf("%s%s", str != NULL ? str : "(nil)",
				x != n - 1 && separator != NULL ? separator : "");
	x++;
	}
	va_end(string);
	printf("\n");
}
