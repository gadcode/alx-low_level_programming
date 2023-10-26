#include "lists.h"

/**
 * listint_len -returns the number of a element
 * in a linked list
 * @h: pointer that points to the struct.
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
