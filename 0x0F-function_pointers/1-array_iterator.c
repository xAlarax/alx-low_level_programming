#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - iterate
 *@array: aray
 *@size: size of array
 *@action: ptr to fctn
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
