#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int new_elem = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[new_elem])
	{
		new_elem++;
	}

	new_node->len = new_elem;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
