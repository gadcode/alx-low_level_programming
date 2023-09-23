#include "main.h"

/**
 * string_toupper - changes all letters to uppercase
 * @str: the parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The uppercase of the given string
 */

char string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (str);
}
