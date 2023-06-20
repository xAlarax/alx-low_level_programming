#include <stdio.h>

/**
 * main - function that print the name of thefile it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
