#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the struct.
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int elem;

	elem = 0;

	while (h != 0)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
