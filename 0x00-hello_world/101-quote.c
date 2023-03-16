#include <unistd.h>
/**
 * main - prints and that piece of art is useful"
 * Return: 1 if the number is positive. 0 otherwise
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, sizeof(quote) - 1);

	return (1);
}
