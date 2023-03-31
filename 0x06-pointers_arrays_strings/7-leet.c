#include "main.h"
/**
 * *leet - a function that replace some alphabet with numbers
 * @s: pointer variable
 * Return: Always *s Success
 */
char *leet(char *s)
{
	int n, m;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[n] ==  a[m])
			{
				s[n] = b[m];
			}
		}
	}
	return (s);
}
