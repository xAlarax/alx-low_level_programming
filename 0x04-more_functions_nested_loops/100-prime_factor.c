#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int number = 612852475143, factor = 2, largestFactor = 1;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largestFactor = factor;
			number /= factor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
		factor++;
	}
	printf("%lu\n", largestFactor);
	return (0);
}
