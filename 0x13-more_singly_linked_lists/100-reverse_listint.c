#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		*head = next;
	}
	*head = previous;
	return (*head);
}

