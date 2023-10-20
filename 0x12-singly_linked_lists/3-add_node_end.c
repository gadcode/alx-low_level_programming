#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list_t list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *final = *head;
	int new_elem = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = new_node;
	}

	while (str[new_elem])
	{
		new_elem++;
	}
	new_node->len = new_elem;
	return (new_node);
}
