#include "lists.h"
/**
 * find_last_node - retuens a pointer of last node
 * @head: pointer to the head of listint_t list
 * Return: pointer
 */
listint_t *find_last_node(listint_t *head)
{
	for (; head->next != NULL; head = head->next)
		;
	return (head);
}
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of listint_t list
 * @n: number to add at the end of listint_t list
 * Return: address of new elem, NULL when failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd, *current_nd = *head;

	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	new_nd->next = NULL;

	if (*head == NULL)
		*head = new_nd;
	else
	{
		current_nd = find_last_node(current_nd);
		current_nd->next = new_nd;
	}
	return (*head);
}


