#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;
	listint_t *next;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);

		if (next <= current)
		{
			*h = NULL;
			return (size);
		}

		current = next;
	}

	*h = NULL;
	return (size);
}
