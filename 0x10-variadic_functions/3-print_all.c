#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print format
 * @format: print all
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int x = 0;
	char *str;
	char *comma = "";

	va_start(var, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 's':
					str = va_arg(var, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", comma, str);
					break;
				case 'i':
					printf("%s%d", comma, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(var, double));
					break;
				case 'c':
					printf("%s%c", comma, va_arg(var, int));
					break;
				default:
					x++;
					continue;
			}
			comma = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(var);
}
