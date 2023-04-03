#include "main.h"
/*
 * _memset - function that concanerates strings
 * @s: pointer variable
 * @b: variable
 * @n: size
 * Return: s Always 
 */
char *_memset(char *s, char b, unsigned int n){
	char *pS = s;
	while (n-- > 0){
		*pS++ = b;
	}
	return (s);
}
