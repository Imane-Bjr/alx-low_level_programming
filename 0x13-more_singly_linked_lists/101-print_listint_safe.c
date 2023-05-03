#include "lists.h"
/**
 * realloc_mem - reallocates memory for array
 * @old_l: old list
 * @s: size og new list
 * @new_l: new list
 * Return: pointer to new list
 */
const listint_t **realloc_mem(const listint_t **old_l, size_t s,
		const listint_t *new_l)
{
	const listint_t **n_list;
	size_t i;

	n_list = malloc(s * sizeof(listint_t *));
	if (n_list == NULL)
	{
		free(old_l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		n_list[i] = old_l[i];
	n_list[i] = new_l;
	free(old_l);
	return (n_list);
}
/**
 * print_listint_safe - prints a listint
 * @head: pointer to head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (count);
			}
		}
			count++;
			l = realloc_mem(l, count, head);
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
	}
		free(l);
		return (count);
}

