#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to head
 * @idx: index of the list where we should add node
 * @n: node
 * Return: address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nd, *current_nd, *previous;
	unsigned int i;

	for (i = 0, previous = NULL, current_nd = *head;
			current_nd != NULL && i < idx;
			i++, previous = current_nd,
			current_nd = current_nd->next)
		;
	if (i != idx)
		return (NULL);
	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	new_nd->next = current_nd;
	if (previous == NULL)
		*head = new_nd;
	else
		previous->next = new_nd;
	return (new_nd);
}

