#ifndef LISTS_H
#define LISTS_H

#define <stdio.h>
#define <stdlib.h>
#define <stddef.h>
#define <string.h>

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
} list_s;

int _putchar(char c);

#endif /* LISTS_H */
