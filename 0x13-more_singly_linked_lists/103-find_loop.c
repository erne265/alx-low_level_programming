#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *starts = head;
	listint_t *ends = head;

	if (!head)
		return (NULL);

	while (starts && ends && ends->next)
	{
		ends = ends->next->next;
		starts = starts->next;
		if (ends == starts)
		{
			starts = head;
			while (starts != ends)
			{
				starts = starts->next;
				ends = ends->next;
			}
			return (ends);
		}
	}

	return (NULL);
}

