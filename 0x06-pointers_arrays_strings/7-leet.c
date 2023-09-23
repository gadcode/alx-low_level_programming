#include "main.h"

/**
 * leet - encodes a string into '1337'
 * @str: The parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The encoded string
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr == 'a') || (*ptr == 'A'))
			*ptr = '4';
		else if ((*ptr == 'e') || (*ptr == 'E'))
			*ptr = '3';
		else if ((*ptr == 'o') || (*ptr == 'O'))
			*ptr = '0';
		else if ((*ptr == 't') || (*ptr == 'T'))
			*ptr = '7';
		else if ((*ptr == 'l') || (*ptr == 'L'))
			*ptr = '1';

		ptr++;
	}

	return (str);
}
