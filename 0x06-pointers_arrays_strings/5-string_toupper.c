#include "main.h"
/**
 * *string_toupper - a function that switch string to upper case
 * @s: pointer variable
 * Return: Always *s Success
 */
char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] = s[n] - 32;
		}
	}

	return (s);
}
