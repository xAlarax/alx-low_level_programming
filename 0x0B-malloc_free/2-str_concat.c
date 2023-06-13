#include "main.h"
#include <string.h>
/**
 * str_concat - function
 * @s1: p1
 * @s2: p2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	char *ps;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ps = malloc((l1 + l2 + 1) * sizeof(char));
	if (ps == NULL)
		return (NULL);
	for (i = 0; i < l1 ; i++)
		ps[i] = s1[i];
	for (i = 0; i < l2 ; i++)
		ps[l1 + i] = s2[i];
	ps[l1 + l2] = '\0';
	return (ps);
}
