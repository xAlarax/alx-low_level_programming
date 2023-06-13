#include "main.h"
#include <string.h>
/**
 * _strdup - function
 * @str: ptr
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *pstr;

	if (str == NULL)
		return (NULL);

	pstr = malloc(strlen(str) + 1);

	if (pstr == NULL)
		return (NULL);
	strcpy(pstr, str);

	return (pstr);
}
