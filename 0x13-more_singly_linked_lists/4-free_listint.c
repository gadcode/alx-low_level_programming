#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the pointer to the struct
 *
 * Return: number of elements
 */

void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = fr->next;
		free(fr);
	}
}
