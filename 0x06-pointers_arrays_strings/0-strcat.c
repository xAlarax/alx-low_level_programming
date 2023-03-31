#include "main.h"
/**
 * *_strcat -  a function that concat two strings
 * @dest: pointer string one variable
 * @src: pointer string 2nd variable
 * Return: always *dest
 */
char *_strcat(char *dest, char *src)
{
	int dn = 0, i, sn = 0;

	while (dest[dn])
		dn++;

	while (src[sn])
		sn++;


	for (i = 0; i < sn; i++)
		dest[dn + i] = src[i];

	dest[dn + i] = '\0';

	return (dest);
}
