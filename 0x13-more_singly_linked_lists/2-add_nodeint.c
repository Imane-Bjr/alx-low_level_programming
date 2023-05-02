#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of listint_t list
 * @n: number to be added to linstint_t list
 * Return: address of the new elem, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nd;

	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	new_nd->next = *head;
	*head = new_nd;
	return (*head);
}

