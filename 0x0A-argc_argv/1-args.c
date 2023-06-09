#include <stdio.h>
/**
 * main - return num of args with a new line
 * @argc: number
 * @argv: string
 * Return: none
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%d/n", argc);
	}
	return (0);
}
