#include "main.h"

/**
 * _calloc - allocates memory for an array, using 'malloc'
 * @nmemb: elements of array
 * @size: bytes of the array
 *
 * Author: @gadcode
 * Date: 08/10/2023
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x, y;
	char *array;

	y = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(y);

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < y; x++)
	{
		array[x] = 0;
	}

	return (array);
}
