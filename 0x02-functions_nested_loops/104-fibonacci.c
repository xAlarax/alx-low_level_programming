#include <stdio.h>
/**
 * main - print numbers
 * Return: 0 Always
 */
int main(void)
{
	int first = 1, second = 2, next;
	int count = 2;

	printf("%d, %d, ", first, second);
	while (count < 98)
	{
		next = first + second;
		first = second;
		second = next;
		count++;
		printf("%d", next);
		if (count < 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
