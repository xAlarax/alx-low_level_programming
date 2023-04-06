#include "main.h"
/**
  * _puts_recursion - function that prints string
  * @s: pointer variable
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
