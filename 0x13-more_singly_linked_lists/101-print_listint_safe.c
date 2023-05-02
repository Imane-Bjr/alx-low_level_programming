#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head
 * Return: nimber of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *ptr, *lp;

	if (!head)
		exit(98);
	ptr = head;
	lp = head;

	while (ptr && lp && lp->next)
	{
		ptr = ptr->next;
		lp = lp->next->next;

		if (ptr == lp)
		{
			ptr = lp;
			while (ptr != lp)
			{
				printf("[%p] %d\n", (void *)ptr, ptr->n);
				ptr = ptr->next;
				lp = lp->next;
				num++;
			}
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			num++;
			return (num);
		}
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	return (num);
}

