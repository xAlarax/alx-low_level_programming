#include <stdio.h>
/**
  *main - prints the alphabet in lowercase
  *Return: 0 always success
  */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
		if (c != 'q' && c != 'e')
			putchar(c);
	c++;
	putchar('\n');
	return (0);
}
