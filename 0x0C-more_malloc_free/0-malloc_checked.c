#include "main.h"

/**
 * malloc_checked - allocates memory using 'malloc'
 * @b: integer parameter
 *
 * Author: @gadcode
 * Date: 07/10/2023
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);

	if (allocate == NULL)
	{git s
		exit(98);
	}
	return (allocate);
}
