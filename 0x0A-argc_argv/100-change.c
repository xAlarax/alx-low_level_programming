#include <stdio.h>
#include <stdlib.h>
/**
 * main - fct
 * @argc: num
 * @argv: string
 * Return: 0 or one
 */
int main(int argc, char *argv[])
{
	int mon, num = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	mon = atoi(argv[1]);

	while (mon > 0)
	{
		if (mon >= 25)
			mon -= 25;
		else if (mon >= 10)
			mon -= 10;
		else if (mon >= 5)
			mon -= 5;
		else if (mon >= 2)
			mon -= 2;
		else if (mon >= 1)
			mon -= 1;
		num += 1;
	}
	printf("%d\n", num);
	return (0);
}
