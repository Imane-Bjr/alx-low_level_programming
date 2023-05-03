#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to head
 * Return: number of elem
 */
size_t free_listint_safe(listint_t **h)
{
	int var;
	size_t elem = 0;
	listint_t *p;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		var = *h - (*h)->next;
		if (var > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			elem++;
		}
		else
		{
			free(*h);
			*h = NULL;
			elem++;
			break;
		}
	}

	return (elem);
}

