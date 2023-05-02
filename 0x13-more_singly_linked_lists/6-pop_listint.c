#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head
 * Return: head node's data(n), if empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current_nd = *head;
	int data;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	data = current_nd->n;
	return (data);
}
