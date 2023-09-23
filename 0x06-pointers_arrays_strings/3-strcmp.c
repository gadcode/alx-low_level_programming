#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The difference between the strings.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		else
		{
			return (0);
		}
		s1++;
		s2++;
	}
}
