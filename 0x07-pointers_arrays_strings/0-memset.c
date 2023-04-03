#include "main.h"
/*
 * 0-memset.c - function that concanerates strings
 * @s: pointer variable
 * @b: variable
 * @n: size
 * Return: s Always 
 */
char *_memset(char *s, char b, unsigned int n){
	char *pS = s;
	while (n > 0){
		n--;
		*pS++ = b;
	}
	return (s);
}
