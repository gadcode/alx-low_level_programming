#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
