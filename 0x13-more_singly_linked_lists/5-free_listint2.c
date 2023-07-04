#include "lists.h"
/**
 * free_listint2 - fctn that free list from memory
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
