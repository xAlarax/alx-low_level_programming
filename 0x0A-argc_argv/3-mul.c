#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function
 * @argc: number of args
 * @argv: string
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	res = x * y;
	printf("%d\n", res);
	return (0);
}
