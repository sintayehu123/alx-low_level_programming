#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list of type listint_t
 *
 * Return: address of node where loop starts, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *get = head;

	while (start != NULL && get != NULL && get->next != NULL)
	{
		start = start->next;
		get = (get->next)->next;

		if (start == get)
		{
			get = head;
			while (start != get)
			{
				start = start->next;
				get = get->next;
			}

			return (start);
		}
	}

	return (NULL);
}
