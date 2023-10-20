#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to next node
 *
 * Description: A singly linked node structure.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
