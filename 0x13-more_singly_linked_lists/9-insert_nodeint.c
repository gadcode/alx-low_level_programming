#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the struct
 * @n: integer in the struct
 * @idx: index of the list where the new node should be added
 *
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *move = *head;
	unsigned int index;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (index = 0 ; index < idx - 1 ; index++)
		{
			move = move->next;
			if (move == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = move->next;
		move->next = new_node;
	}
	return (new_node);
}
