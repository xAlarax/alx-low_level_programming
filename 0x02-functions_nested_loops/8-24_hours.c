#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int j;
	int n;

	j = 0;
	while (j <= 24)
	{
		n = 0;
		while (n <= 59)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
			n++;
		}
		j++;
	}
}
