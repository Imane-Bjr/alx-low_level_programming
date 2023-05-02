#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to head
 * @index: index of node to be deleted
 * Return: 1 when success, -1 when failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_nd, *previous;
	int result = -1;

	for (current_nd = *head, previous = NULL;
			current_nd != NULL && index--;
			previous = current_nd,
			current_nd = current_nd->next)
		;
	if (current_nd == NULL)
		return (result);
	if (previous == NULL)
	{
		*head = (*head)->next;
		result = 1;
	}
	else
	{
		previous->next = current_nd->next;
		result = 1;
	}
	free(current_nd);
	return (result);
}

