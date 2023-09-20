#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: The first parameter
 * @src: The second parameter
 *
 * Author: @gadcode
 * Date: 20/09/2023
 * Time: 10:51 PM
 *
 * Return: a pointer to the resulting 'dest'
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
