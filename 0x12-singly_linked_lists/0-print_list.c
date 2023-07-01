#include "lists.h"
/**
 * print_list - function that all elements of a list_t
 * @h: head of linked
 * Return: the number of nodes
 */
size_t	print_list(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
