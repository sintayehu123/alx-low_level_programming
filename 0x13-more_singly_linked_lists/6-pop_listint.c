#include "lists.h"

/**
 * pop_listint - returns data from and then deletes/frees memory allocated
 * to the first member of a struct list type listint_t
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * Return: int value of node deleted from start of list
 */

int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int i;

	if (!head)
		return (0);

	if (*head)
	{
		delete_node = *head;
		*head = (*head)->next;
		i = delete_node->n;
		free(delete_node);
		return (i);
	}
	else
		return (0);
}
