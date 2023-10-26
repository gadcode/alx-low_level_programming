#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *point;

	if (&*head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		point = *head;

		while (point->next != NULL)
		{
			point = point->next;
		}
		point->next = new_node;
	}
	return (*head);
}
