#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string parameter
 *
 * Author: @gadcode
 * Date: 29/09/2023
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
