#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: number of count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
