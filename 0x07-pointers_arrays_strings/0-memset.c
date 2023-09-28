#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memeory area
 * @b: constant byte
 * @n: bytes of memory
 *
 * Author: @gadcode
 * Date: 28/09/2023
 *
 * Return: a pointer to the memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
