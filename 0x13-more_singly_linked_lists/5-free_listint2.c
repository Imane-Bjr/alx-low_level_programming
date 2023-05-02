#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 * @head: pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_nd;

	if (head == NULL || *head == NULL)
		return;
	current_nd = *head;
	while (head)
	{
		*head = (*head)->next;
		free(current_nd);
		current_nd = *head;
	}
	head = NULL;
}

