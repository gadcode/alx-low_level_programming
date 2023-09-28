#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: the character to be located
 *
 * Author: :gadcode
 * Date: 28/09/2023
 *
 * Return: a pointer when the character is found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
