#include "main.h"
/**
  * print_last_digit - prints last digit
  * @n: character
  * Return: 0 Always success
  */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (_putchar((n % 10) + '0'));
}
