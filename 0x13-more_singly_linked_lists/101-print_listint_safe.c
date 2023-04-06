#include "lists.h"

/**
 * print_listint_safe - print all the elements of listint_t
 * @head: the head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t first = 0;
	size_t last;
	const listint_t *ptr = head;
	const listint_t *nxt;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);

		first++;
		ptr = ptr->next;
		nxt = head;

		last = 0;
		while (last < first)
		{
			if (ptr == nxt)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (first);
			}
			nxt = nxt->next;
			last++;
		}
	}
	return (first);
}
