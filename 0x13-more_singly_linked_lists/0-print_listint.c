#include "lists.h"
/**
 * print_listint - fct that prints
 * @h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;

	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
