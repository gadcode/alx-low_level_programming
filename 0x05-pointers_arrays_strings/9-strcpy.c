#include "main.h"

/**
 * _strcpy - Copies the string pointed to by 'src'
 * @dest: Where the buffer will be pointed to.
 * @src: The source of the string to be pointed.
 *
 * Author: @gadcode
 * Date: 19/09/2023
 *
 * Return: the pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
