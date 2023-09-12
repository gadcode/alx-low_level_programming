#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The result returned by the function
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: 1 if c is a letter, lowercase of uppercase,
 * and returns 0 if otherwise.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
