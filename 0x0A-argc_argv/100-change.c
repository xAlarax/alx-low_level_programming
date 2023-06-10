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
	int m;
	int i = 0;
	int j = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc == 1 || argc > 2)
	{
		printf("Error/n");
		return (1);
	}
		if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		m = atoi(argv[1]);

		while (m > 0)
		{
			while (m >= cent[i])
			{
				m -= cent[i];
				j++;
			}
			i++;
		}
		printf("%d\n", j);
	}
	return (0);
}
