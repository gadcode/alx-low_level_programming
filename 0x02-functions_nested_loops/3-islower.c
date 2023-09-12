#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The result returned by the function
 *
 * Author: @gadcode
 * Date: 12/09/2023
 *
 * Return: 1 if c is lowercase, and 0 if otherwise.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
