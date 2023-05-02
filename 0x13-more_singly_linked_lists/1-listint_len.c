#include "lists.h"
/**
 * listint_len - returns the number of elements in
 * a linked listint_t list
 * @h: pointer to listint_t
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}

