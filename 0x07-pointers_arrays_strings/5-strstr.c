#include "main.h"
#include <string.h>
/**
 * _strstr - entry point
 * @haystack: pointer variable
 * @needle: pointer variable
 * Return: beginning of located strings
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
