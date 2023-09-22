#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The copy of the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}

	return (dest);
}
