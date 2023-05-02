#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to struct listint_t
 * Return: number of nods
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		n_nodes++;
	}

	return (n_nodes);
}

