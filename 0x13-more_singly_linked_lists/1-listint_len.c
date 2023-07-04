#include "lists.h"
/**
 * listint_len - fct return len
 *
 * @h: head
 * Return: len
 */
size_t	listint_len(const listint_t *h)
{
	size_t		len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
