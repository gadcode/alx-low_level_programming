#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 successful, -1 if not successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *pre_tmp = *head;
	unsigned int i;

	if (pre_tmp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(pre_tmp);
		return (1);
	}

	for (i = 0 ; i < (index - 1) ; i++)
	{
		if (pre_tmp->next == NULL)
		{
			return (-1);
		}
		pre_tmp = pre_tmp->next;
	}
	tmp = pre_tmp->next;
	pre_tmp->next = tmp->next;
	free(tmp);
	return (1);
}
