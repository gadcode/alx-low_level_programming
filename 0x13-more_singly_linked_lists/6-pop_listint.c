#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the struct
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *fr;
	int node_data;

	if (*head == NULL)
	{
		return (0);
	}

	node_data = (*head)->n;
	fr = (*head)->next;
	free(*head);
	*head = fr;
	return (node_data);
}
