#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of listint
 * Return: address of the node starting the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *previous;

	ptr = previous = head;

	while (head && ptr && ptr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = previous;
			previous = ptr;
			while (1)
			{
				ptr = previous;
				while (ptr->next != head && ptr->next != previous)
					ptr = ptr->next;
				if (ptr->next == head)
					break;
				head = head->next;
			}

			return (ptr->next);
		}
	}

	return (NULL);
}

