#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a struct list type listint_t
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @n: int to store in n member of new listint_s struct
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *prev_tail = *head;

	new_tail = malloc(sizeof(listint_t));
	if (!new_tail)
	{
		free(new_tail);
		return (NULL);
	}
	new_tail->n = n;
	new_tail->next = NULL;

	if (!*head)
		*head = new_tail;
	else
	{
		while (prev_tail->next)
			prev_tail = prev_tail->next;

		prev_tail->next = new_tail;
	}
	return (new_tail);
}
