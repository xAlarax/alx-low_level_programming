#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers
 *Return: 0 Always
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, temp;

	printf("%d, %d", fib1, fib2);
	for (int i = 3; i <= 50; i++)
	{
		temp = fib1 + fib2;
		printf(", %d", temp);
		fib1 = fib2;
		fib2 = temp;
	}
	printf("\n");
	return (0);
}

