#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a variable that points to a listint_t struct
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head && head->next < head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		count++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		count++;
		printf("-> [%p] %d\n", (void *) head->next, head->next->n);
	}
	return (count);
}
