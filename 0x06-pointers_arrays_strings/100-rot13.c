#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: the encoded string.
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
			*ptr += 13;
		else if ((*ptr >= 'n' && *ptr <= '2') || (*ptr >= 'N' && *ptr <= 'Z'))
			*ptr -= 13;

		ptr++;
	}

	return (str);
}
