#include "main.h"
/**
  * _puts_recursion - function that prints string
  * @s: pointer variable
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	while(*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
